/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    
    int count=1;
    int n=1;
    while(count<=x){
        int val=(3*n)+2;
        if(val%4!=0){
            cout<<val<<" ";
            count++;
        } 
        n++;
    }
}
