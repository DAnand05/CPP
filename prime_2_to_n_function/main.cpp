/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool isPrime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int j=2;j<=n;j++){
        if(isPrime(j)){
            cout<<j<<endl;
        }
    }
}
