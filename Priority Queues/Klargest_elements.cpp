#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> kLargestElements(int *arr, int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    for(int i = 0; i < k; i++){     //for inserting k elements from the beginning in the queue
        pq.push(arr[i]);
    }
    for(int i = k; i<n; i++){       // for inserting the remaining elements in the queue while popping the max element from the queue
        pq.push(arr[i]);
        pq.pop();
    }
    while(pq.size()>0){             //inserting the elements from the queue to the vector
        v.push_back(pq.top());
        pq.pop();
    }
    return v;

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
    vector<int> v = kLargestElements(arr, n,k);
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    delete[] arr;
}
