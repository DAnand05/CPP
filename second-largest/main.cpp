/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#include <climits>


int main(){
    
    int n;
    cin>>n;
    
    int max=INT_MIN ,res=INT_MIN ,val;
    for(int i=1;i<=n;i++){
        cin>>val;
        if(val>max){
            res=max;
            max=val;
        }else if(val>res && val!=max){
            res=val;
        }
    }
    cout<<res;
}
