/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
       char ch;
       cout<<"Enter a character"<<endl;
    cin>>ch;
    
    if(ch>=65 && ch<=90){
        cout << "1" << endl;
    } else if(ch>=97 && ch<=122){
        cout <<"0"<<endl;
    } else {
        cout<<"-1";
    }	
}
