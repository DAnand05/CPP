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
    
    int i=n;
    int val=n*n;
    int count=1;
    while(i<=val){
        while(count<=i){
            cout<<count;
            count=count+1;
        }
        
        cout<<endl;
        i=i+n;
    }
}
