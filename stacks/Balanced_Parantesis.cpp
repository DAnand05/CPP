#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool balanced(string expression){
    stack<char> ch;
    int size = expression.length();

    for(int i = 0; i < size; i++){
        if(expression[i] == ')' && ch.empty()){
            return false;
        }
        if(expression[i] == '('){
            ch.push(expression[i]);
        }else if(expression[i] == ')' && ch.top() == '('){
                ch.pop();
        }
    }
    if(ch.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    string input;
    cin>>input;
    cout<<((balanced(input)) ? "TRUE" : "FALSE")<<endl;
}
