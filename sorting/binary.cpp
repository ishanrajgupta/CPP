#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> v,int n,int target ){
int i=0,j=n-1;
for(int i=0;i<n;i++){
    int mid=i+(j-i)/2;
    if(v[mid]==target){
        
    }
}
}
int main(){
    vector<int> v={1,2,3,4,6,7,8,9,5};
    int n=v.size();
    int target=8;
    binarySearch(v,n,target);
}