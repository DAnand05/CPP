#include<iostream>
#include<queue>

using namespace std;

int KthLargest(int* input, int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < k; i++){
        pq.push(input[i]);
    }

    for(int i = k; i < n; i++){
        pq.push(input[i]);
        pq.pop();
    }

    return pq.top();
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<KthLargest(arr, n, k)<<endl;

    delete[] arr;
}
