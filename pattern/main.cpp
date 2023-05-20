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
    
    int i=1;
    while(i<=n){
        int m=1;
        while(m<=n-i){
            cout<<" ";
            m=m+1;
        }
        int j=1;
        while(j<2*i){
            cout<<"*";
            j=j+1;
        }
        
        cout<<endl;
        i=i+1;
    }
}
