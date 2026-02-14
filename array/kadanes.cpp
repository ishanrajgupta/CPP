#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int ms=INT_MIN;
    for(int st=0;st<n;st++){
        int cs=0;
        for(int end=st;end<n;end++){
            cs+=arr[end];
            ms=max(cs,ms);
            if(cs<0)
            {
                cs==0;
            }
        }
    }
    cout<<ms;
}