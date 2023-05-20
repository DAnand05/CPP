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
    int n1=(n+1)/2;
    int n2=n1-1;
    
    int i=1;
    while(i<=n1){
        int m=1;
        while(m<=n1-i){
            cout<<" ";
            m++;
        }
        int count=1;
        while(count<=2*i-1){
            cout<<"*";
            count++;
        }
        cout<<endl;
        i++;
    }
    
    int j=n2;
    while(j>=1){
        int k=1;
        while(k<=n2-j+1){
            cout<<" ";
            k++;
        }
        int count=1;
        while(count<=2*j-1){
            cout<<"*";
            count++;
        }
        cout<<endl;
        j--;
    }
}
