#include<iostream>
#include<vector>
using namespace std;

int zor(vector<int> arr,int n){
    int xor1=0;

    for(int i=0;i<arr.size();i++){
        xor1=xor1^arr[i];
    }
    return xor1;
}

int main(){
    vector<int> arr={1,1,2,3,3,4,4};
    int n=arr.size();

    cout<<zor(arr,n);
}