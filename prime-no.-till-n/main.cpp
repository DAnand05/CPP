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
    for(int j=2;j<=n;j++){
        
    bool divided=false;
    int count=2;
    while(count<j){
        if(j%count==0){
            divided=true;
            break;
        }
        count++;
    }
    if(divided==false){
        cout<<j<<endl;
    } 
    }
}
