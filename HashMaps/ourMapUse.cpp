#include<iostream>
#include "ourMap.h"

using namespace std;

int main(){
    ourMap<int> map;
    for(int i = 0; i < 10; i++){
        char c = '0'+i;
        string key = "abc";
        key = key+c;
        int value = i+1;
        map.insert(key,value);
        cout<<map.loadFactor()<<endl;
    }

    cout<<map.size()<<endl;

    map.remove("abc1");
    map.remove("abc5");

    cout<<map.size()<<endl;

    for(int i = 0; i < 10; i++){
        char c = '0'+i;
        string key = "abc";
        key = key+c;
        cout<<key<<" : "<<map.getValue(key)<<endl;
    }
}
