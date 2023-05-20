#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);

    stack<int> s2;
    s2 = s1;
    cout<<s2.top()<<endl;
    cout<<s2.size()<<endl;

    s1.pop();

    cout<<s2.size()<<endl;
    /*
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.empty()<<endl;
    */
}
