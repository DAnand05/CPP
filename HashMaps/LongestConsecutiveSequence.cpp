#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> longestConsecutiveSequence(int* arr, int n){
    unordered_map<int, bool> map;
    int start, end, maxLength = 0;
    int tempStart, tempEnd, tempLen = 0;
    for(int i = 0; i < n; i++){
        map[arr[i]]=true;
    }
    for(int i = 0; i < n; i++){
        if(map[arr[i]]==true){
            tempStart = arr[i];
            tempLen++;
            int next = tempStart+1;
            while(map.find(next) != map.end()){
                map[next] = false;
                tempLen++;
                next++;
            }
            int prev = tempStart-1;
            while(map.find(prev)!=map.end()){
                map[prev] = false;
                tempLen++;
                prev--;
            }
            tempStart = prev+1;
            tempEnd = next-1;
            if(maxLength<tempLen){
                start = tempStart;
                end = tempEnd;
                maxLength = tempLen;
            }
            tempLen = 0;
        }else{
            continue;
        }
    }
    vector<int> v;
    v.push_back(start);
    v.push_back(end);
    return v;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> ans = longestConsecutiveSequence(arr,n);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans.at(i)<<" ";
    }
    cout<<endl;
    delete[] arr;
}
