#include<iostream>
#include<vector>
using namespace std;

void rotatematrix(vector<vector<int>>& matrix){

    int n=matrix.size();

    vector<vector<int>> rotated(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rotated[j][n-i-1]=matrix[i][j];
        }
    }

    for(int i=0;i<rotated.size();i++){
        for(int j=0;j<rotated.size();j++){
            matrix[i][j]=rotated[i][j];
        }
    }
}

int main(){

    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

    rotatematrix(arr);

    cout<<"rotated image"<<endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}