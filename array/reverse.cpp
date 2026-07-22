#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,2,1,3};
    int start=0;
    int end=4;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"the reversed array are:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
//?time and space complexity of this code is O(n) and O(1) respectively.











// int main(){
//     int arr[5]={5,3,2,1,3};
//     for(int i=4;i>=0;i--)
//     {
//         cout<<arr[i];
//     }
// }