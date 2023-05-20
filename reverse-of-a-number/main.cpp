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
    
    int i=n,a,rev=0;
    while(i>0){
        a=i%10;
        rev=(rev*10)+a;
        i=i/10;
    }
    cout<<rev;
}
