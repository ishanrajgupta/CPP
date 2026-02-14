#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout <<"Enter 5 elements in the array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}