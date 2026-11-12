#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[],int n){
    int largest=INT_MIN;
    int slargest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }

    slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
return slargest;
}

int main(){

    //the time complexity is : O(2N)
    //and space complexity is: o(1)
    int arr[]={3,7,6,5,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"second largest: "<<secondLargest(arr,n);
}