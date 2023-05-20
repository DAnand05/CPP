/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void replace(char ch[], char c1, char c2){
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==c1){
            ch[i]=c2;
        }
    }
}

int main()
{
    char ch[1000000];
    cin>>ch;
    char c1,c2;
    cin>>c1>>c2;
    replace(ch,c1,c2);
    cout<<ch<<endl;
}
