#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string read(int n,vector<int> book,int target){
    int left=0,right=n-1;
    sort(book.begin(),book.end());

    while(left< right){
        int sum=book[left]+book[right];

        if(sum==target){
            return "yes";
        }else if(sum<target){
            left++;
        }
        else 
        {
            right--;
        }
    }
    return "no";
}

int main(){
      vector<int> book={2,5,8,10,3};
      int n=book.size();

      int target=18;
        cout << read(n, book, target);
}