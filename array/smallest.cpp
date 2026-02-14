#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,4,6};
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"the smallest element in the arrray is:"<<min;
}