#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
// for(int i=4;i<=3*n+1;i+=3){
//     cout<<i<<endl;
// }
   int a=4;
   for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a+=3;
   }
}