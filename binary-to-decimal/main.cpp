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
    
    int i=n,ans=0,pv=1;
    while(i>0){
        int rem=i%10;
        ans=ans+(rem*pv);
        pv=pv*2;
        i=i/10;
    }
    cout<<ans;
}
