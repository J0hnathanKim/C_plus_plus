try {
    // 예외가 발생할 수 있는 코드
    int a = 10, b = 0;
    if (b == 0) throw "Division by zero!";
    cout << a / b << endl;
}
catch (const char* msg) {
    cout << "Error: " << msg << endl;
}
