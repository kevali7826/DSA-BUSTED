#include<iostream>
#include<set>
using namespace std;

void duplicates(int arr[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }

    for(int i=0;i<index;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicates(arr,n);

    return 0;
}