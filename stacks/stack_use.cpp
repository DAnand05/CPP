#include <iostream>
using namespace std;

#include "stack.cpp"

int main(){
    StackLL<char> s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.getSize() << endl;

	cout << s.isEmpty() << endl;
}
