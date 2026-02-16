#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    bool prime=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        {
            prime=false;
            break;
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(prime==true) cout<<"prime";

}