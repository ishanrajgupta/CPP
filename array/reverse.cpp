// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={4,2,7,8,1,2,5};
//     int start=0;
//     int end=6;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);  // Fixed: use [] not ()
//         start++;
//         end--;
//     }
    
//     cout<<"Reversed array is: ";
//     for(int i=0;i<7;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the array elements:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
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












// int main(){
//     int arr[5]={5,3,2,1,3};
//     for(int i=4;i>=0;i--)
//     {
//         cout<<arr[i];
//     }
// }