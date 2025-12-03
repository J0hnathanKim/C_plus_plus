/*
 * [프로그램 이름] 은행 계좌 시뮬레이터 (Bank Account Simulator)
 *
 * [프로그램 목적]
 *  - C++ 교재 1~6장에서 배운 핵심 개념 5가지를 실제 예제로 통합한다.
 *
 * [사용한 C++ 개념 (5개)]
 *  1) 클래스(class)를 이용한 계좌 모델링 (Account 클래스)
 *  2) 생성자 중복(Constructor Overloading)
 *      - Account()
 *      - Account(string owner, int initialDeposit)
 *  3) 함수 중복(Function Overloading)
 *      - deposit(int amount)
 *      - deposit(int amount, const string& memo)
 *  4) 디폴트 매개변수(Default Parameter)
 *      - transfer(Account& to, int amount, int fee = 0)
 *  5) 참조에 의한 전달(Call-by-reference)
 *      - transfer(Account& to, ...) 에서 to를 참조로 받아 실제 잔액을 변경
 *
 *  이 프로그램은 위의 5개 개념을 중심으로 작성되었으며,
 *  동적 메모리(new/delete), static 멤버, STL 등 다른 고급 기능은 사용하지 않았다.
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * [클래스] Account
 *  - 하나의 은행 계좌를 표현하는 클래스
 *  - 데이터(소유자 이름, 잔액)는 private으로 캡슐화
 *  - 외부에서는 public 멤버 함수만을 통해 접근하도록 설계
 */
class Account {
private:
    string owner;   // 계좌 소유자 이름 (외부에서 직접 접근 불가)
    int balance;    // 현재 잔액 (원 단위, 음수 허용 X)

public:
    /*
     * [개념 2 : 생성자 중복 - 기본 생성자]
     *  - 입금 없이 계좌를 여는 경우 사용
     *  - 소유자는 "UNKNOWN", 잔액은 0원으로 초기화
     */
    Account()
        : owner("UNKNOWN"), balance(0) // 멤버 이니셜라이저를 이용한 초기화
    {
        cout << "[기본 생성자] 소유자: " << owner
             << ", 잔액: " << balance << "원 계좌가 생성되었습니다.\n";
    }

    /*
     * [개념 2 : 생성자 중복 - 매개변수 있는 생성자]
     *  - 계좌를 열 때 소유자 이름과 초기 입금액을 함께 설정하는 경우 사용
     *  - owner와 balance를 전달받은 값으로 초기화
     */
    Account(const string& owner, int initialDeposit)
        : owner(owner), balance(initialDeposit)
    {
        cout << "[중복 생성자] 소유자: " << this->owner
             << ", 초기 잔액: " << this->balance << "원 계좌가 생성되었습니다.\n";
    }

    /*
     * [getter 함수들]
     *  - 보고서에서는 캡슐화 설명용으로 사용
     *  - const 함수로 선언하여 객체 상태를 변경하지 않음을 보장
     */
    string getOwner() const {
        return owner;
    }

    int getBalance() const {
        return balance;
    }

    /*
     * [개념 3 : 함수 중복 - 단순 입금]
     *  - amount만 전달받아 잔액을 증가시킨다.
     *  - 별도의 메모가 필요 없을 때 사용.
     */
    void deposit(int amount) {
        if (amount <= 0) {
            cout << "[입금 실패] 0원 이하 금액은 입금할 수 없습니다.\n";
            return;
        }

        balance += amount;
        cout << "[입금] " << owner << " 계좌에 "
             << amount << "원이 입금되었습니다. (현재 잔액: "
             << balance << "원)\n";
    }

    /*
     * [개념 3 : 함수 중복 - 메모를 포함한 입금]
     *  - 함수 이름은 deposit으로 동일하지만,
     *    두 번째 매개변수로 문자열 메모를 추가로 받는다.
     *  - C++의 함수 중복(function overloading) 예시.
     */
    void deposit(int amount, const string& memo) {
        if (amount <= 0) {
            cout << "[입금 실패] 0원 이하 금액은 입금할 수 없습니다. (메모: "
                 << memo << ")\n";
            return;
        }

        balance += amount;
        cout << "[입금] " << owner << " 계좌에 "
             << amount << "원이 입금되었습니다."
             << " (메모: " << memo << ", 현재 잔액: "
             << balance << "원)\n";
    }

    /*
     * [보조 기능] 출금 함수
     *  - 보고서에서 '참조 전달 없이 this 포인터를 사용하는 멤버 함수' 사례로 설명 가능
     */
    void withdraw(int amount) {
        if (amount <= 0) {
            cout << "[출금 실패] 0원 이하 금액은 출금할 수 없습니다.\n";
            return;
        }
        if (amount > balance) {
            cout << "[출금 실패] 잔액 부족 (요청: " << amount
                 << "원, 잔액: " << balance << "원)\n";
            return;
        }

        balance -= amount;
        cout << "[출금] " << owner << " 계좌에서 "
             << amount << "원이 출금되었습니다. (현재 잔액: "
             << balance << "원)\n";
    }

