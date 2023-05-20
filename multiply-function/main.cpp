/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int multiply(int a,int b){
    return a*b;
}

int main()
{
    int i,j;
    cin>>i>>j;
    int ans=multiply(i,j);
    cout<<ans;
}
