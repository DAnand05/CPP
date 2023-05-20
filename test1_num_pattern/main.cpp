/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++)cout<<j;
        for(int s=0;s<n-i;s++)cout<<" ";
        for(int sp=0;sp<n-i;sp++)cout<<" ";
        for(int k=i;k>0;k--)cout<<k;
        cout<<endl;
    }
}
