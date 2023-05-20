#include<iostream>
#include<vector>
using namespace std;
void shift(vector<int>& nums, int si){
    int n = nums.size();
    for(int i = si; i <n-1;i++){
        nums[i]=nums[i+1];
    }
    nums[n-1]=-1;
}

int removeElement(vector<int>& nums, int val) {
    int cnt = nums.size();
    for(int i = 0; i < nums.size(); i){
        if(nums[i]==val){
            shift(nums,i);
            cnt-=1;
            continue;
        }
        i++;
    }
    return cnt;

}
