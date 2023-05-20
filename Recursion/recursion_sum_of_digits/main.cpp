/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sumofdigits(int n){
    if(n<=9)return n;
    return n%10 + sumofdigits(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumofdigits(n)<<endl;
}
