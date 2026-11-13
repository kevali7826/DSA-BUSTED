#include<iostream>
#include<vector>
using namespace std;

int missingNums(vector<int> arr,int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0)
            return i;  
    }
    return -1;
}

int main(){
    //TC=O(N2)
    //sc=(1)
    vector<int> arr={1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=missingNums(arr,n);
    cout<<k;
    return 0;
}