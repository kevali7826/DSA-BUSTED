#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> majority(vector<int>& nums){
    int n=nums.size();

    int count1=0,count2=0;

    int el1=INT_MIN,el2=INT_MIN;

    for(int i=0;i<n;i++){
        if(count1==0 && el2 != nums[i]){
            count1=1;
            el1=nums[i];
        }else if(count2 ==0 && el1!=nums[i]){
            count2=1;
            el2=nums[i];
        }else{
            count1--;
            count2--;
        }
    }

    count1=0,count2=0;

    for(int i=0;i<n;i++){
        if(nums[i]==el1){
            count1++;
        }
        if(nums[i]==el2){
            count2++;
        }
    }

    int mini=n/3+1;
    vector<int> result;
    if(count1>=mini){
        result.push_back(el1);

    }
    if(count2 >= mini && el1!=el2){
        result.push_back(el2);
    }

    return result;
}

int main(){
    vector<int> arr={11,33,33,11,33,11};

    vector<int> ans=majority(arr);

    cout<<"majority elements: ";

    for(auto it: ans){
        cout<<it<<" ";
    }

    cout<<"\n";
    
    return 0;
}