#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>*> arr){
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    for(int i = 0 ; i < arr.size(); i++){

        for(int j = 0; j < arr[i]->size(); j++){
            pq.push(arr[i]->at(j));
        }
    }

    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>*> input;

    for(int j = 1; j <= n; j++){
        int size;
        cin>>size;
        vector<int>* curr = new vector<int>;

        for(int i = 0; i < size; i++){
            int data;
            cin>>data;
            curr->push_back(data);
        }
        input.push_back(curr);
    }

    vector<int> output = mergeKSortedArrays(input);
    for(int i = 0; i < output.size(); i++){
        cout<<output.at(i)<<" ";
    }
    cout<<endl;

}
