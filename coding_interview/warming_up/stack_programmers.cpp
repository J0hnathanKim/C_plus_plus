#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stack;
    for(char p : s){
        if(p == '('){
            stack.push(p);
        }
        else{
            if(stack.empty() == true) return false;
            else stack.pop();
        }
    }
    return stack.empty();
}
