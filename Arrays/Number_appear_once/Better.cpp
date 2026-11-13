#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int hashs(vector<int> arr,int n){
    int maxi=arr[0];

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    vector<int> hash(maxi+1,0);
       

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,1,2,3,3,4,4};
    int n=arr.size();
    cout<<hashs(arr,n);
}