    /*
     * [개념 4 + 5 : 디폴트 매개변수 + 참조에 의한 전달]
     *
     *  - transfer(Account& to, int amount, int fee = 0)
     *
     *  (1) 참조에 의한 전달 (call-by-reference)
     *      - 첫 번째 매개변수 to는 Account& 타입으로 선언되어 있다.
     *      - Account 객체를 값으로 복사하는 것이 아니라,
     *        실제 원본 계좌를 가리키는 '별명'으로 전달된다.
     *      - 따라서 to.balance를 변경하면, main()에서 전달한 계좌 객체의
     *        잔액이 직접 변경된다.
     *
     *  (2) 디폴트 매개변수(default parameter)
     *      - 세 번째 매개변수 fee는 수수료를 나타내며, 기본값으로 0을 가진다.
     *      - 호출 시 transfer(other, 500); 처럼 두 개의 인자만 전달하면,
     *        fee에는 자동으로 0이 대입된다.
     *      - 수수료가 있는 이체를 하고 싶다면 transfer(other, 500, 50);
     *        처럼 세 번째 인자를 명시해주면 된다.
     */
    void transfer(Account& to, int amount, int fee = 0) {
        // 이체 총 비용 = 이체 금액 + 수수료
        int total = amount + fee;

        if (amount <= 0) {
            cout << "[이체 실패] 0원 이하 금액은 이체할 수 없습니다.\n";
            return;
        }
        if (total > balance) {
            cout << "[이체 실패] 잔액 부족 (요청 이체: " << amount
                 << "원, 수수료: " << fee << "원, 잔액: "
                 << balance << "원)\n";
            return;
        }

        // 출금 계좌(this)의 잔액 감소
        balance -= total;

        // 입금 계좌(to)의 잔액 증가
        //  └ 여기서 to는 참조(reference)이기 때문에
        //     실제로 main()에서 전달한 Account 객체의 잔액이 직접 변경된다.
        to.balance += amount;

        cout << "[이체 성공] " << owner << " → " << to.owner
             << " 계좌로 " << amount << "원이 이체되었습니다.\n";
        cout << "           수수료: " << fee << "원\n";
        cout << "           송금인 잔액: " << balance
             << "원, 수취인 잔액: " << to.balance << "원\n";
    }
};

/*
 * [보조 함수] 계좌 정보 출력
 *  - const 참조(const Account& acc)를 사용하여
 *    불필요한 객체 복사 없이 정보를 읽기만 하는 예시.
 *  - 이 함수는 '참조 전달이 읽기 전용에도 사용될 수 있다'는 설명에 활용 가능.
 */
void printAccountInfo(const Account& acc) {
    cout << "---------------------------------------------\n";
    cout << "소유자: " << acc.getOwner() << "\n";
    cout << "현재 잔액: " << acc.getBalance() << "원\n";
    cout << "---------------------------------------------\n";
}

int main() {
    cout << "===== 은행 계좌 시뮬레이터 시작 =====\n\n";

    /*
     * [생성자 중복 사용 예시]
     *  - acc1 : 기본 생성자 사용 (입금 없이 계좌 개설)
     *  - acc2 : owner와 initialDeposit을 받는 생성자 사용
     */
    Account acc1;                    // Account() 호출
    Account acc2("Jonathan", 1000);  // Account(string, int) 호출

    cout << "\n[초기 계좌 상태]\n";
    printAccountInfo(acc1);
    printAccountInfo(acc2);

    /*
     * [함수 중복 사용 예시]
     *  - 동일한 이름 deposit에 서로 다른 매개변수 목록을 사용
     */
    cout << "\n[입금 테스트 - 함수 중복]\n";
    acc2.deposit(500);                          // 메모 없이 입금
    acc2.deposit(300, "월급 보너스");          // 메모 포함 입금 (함수 중복)

    /*
     * 기본 생성자로 만든 acc1에도 입금해보자.
     * owner가 "UNKNOWN"이지만, 시스템 상 입금은 가능하다.
     */
    acc1.deposit(200, "테스트 입금");

    /*
     * [출금 테스트]
     */
    cout << "\n[출금 테스트]\n";
    acc2.withdraw(400);     // 정상 출금
    acc2.withdraw(10000);   // 잔액 초과 출금 시도

    /*
     * [디폴트 매개변수 + 참조 전달 테스트]
     *  - acc2 → acc1 으로 이체
     *  - 첫 번째 이체: 수수료 0원 (디폴트 값 사용)
     *  - 두 번째 이체: 수수료 50원 (명시적으로 지정)
     */
    cout << "\n[이체 테스트 - 참조 전달 + 디폴트 매개변수]\n";

    cout << "\n1) 수수료 없는 이체 (fee 생략)\n";
    acc2.transfer(acc1, 300);        // fee는 자동으로 0이 들어감

    cout << "\n2) 수수료가 있는 이체 (fee 명시)\n";
    acc2.transfer(acc1, 200, 50);    // fee = 50

    cout << "\n[최종 계좌 상태]\n";
    printAccountInfo(acc1);
    printAccountInfo(acc2);

    cout << "\n===== 프로그램 종료 =====\n";
    return 0;
}
