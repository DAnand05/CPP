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
        int j=1;
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;
    }
}
