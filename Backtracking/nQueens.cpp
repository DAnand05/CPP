//Second approach, first approach starts from line 73
#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &board, int n, int row, int col){
    int i = row, j = col;
    while(i>=0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
    }
    i=row,j=col;
    while(i>=0 && j>=0){
        if(board[i][j] == 1){
            return false;
        }
        i--,j--;
    }
    i = row,j = col;
    while(i>=0 && j<n){
        if(board[i][j] == 1){
            return false;
        }
        i--,j++;
    }
    return true;
}

void solve(vector<vector<int>> &board, int n, int row){
    if(row == n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }

    for(int col = 0; col < n; col++){
        if(isSafe(board,n,row,col)){
            board[row][col] = 1;
            solve(board, n, row+1);
            board[row][col] = 0;
        }
    }
    return;
}


void placeNQueens(int n){
    vector<vector<int>> board(n, vector<int>(n,0));

    solve(board, n, 0);
}

int main(){
    int n;
    cin>>n;
    placeNQueens(n);
    return 0;
}

/*
//first approach

#include<iostream>
#include<vector>

using namespace std;

void addSolution(vector<vector<int>> &board, vector<vector<int>> &ans, int n){
    vector<int> temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp.push_back(board[i][j]);
        }
    }

    ans.push_back(temp);
}

bool isSafe(vector<vector<int>> &board, int n, int row, int col){
    int i = row, j = col;
    while(i>=0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
    }
    i=row,j=col;
    while(i>=0 && j>=0){
        if(board[i][j] == 1){
            return false;
        }
        i--,j--;
    }
    i = row,j = col;
    while(i>=0 && j<n){
        if(board[i][j] == 1){
            return false;
        }
        i--,j++;
    }
    return true;
}

void solve(vector<vector<int>> &board, vector<vector<int>> &ans, int n, int row){
    if(row == n){
        addSolution(board, ans, n);
        return;
    }

    for(int col = 0; col < n; col++){
        if(isSafe(board,n,row,col)){
            board[row][col] = 1;
            solve(board, ans, n, row+1);
            board[row][col] = 0;
        }
    }
    return;
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> board(n, vector<int>(n,0));
    vector<vector<int>> ans;

    solve(board, ans, n, 0);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans = nQueens(n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
    }
}
*/
