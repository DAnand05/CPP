/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void towerOfHanoi(int n,char source,char helper,char destination){
    if(n==0)return;
    else if(n==1){
        cout<<"transfer from "<<source<<" to "<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1,source,destination,helper);
    cout<<"transfer from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,helper,source,destination);
}

int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'a','b','c');
}
