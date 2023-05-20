#include<iostream>
#include<queue>
#include<vector>

using namespace std;

void findMedians(int *arr, int n){
    /*
    for(int i = 0; i < n; i++){
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> v;
        for(int j = 0; j <= i; j++){
            pq.push(arr[j]);
        }
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        int size = v.size()-1;

        if(size%2 != 0){
            int mid = (size+1)/2;
            int prev = mid-1;
            int val = (v.at(prev)+v.at(mid))/2;
            cout<<val<<" ";
        }else{
            int val = size/2;
            cout<<v.at(val)<<" ";
        }
    }
    */

    priority_queue<int, vector<int>, greater<int>> g;
    priority_queue<int> s;

    int med = arr[0];
    s.push(med);

    cout<<med<<" ";

    for(int i = 1; i < n; i++){
        int x = arr[i];

        if(s.size()>g.size()){
            if(x<med){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            med = (s.top()+g.top())/2;
        }else if(s.size() == g.size()){
            if(x<med){
                s.push(x);
                med = s.top();
            }else{
                g.push(x);
                med = g.top();
            }
        }else{
            if(x<med){
                s.push(x);
            }else{
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            med = (s.top()+g.top())/2;
        }
        cout<<med<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    findMedians(arr, n);

    delete[] arr;
}
