/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fact(int n){
    int res=1;
    int i=1;
    while(i<=n){
        res=res*i;
        i++;
    }
    return res;
}

int main()
{
    int n, r;
    cin>>n>>r;
    
    int f_n=fact(n);
    int f_r=fact(r);
    int f_n_r=fact(n-r);
    int ans=f_n/(f_r*f_n_r);
    cout<<ans<<endl;
}
