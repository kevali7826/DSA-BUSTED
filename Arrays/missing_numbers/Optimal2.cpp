#include<iostream>
using namespace std;

int zor(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++){
        
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    return xor1^xor2;
}

int main(){
    int arr[]={0,1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<zor(arr,n);
    return 0;
}