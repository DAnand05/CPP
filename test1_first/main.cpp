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
    
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<j;
            }else{
                cout<<"*";
            }
        }
        for(int k=n;k>=1;k--){
            if(k<=i){
                cout<<k;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
