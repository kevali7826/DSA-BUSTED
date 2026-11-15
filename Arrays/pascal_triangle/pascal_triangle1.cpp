#include<iostream>
using namespace std;



int nCr(int n,int r){
    if(r>n-r)
    r=n-r;

    if(r==1)
    return n;

    int res=1;

    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int pascaltriangle(int r,int c){
    return nCr(r-1,c-1);
}

int main(){
    int r=5;
    int c=3;
    int ans=pascaltriangle(r,c);

    cout<<"the element in the rth row and cth column in pascal trianlge is : "<<ans;
    return 0;
}