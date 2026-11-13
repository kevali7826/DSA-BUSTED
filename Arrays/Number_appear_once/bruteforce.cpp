#include<iostream>
#include<vector>
using namespace std;

int appears(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        int num=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num)
            count++;
        }
        if(count==1)
        return num;
    }
    return -1;
}

int main(){
    vector<int> arr={1,1,2,3,2,5,3,4,4};
    int n=arr.size();
    cout<<appears(arr,n);
}