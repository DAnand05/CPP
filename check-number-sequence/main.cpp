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
    int count=2;
    bool x= true;
    int current,prev;
    cin>>prev;
    while(count<=n)
        
    {
        cin>>current;
        if(current<prev)
        {
                  prev=current;
                  count++;
  
        }else 
            break;
    }
    
    while(count<=n)
    {
        cin>>current;
        count++;
     if(current>prev)
     {
          prev=current;
          count++;
     }
        else
     {
          x=false;
         break;
     } 
        
     }
          if(x)
    {
        cout<<"true";
    }else
        cout<<"false";
}
