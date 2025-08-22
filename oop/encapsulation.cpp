class BankAccount {
private:
    int balance;   // 외부에서 직접 접근 불가

public:
    BankAccount(int money) { balance = money; }

    void deposit(int money) { balance += money; }
    void withdraw(int money) { balance -= money; }
    int getBalance() { return balance; }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    cout << acc.getBalance(); // 1500
    // acc.balance = 9999;   오류 (private 멤버 접근 불가)
}
