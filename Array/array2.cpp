#include <iostream>
#include<vector>
using namespace std;

int main (){
    vector<int>arr;

    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);

    cout << "The Correct Order is" << " ";

    for (int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
    }

     cout<<endl;

    cout << "The Reverse Order is " << " ";
   

    for (int i =arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }


}