#include<iostream>
#include<map>
#include<vector>
using namespace std;

string read(int n,vector<int> book,int target){
    map<int,int> mpp;

    for(int i=0;i<n;i++){
        int a=book[i];
        int more=target-a;

        if(mpp.find(more)!=mpp.end()){
            return "yes";
        }
        mpp[a]=i;
    }
    return "no";
}

int main(){
    vector<int> book = {2,5,8,10,3};

    int n = book.size();

    int target = 18;

    cout << read(n, book, target);

    return 0;
}