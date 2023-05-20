/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }
    int smolOutput=count(n/10);
    return smolOutput+1;
}

int main()
{
    int n;
    cin>>n;
    cout<<count(n)<<endl;
}
