#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    int i=0,j=v.size()-1;
    while(i<j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
    for(int x:v){
        cout<<x<<" ";
    }

}