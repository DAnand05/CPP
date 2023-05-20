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
    cout<<"enter n"<<endl;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k=k+1;
        }
        int j=1;
        while(j<=i){
            cout<<val;
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
