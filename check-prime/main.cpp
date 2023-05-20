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
    
    bool divided=false;
    int count=2;
    while(count<n){
        if(n%count==0){
            divided=true;
        }
        count++;
    }
    if(divided){
        cout<<"not prime";
    } else{
        cout<<"prime";
    }
    
}
