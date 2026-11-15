#include<iostream>
#include<vector>
using namespace std;

vector<int> generate(int row){
    long long ans=1;

    vector<int> ansrow;

    ansrow.push_back(1);

    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>> pascaltriangle;

    for(int row=1;row<=n;row++){
        pascaltriangle.push_back(generate(row));
    }
    return pascaltriangle;
}

int main(){
    
    int n=5;
    vector<vector<int>> pascaltriangle1=pascaltriangle(n);

    for(auto& row: pascaltriangle1){
        for(auto& element:row){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}