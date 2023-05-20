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
        while(m<n-i){
            cout<<" ";
            m++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}
