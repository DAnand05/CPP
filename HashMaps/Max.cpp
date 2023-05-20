#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int maxOccurring(int *a, int n){
    unordered_map<int,int> seen;
    int maxFreq = 0;
    int maxElement = 0;
    for(int i = 0; i < n; i++){
        seen[a[i]]++;
        maxFreq = max(seen[a[i]], maxFreq);
    }
    for(int i = 0;i<n;i++){
        if(seen[a[i]] == maxFreq){
            maxElement = a[i];
            break;
        }
    }
    return maxElement;
}

int main(){
    int a[]={1,2,3,4,5,4,3,2,2,1,1,3};
    cout<<maxOccurring(a, 12)<<endl;;
}
