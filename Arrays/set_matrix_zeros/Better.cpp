#include<iostream>
#include<vector>
using namespace std;

void markrow(vector<vector<int>>& matrix,int i,int m){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void markcol(vector<vector<int>>& matrix,int j,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void setzeros(vector<vector<int>>&  matrix){

    int n=matrix.size();
    int m=matrix.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(matrix[i][j]==0){
                markrow(matrix,i,m);
                markcol(matrix,j,n);
            }
        }
    }

   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1)
            matrix[i][j]=0;
        }
    }
}
int main(){

    vector<vector<int>> matrix={
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setzeros(matrix);

    cout<<"Modified matrix: "<<endl;

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
}