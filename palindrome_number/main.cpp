/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num = n;
    cout<<num/10<<endl;
    int rev = 0;
    while(num!=0){
        rev = rev*10+(num%10);
        num = num/10;
    }
    cout<<rev<<endl;
    if(n == rev){
        cout<<"true";
    }else{
        cout<<"false";
    }
}