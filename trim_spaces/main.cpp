/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void trim(char ch[]){
    for(int i=0;ch[i]!='\0';i){
        if(ch[i]==32){
            for(int j=i;ch[j]!='\0';j++){
                ch[j]=ch[j+1];
            }
        }else{
            i++;
        }
    }
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    trim(ch);
    cout<<ch;
}
