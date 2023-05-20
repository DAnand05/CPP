#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

string uniqueCharacters(string S){
    unordered_map<char, int> freq;
    string str = "\0";
    for(int i = 0; i < S.length(); i++){
        if(freq[S[i]]>0){
            continue;
        }else{
            freq[S[i]]++;
            str+=S[i];
        }
    }
    return str;
}

int main(){
    string s;
    cin>>s;

    string str = uniqueCharacters(s);
    cout<<str<<endl;
}
