/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int multiplyNumbers(int m,int n){
    if(n==0)return 0;
    int smallOutput=multiplyNumbers(m,n-1);
    return smallOutput+m;
}

int main()
{
    int m, n;
    cin>>m>>n;
    cout<<multiplyNumbers(m,n)<<endl;
}
