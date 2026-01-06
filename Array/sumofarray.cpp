#include<iostream>
using namespace std;

int main (){
    int sum=0;
    int arr[8]={1,2,3,4,5,6,7,8};
    for (int i=0;i<=8;i++){
         sum+=arr[i];
    }
    cout<< "The Sum is "<< sum << endl;
}