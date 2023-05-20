/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int ror  = 15 | 30;
    int rnd  = 15 & 30;
    int rnot = ~15;
    int rxor = 15^30;
    int rls  = 15<<2;
    int rrs  = 15>>2;
    
    cout << ror<<endl;
    cout<<rnd<<endl;
    cout<<rnot<<endl;
    cout<<rxor<<endl;
    cout<<rls<<endl;
    cout<<rrs<<endl;
}
