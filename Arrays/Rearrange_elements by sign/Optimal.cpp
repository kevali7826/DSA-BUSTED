#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrange(vector<int>& arr, int n){
    vector<int> ans(n,0);

    int posIndex=0,negIndex=1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){

            ans[negIndex]=arr[i];
            negIndex+=2;
        }
        else{
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }
   return ans;
}

int main(){
    vector<int> arr={3,1,-2,-5,2,-4};
    int n=arr.size();

    rearrange(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}