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
    
    for(int i=1;i<=n;i++){
        for(int spc=1;spc<=n-i;spc++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int k=2;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}
