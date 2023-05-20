#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){

    unordered_map<string, int> ourMap;

    pair<string, int> p("abc",5);
    ourMap.insert(p);

    ourMap["def"] = 1;

    cout<<"size : "<<ourMap.size()<<endl;

    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("def")<<endl;

    cout<<ourMap.at("ghi")<<endl;

    cout<<ourMap["ghi"]<<endl;

    cout<<"size after ghi : "<<ourMap.size()<<endl;

    if(ourMap.count("ghi")>0){
        cout<<"ghi exists"<<endl;
    }else{
        cout<<"ghi doesn't exists"<<endl;
    }

}
