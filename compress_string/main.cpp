/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string getCompressedString(string &input) {
  string ans="";
  int count=0,i=0,j=0,k=0;
    while(input[i]!='\0')
    {
        while(input[i]==input[j])
        {
            count++;
            j++;
        }
        ans+=input[i];
        if(count>1)
            ans+='0'+count;
        count=0;
        i=j;
        
    }
    return ans;
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}

