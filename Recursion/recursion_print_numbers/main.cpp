/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
}
