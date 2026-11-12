#include<iostream>
#include<climits>
using namespace std;

int LargestEle(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={4,7,9,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Largest element is: "<<LargestEle(arr,n);
}