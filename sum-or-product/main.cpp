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
    int c;
    cin>>n;
    cin>>c;
    

        
    if(c==1){
        int i=3,j=3;
        while(i<=n){
            j=i+j;
            i++;
        }
        cout<<j;
    }else if(c==2){
        int i=3,j=2;
        while(i<=n){
            j=i*j;
            i++;
        }
        cout<<j;
    }else{
        cout<<"-1";
    }
}

