/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cin>>x>>n;
    
    int temp=x;
    int count=1;
    if (n==0){
        temp=1;
    } else{
    while (count<=n-1){
        temp=temp*x;
        count=count+1;
    }
    }
    cout<<temp;
}
