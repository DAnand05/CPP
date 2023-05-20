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
    char ch=65;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}
