#include<iostream>
#include<vector>
using namespace std;

void setzeros(vector<vector<int>>& matrix ){
    int m=matrix.size();
    int n=matrix[0].size();

    vector<bool> rows(m,false);
    vector<bool> cols(n,false);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                rows[i]=true;
                cols[j]=true;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rows[i] || cols[j]){
                matrix[i][j]=0;
            }
        }
    }
}

int main(){

    vector<vector<int>> matrix={{1,2,3},{4,0,6},{7,8,9}};

    setzeros(matrix);

    for(auto& row : matrix){
        for(int num:row){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}