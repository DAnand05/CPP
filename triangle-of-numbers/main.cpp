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
            m++;
        }
        int val=i;
        int count=1;
        while(count<=i){
            cout<<val;
            val++;
            count++;
        }
        val= (2*i)-2;
        count= i-1;
        while(count>=1){
            cout<<val;
            val--;
            count--;
        }
        cout<<endl;
        i++;
    }
}
