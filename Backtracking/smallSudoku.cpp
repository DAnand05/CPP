#include<iostream>
#include<vector>

using namespace std;

void helper(vector<vector<int>> &v,int n, int row, int col){
    if(row == n && col == n){
        printSol(v,n);
        return;
    }
    if(!findEmpty()){
        if(col == n-1){
            helper(v,n,row+1,col);
        }else{
            helper(v,n,row,col+1);
            }
    }else{
        for(int i =1; i <= 3; i++){
            if(!checkExists(v,n,row,col,i)){
                v[row][col]=i;
            }
        }

    }
}

void sudokuSolver(vector<vector<int>> &v,int n){
    helper(v,n,0,0);
    printSol(v,n);
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n,0));
    int val;
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>val;
            v[i][j] = val;
        }
    }
}
