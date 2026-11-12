#include<iostream>
using namespace std;

pair<int,int> sums(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){

    //tc=o(n2)
    //sc=(1)
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=14;

    pair<int, int> ans=sums(arr,n,target);
    cout<<ans.first<<" "<<ans.second;
}