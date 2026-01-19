#include <list>
using namespace std;

list<int> lst = {1, 2, 4, 5};

// 4 앞 위치 
auto it = lst.begin();
advance(it, 2);  // it → 4

lst.insert(it, 3); // 3을 4 앞에 삽입 중간삽입




auto it = lst.begin(); //중간삭제
advance(it, 2); // 3 위치

lst.erase(it);
