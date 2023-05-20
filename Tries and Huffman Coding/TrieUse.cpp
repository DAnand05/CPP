#include<iostream>
#include "Trie.h"

using namespace std;

int main(){
    Trie dict;
    dict.insertWord("a");
    dict.insertWord("and");
    dict.insertWord("are");
    dict.insertWord("net");
    dict.insertWord("next");
    dict.insertWord("none");
    dict.insertWord("nigga");
    dict.insertWord("nephew");
    dict.insertWord("zeno");
    dict.insertWord("zinc");

    if(dict.search("next")) cout<<"found"<<endl;
    else cout<<"Not found"<<endl;
    dict.removeWord("a");
    if(dict.search("are")) cout<<"found"<<endl;
    else cout<<"not found"<<endl;

    if(dict.search("a"))cout<<"found"<<endl;
    else cout<<"not found"<<endl;
}
