#include <iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int pair=nums[i]+nums[j];
        if(pair<target)
        {
            i++;
        }
        else if(pair>target)
        {
            j--;
        }
        else{
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        }

    }
    return ans;

}
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans=pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
}