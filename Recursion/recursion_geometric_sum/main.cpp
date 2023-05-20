/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void sum(int k, double &n,double currValue){
    if(k==0)return;
    n=n+(currValue/2);
    sum(k-1,n,currValue/2);
}

double geometricSum(int k){
    int n=1;
    sum(k,n,1);
    return n;
}

int main()
{
    int k;
    cin>>k;
    cout<<fixed<<setprecision(5);
    cout<<geometricSum(k)<<endl;
}
