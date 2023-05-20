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
    int sumeve=0;
    int sumodd=0;
    
    int i=n;
    while(i>0){
        int a= i%10;
        if (a%2==0) {
            sumeve = sumeve + a; 
        } else {
            sumodd = sumodd + a;
        }
        i=i/10;
    }
    
    cout<<sumeve<<" "<<sumodd;
}
