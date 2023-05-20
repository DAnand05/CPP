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
    
    char ch;
    int a=65;
    int count=1;
    while(count<=n){
        ch = a;
        a++;
        count++;
    }
    
    int i=1;
    while(i<=n){
        char ha=ch;
        int j=1;
        while(j<=i){
            cout<<ha;
            ha++;
            j++;
        }
        cout<<endl;
        ch--;
        i++;
    }
}
