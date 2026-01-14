// Find the lArgest Ele in  2d Array 


#include<iostream>
using namespace std;
int main (){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int maxi = INT_MIN;

    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            if(arr[i][j] > maxi){
                maxi=arr[i][j];
            }
        }
    }

    cout << "The maximum is " << maxi << endl;
}