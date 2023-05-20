/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
        int N;
    cout << "enter N" << endl;
    cin >> N;
    
    int i = 1;
    int sum = 0;
    
    while(i<=N){
        if (i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    
    cout << sum << endl;
}
