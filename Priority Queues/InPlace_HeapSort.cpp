#include<iostream>

using namespace std;

void heapSort(int *input, int n){
    //satisfying the heap order property
    for(int i = 1; i<n; i++){
        int currIndex = i;
        while(currIndex > 0){
            int parentIndex = (currIndex -1)/2;
            if(input[currIndex]<input[parentIndex]){
                int temp = input[currIndex];
                input[currIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }else{
                break;
            }
            currIndex = parentIndex;
        }
    }

    //sorting in descending order
    for(int j = n; j>1;j){
        int temp = input[0];
        input[0] = input[j-1];
        input[j-1] = temp;

        j--;

        int parentIndex = 0;
        int lci = (2*parentIndex)+1;
        int rci = (2*parentIndex)+2;

        while(lci<j){
            int index = parentIndex;

            if(input[index] > input[lci]){
                index = lci;
            }
            if(rci<j && input[rci]<input[index]){
                index = rci;
            }
            if(index == parentIndex){
                break;
            }

            int temp = input[parentIndex];
            input[parentIndex] = input[index];
            input[index] = temp;

            parentIndex = index;
            lci = (2*parentIndex)+1;
            rci = (2*parentIndex)+2;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int *input=new int[n];
    for(int i = 0; i<n; i++){
        cin>>input[i];
    }
    heapSort(input, n);
    for(int j = 0; j<n;j++){
        cout<<input[j]<<" ";
    }
    cout<<endl;

    delete[] input;
}
