#include<iostream>
using namespace std;

bool arrays(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}

int main(){

    //TC=O(N)
    //SC=O(1)
    int arr[]={1,2,3,4,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arrays(arr,n);
    return 0;
}