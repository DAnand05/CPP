#define ff first
#define ss second
#define ref(i,a,b) for(int i = a;i < b; i++)
#define fer(i,a,b) for(int i = a; i > b; i--)
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define pqi priority_queue<int>
#define pqg priority_queue<int, vi, greater<int>>

#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

int main(){
    unordered_map<string, int> ourmap;
    ourmap["abc"] = 1;
    ourmap["def"] = 4;
    ourmap["ghi"] = 7;
    ourmap["jcd"] = 45;
    ourmap["hij"] = 17;

    unordered_map<string, int> :: iterator it = ourmap.begin();
    while(it!=ourmap.end()){
        cout<<"key : "<<it->ff<<" value : "<<it->ss<<endl;
        it++;
    }

    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(5);
    v.push_back(2);
    v.push_back(9);

    vector<int> :: iterator it1 = v.begin();

    while(it1!= v.end()){
        cout<<*it1<<endl;
        it1++;
    }
}
