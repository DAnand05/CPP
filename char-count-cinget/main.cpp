/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char c;
    c=cin.get();
    int spc=0,cnt=0,num=0;
    
    while(c!='$'){
         if(c>= 'a' && c<= 'z'){
            cnt++;
            
        }else if(c>= '0' && c<= '9'){
            num++;
        }
        else if(c == ' ' || c == '\t' || c == '\n') {
            spc++;
        }
        c=cin.get();
    }
 	cout << cnt <<" "<<num<<" "<<spc;
}
