/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void table(int s, int e, int w){
    int ans;
    while(s<=e){
        ans=(5*(s-32))/9;
        cout<<s<<" "<<ans<<endl;
        s=s+w;
    }
}

int main()
{
    int s,e,w;
    cin>>s>>e>>w;
    table(s,e,w);
}
