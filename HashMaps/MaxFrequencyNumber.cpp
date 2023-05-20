#include<iostream>
#include<unordered_map>

using namespace std;

int maxFreqNumber(int* arr, int n){
    unordered_map<int, int> ourMap;
    int maxFreq = 0;
    int maxVal = 0;
    for(int i = 0; i < n; i++){
        ourMap[arr[i]]++;
    }
    unordered_map<int, int> :: iterator it;
    for(it = ourMap.begin(); it != ourMap.end(); it++){
        if(it->second>maxVal){
            maxVal = it->second;
            maxFreq = it->first;
        }
    }
    return maxFreq;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<maxFreqNumber(arr, n)<<endl;

    delete[] arr;
}
