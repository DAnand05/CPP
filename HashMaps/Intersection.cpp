#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void printIntersection(int a1[], int a2[], int n, int m){
    unordered_map<int, int> freq;
    for(int i = 0; i<n; i++){
        freq[a1[i]]++;
    }
    for(int j = 0; j<m;j++){
        if(freq[a2[j]]>0){
            cout<<a2[j]<<endl;
            freq[a2[j]]--;
        }
    }
}

int main(){
    int a1[]={2, 6, 8, 5, 4, 3};
    int a2[]={2, 3, 4, 7};
    printIntersection(a1, a2, 6, 4);
}
