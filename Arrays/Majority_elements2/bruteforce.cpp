#include<iostream>
#include<vector>
using namespace std;

vector<int> majority(vector<int> nums){
    int n=nums.size();
    vector<int> result;

    for(int i=0;i<n;i++){
        if(result.size()==0 || result[0] != nums[i]){
            int count=0;

            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                    count++;
                }
            }

            if(count>(n/3))
                result.push_back(nums[i]);
        }
        if(result.size()==2)break;
    }
    return result;
}

int main(){
    vector<int> nums={11,33,33,11,33,11};

    vector<int> ans = majority(nums);

    cout<<"the majority elements are: ";
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<"\n";

    return 0;
}