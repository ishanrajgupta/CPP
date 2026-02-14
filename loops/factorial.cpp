#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int f=1;
        for(int j=1;j<=i;j++)
        {
            f*=i;
        }
        cout<<i<<"="<<f<<endl;
    }
}