#include<iostream>
#include<vector>
using namespace std;

void displaying(vector<int>&nums){
    int start=0;
    int end=nums.size()-1;

    while(start < end){
        if(nums[start]==0){
            start++;
        }
        else if (nums[end]==1){
            end--;
        }
        else{
            swap(nums[start],nums[end]);
        }
    }
}

int main(){
    vector<int>arr={0,1,0,1,0,1,0,1};
    displaying(arr);
    for (int i=0;i<arr.size();i++){
        cout <<arr[i]<< " ";
    }

}