#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        cout<<"K = " << k << endl;
        if( k == 0 || n == 1) return;
        int t[k];
        for(int i = n - k; i < n; i++) t[i - (n-k)] = nums[i];

        for(int i = n - k - 1; i >= 0; i--){
            nums[n-1-((n-k-1) - i)] = nums[i];
        }

        for(int i = 0; i < k; i++){
            nums[i] = t[i];
        }
    }

int main(){
    vector<int> r = {1, 2 ,3, 4, 5, 6, 7};

    rotate(r, 3);

    for(int n : r){
        cout<<n;
    }

    return 0;
}