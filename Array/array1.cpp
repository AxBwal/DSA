#include<iostream>
using namespace std;
int main (){
    int arr[]={1,3,5,7,9,10,11};
    
    for (int i=0;i< 7;i++){
        if(arr[i] < 7){
            cout << arr[i] << endl;
        }
    }
}

// Size of Array is 
// sizeof(arr) / sizeof(nums[0])
// Memory Allocation is Continuous in Array