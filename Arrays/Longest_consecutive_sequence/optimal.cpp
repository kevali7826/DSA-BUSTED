#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longest(vector<int>& arr ){
    int n=arr.size();
    if(n==0)
    return 0;

    int longest=1;
    unordered_set<int> st;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;

            while(st.find(x+1)!=st.end()){
                x=x+1;
                count=count+1;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}

int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int ans = longest(nums);

    cout << "Longest consecutive sequence: " << ans << endl;
    return 0;
}