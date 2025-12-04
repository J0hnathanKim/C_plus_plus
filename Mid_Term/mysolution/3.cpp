#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string str;
    cout << "문자열을 입력하세요 (종료하려면 'exit' 입력)" << endl;
    while (1) {
        cout << "입력할 문자열 >> ";
        cin >> str;

        if (str == "exit") break;

        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i]))
                str[i] = tolower(str[i]);   // 변환된 값을 저장
            else
                str[i] = toupper(str[i]);   // 변환된 값을 저장
        }

        cout << "변환된 문자열 >> " << str << endl << endl;
    }
}
