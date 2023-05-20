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
    int temp=0;
    int val=1;
    int j=1;
    for(int i=1;i<n;i++){
        j=temp+val;
        temp=val;
        val=j;
    }
    cout<<j<<endl;
}
