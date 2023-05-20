/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void findLargest(int **input, int n, int m)
{
    //here, n is for rows and m is for columns
    if(n>0 && m>0){
        //code for calculation and comparison between rows
        int Rowmax=0,RowIndex=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){	//for adding elements in a row
                sum=sum+input[i][j];
            }
            if(sum>Rowmax){
                Rowmax=sum;
                RowIndex=i;
            }
        }
        //code for calculation and comparison between columns
        int ColMax=0,ColIndex=0;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){	//for adding elements in a column
                sum=sum+input[j][i];
            }
            if(sum>ColMax){
                ColMax=sum;
                ColIndex=i;
            }
        }
        if(ColMax>Rowmax){
            cout<<"column"<<" "<<ColIndex<<" "<<ColMax;
        }else{
            cout<<"row"<<" "<<RowIndex<<" "<<Rowmax;
        }
    }else{
        cout<<"row 0 -2147483648";
    }
}

int main()
{
    int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
