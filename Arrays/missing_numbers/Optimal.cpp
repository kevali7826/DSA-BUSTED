#include<iostream>
using namespace std;

int sums(int arr[],int n){
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n;i++){
        s2+=arr[i];
    }
    int k=sum-s2;
    return k;
}

int main(){
    int arr[]={0,1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int k=;
    cout<<"the missing number is: "<<sums(arr,n);
    return 0;
}



