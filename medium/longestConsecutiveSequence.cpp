#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


// Optimal Approach
int main(){
    vector<int> nums = {100, 200, 1, 3, 2, 4};
    int n = nums.size();

    unordered_set<int> st;

    for(int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    int longest = 1;

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int el = it;
            while(st.find(el+1) != st.end()){
                cnt++;
                el++;
            }
            longest = max(cnt, longest);
        }
    }
    


    cout<<"Longest Consecutive Sequence is: "<<longest;

    return 0;
}