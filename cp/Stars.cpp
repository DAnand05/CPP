#include<iostream>
#include<string>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    string s = ch;
    int i = 0;
    while(i<s.size()){
        if(s[i]=="*"){
            int j = i-1;
            while(j<s.size()){
                if(j == s.size()-1){
                    s[j] = "\0";
                    break;
                }
                s[j]=s[j+2];
            }
            i=i-1;
            continue;
        }
        i++;
    }
    cout<<s<<endl;
}
