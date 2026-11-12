#include<iostream>
#include<map>
#include<vector>
using namespace std;

pair<int,int> sums(vector<int>& arr,int target){
    map<int,int> mpp;
    int n=arr.size();

    for(int i=0;i<n;i++){
        int num=arr[i];

        int moreneeded=target-num;

        if(mpp.find(moreneeded)!=mpp.end()){
            return {mpp[moreneeded],i};
        }
        mpp[num]=i;
    }
    return {-1,-1};

}

int main(){

    //tc=o(n log n)
    //sc=o(n)
    vector<int> arr={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=14;

    pair<int,int> ans=sums(arr,target);
    cout<<ans.first<<" "<<ans.second;
    return 0;

}