/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool check(int n){
    int i=1,temp=1,res;
    while(i<=n){
        res=temp+i;
        i=temp;
        temp=res;
        if(res==n){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    if(check){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
