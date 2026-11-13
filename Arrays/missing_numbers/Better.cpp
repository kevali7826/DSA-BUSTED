#include<iostream>
#include<vector>
using namespace std;

int hashs(vector<int> arr,int n){
    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }

    for(int i=0;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={0,1,2,3,5};
      int n = arr.size();

    int ans = hashs(arr,n);

    cout << ans;
    return 0;
}