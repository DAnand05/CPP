#define ff first
#define ss second

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    unordered_map<string, int> mapUse;
    pair<string, int> p("abc", 2);
    mapUse.insert(p);
    cout<<mapUse.at("abc")<<endl;
    mapUse["def"] = 5;

    cout<<mapUse["cde"]<<endl;
    cout<<mapUse["def"]<<endl;

    if(mapUse.count("ghi")>0){
        cout<<"exists"<<endl;
    }else{
        cout<<"don't exist"<<endl;
    }

    mapUse["abc"]++;
    cout<<mapUse["abc"]<<endl;

        cout<<mapUse.count("zxy")<<endl;

        unordered_map<string, int> :: iterator it;
        for(it = mapUse.begin(); it!= mapUse.end(); it++){
            cout<<it->ff<<" "<<it->ss<<endl;
        }
}
