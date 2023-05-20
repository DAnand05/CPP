/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void count(int n,int& k){
    if(n==0)return;
    if(n%10==0)k++;
    count(n/10,k);
}

int countZeros(int n){
    if(n>0){
     int k=0;
     count(n,k);
     return k;
    }else{
        return 1;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<countZeros(n)<<endl;
}
