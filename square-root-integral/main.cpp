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
    int i=1, a=0;
    while(n>0){
        if(i<=n){
            a++;
            i=a*a;
        } else{
            a--;
            break;
        }
    }
    cout<<a;
}
