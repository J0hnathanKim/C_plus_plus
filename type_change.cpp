#include <iostream>
using namespace std;


int main() {
    int i = 65;
    float f = 5.2f;

    double d = i + f; // implicit type change(change to float which has bigger size of memory)
    cout << d << endl; // 70.2
    
    cout << static_cast<int>(d) << endl; //70
    cout << static_cast<char>(i) << endl; //'A'

    return 0;
}
