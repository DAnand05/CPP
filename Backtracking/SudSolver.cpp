#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> board){
    for(int row = 0; row < 9; row++){
        for(int col = 0; col < 9; col++){
            cout<<board[row][col]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>> &board){
    if(row == 9){
        print(board);
        return;
    }

    for(int row = 0; row < 9; row++){
        for(int col = 0; col < 9; col++){
            if(board[row][col] == 0){
                for(int val = 1; val <= 9; val++){
                    if(isSafe(board, row, col, val)){
                        board[row][col] = val;
                        solve(board);
                        board[row][col] = 0;
                    }
                }
            }
        }
    }
}

int main(){
    vector<vector<int>> board (9, vector<int>(9,0));
    for(int row = 0; row < 9; row++){
        vector<int> temp;
        int val;
        for(int col = 0; col < 9; col++){
            cin>>val;
            temp.push_back(val);
        }
        board.push_back(temp);
    }
    sudokuSolver(board);
}
