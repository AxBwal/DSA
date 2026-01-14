// Find teh SUm in 2d Array

// Find the lArgest Ele in  2d Array 


#include<iostream>
using namespace std;
int main (){
    int arr[2][3]={1,2,3,4,5,6};
    // 1 2 3
    // 4 5 6      // 14 25 36

    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
           cout << arr[j][i]<< " "; 
        }
        cout<<endl;
    }
   

}