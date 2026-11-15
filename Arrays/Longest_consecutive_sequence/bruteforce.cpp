#include<iostream>
#include<vector>
using namespace std;

bool ls(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}

int bruteforce(int arr[],int n){
    int longest=1;

    for(int i=0;i<n;i++){

        int x=arr[i];
        int count=1;

        while(ls(arr,n,x+1)==true)
        {
            x=x+1;
            count=count+1;
        }
        longest=max(longest,count);
    }
    return longest;

}

int main(){
    int arr[]={100,4,200,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=bruteforce(arr,n);

    cout<<"longest consecutive sequence: "<<ans<<endl;
    return 0;
}