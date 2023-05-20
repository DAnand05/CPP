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

	int i=1;
// 	int val=n*n;
// 	int j=1;

//     while(i<=val){

//     while(j<=i){
//         cout<<n;
//         j=j+1;
//     }
    
//     cout<<endl;
//     i=i+n;
// }
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n;
            j++;
        }
        cout<<endl;
        i++;
    }
}

