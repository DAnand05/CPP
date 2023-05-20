/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    int output=power(x,n-1);
    return x*output;
}

int main()
{
    int x,n;
    cout<<"Enter a number : "<<endl;
    cin>>x;
    cout<<"Enter power : "<<endl;
    cin>>n;
    int res=power(x,n);
    cout<<res<<endl;
}
