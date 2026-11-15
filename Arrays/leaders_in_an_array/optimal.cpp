#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> leaders(vector<int>& nums){
    vector<int> ans;

    int maxi=INT_MIN;

    int n=nums.size();

    for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi=max(maxi,nums[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> nums={10,22,12,3,0,6};
    vector<int> ans=leaders(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}