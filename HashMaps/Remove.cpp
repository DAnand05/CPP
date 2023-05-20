#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> removeDuplicates(int *a, int n){
    vector<int> output;
    unordered_map<int, bool> seen;
    for(int i = 0; i < n; i++){
        if(seen.count(a[i])>0){
            continue;
        }

        seen[a[i]]= true;
        output.push_back(a[i]);
    }
    return output;
}

int main(){
    int a[]={1,3,4,1,1,2,3,3,4,4,5,5,2,3,4,5,2,1};
    vector<int> output= removeDuplicates(a, 18);
    for(int i = 0; i < output.size() ; i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
}
