#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[],int n){
    int largest=INT_MIN;
    int slargest=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]< largest && arr[i]> slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}

int main(){
    int arr[]={4,3,2,7,6,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"second largest: "<<secondLargest(arr,n);
}