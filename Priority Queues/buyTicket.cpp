#include<iostream>
#include<queue>

using namespace std;

void rotate(int *arr, int n){

    int firstElement = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = firstElement;

    return;
}

int buyTicket(int *arr, int n, int k){
    priority_queue<int> pq;

    int element = arr[k];

    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
    }

    int time = 0;
    int size = n;

    while(true){
        if(pq.top() == arr[0] && k == 0){
            time++;
            break;
        }else if(pq.top() == arr[0] && k != 0){
            time++;
            pq.pop();
            rotate(arr,size);
            size-1;
            k--;
        }else if(pq.top() != arr[0] && k == 0){
            rotate(arr, size);
            k = size-1;
        }else{
            rotate(arr, size);
            k--;
        }
    }
    return time;
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

    cout<<buyTicket(arr, n, k)<<endl;
    delete[] arr;

}
