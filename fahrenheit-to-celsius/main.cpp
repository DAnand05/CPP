/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double s,e,w;
    cout<<"enter starting value"<<endl;
    cin>>s;
    
    cout<<"enter ending value"<<endl;
    cin>>e;
    
    cout<<"enter size difference"<<endl;
    cin>>w;
    
    double c, temp;
    
    while (s<=e) {
        temp=s;
        
        c=(5*(temp-32))/9;
        
        cout<<s<<"-"<<c<<endl;
        
        s=s+w;
    }   
}
