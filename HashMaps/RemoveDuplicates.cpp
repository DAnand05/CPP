#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> v;
    unordered_map<int, bool> ourMap;

    for(int i = 0; i < n; i++){
        if(ourMap.count(arr[i])==0){
            ourMap[arr[i]] = 1;
            v.push_back(arr[i]);
        }else{
            continue;
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    delete[] arr;

}
