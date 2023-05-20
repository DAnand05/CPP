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
    int i=n, pv=1;
    long ans=0;
    while(i>0){
        int rem=i%2;
        ans=ans+(rem*pv);
        pv=pv*10;
        i=i/2;
    }
    cout<<ans;
}
