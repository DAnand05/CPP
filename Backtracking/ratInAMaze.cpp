#include<iostream>
#include<vector>

using namespace std;

void printSol(vector<vector<int>> &visited, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void helper(vector<vector<int>> &arr, vector<vector<int>> &visited, int n, int row, int col){

    if(row==n-1 && col == n-1){
        visited[row][col] = 1;
        printSol(visited,n);
        visited[row][col] = 0;
        return;
    }

    //base case
    if(row>=n || row<0 || col>=n || col<0 || arr[row][col] == 0 || visited[row][col] == 1){
        return;
    }

    visited[row][col] = 1;
    //up
    helper(arr,visited,n,row-1,col);
    //down
    helper(arr,visited,n,row+1,col);
    //left
    helper(arr,visited,n,row,col-1);
    //right
    helper(arr,visited,n,row,col+1);

    visited[row][col] = 0;
}

void findPath(vector<vector<int>> &arr, int n){
    //base case
     if(n == 0 || n == 1){
        return;
     }

    vector<vector<int>> visited;
    for(int i = 0;i<n;i++){
        vector<int> temp(n,0);
        visited.push_back(temp);
    }
    helper(arr,visited,n,0,0);
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr;
    int val;
    for(int i = 0; i < n; i++){
            vector<int> temp;
        for(int j=0;j<n;j++){
                cin>>val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }
    findPath(arr,n);
}
