#include<iostream>
#include<algorithm>

using namespace std;

int ternarySearch(int*arr, int n, int num){
    sort(arr,arr+n);    //if used, O(N log N)
    int s = 0, e = n-1;
    while(s<=e){
        int mid1 = s+(e-s)/3;
        int mid2 = e-(e-s)/3;

        if(arr[mid1]==num){
            return mid1;
        }
        if(arr[mid2]==num){
            return mid2;
        }

        if(arr[mid1]>num){
            e = mid1-1;
        }else if(arr[mid2]<num){
            s = mid2+1;
        }else{
            s=mid1+1;
            e=mid2-1;
        }
    }
    return -1;
}

int main(){
    int n, num;
    cin>>n;
    int *arr=new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"enter number to find: ";
    cin>>num;
    cout<<endl;
    cout<<ternarySearch(arr,n,num)<<endl;
}
