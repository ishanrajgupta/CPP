// O(n)


// #include <iostream>
// using namespace std;
// int linear(int arr[],int key)
// {
//     for(int i=0;i<7;i++)
//     {
//         if(arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){
//     int arr[7]={4,2,7,8,1,2,5};
//     int key=7;
//     cout<<"the item is at idx:"<<linear(arr,key);
// }


#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,3,7,8,9,5,11};
    int key=19;
    bool found;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==key)
        {
            cout<<"the key is at idx:"<<i;
            found=true;
        }
    }
    if(!found)
    {
        cout<<"not found";
    }
}