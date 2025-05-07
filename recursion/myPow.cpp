#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    long long myPow(int num, int n){
        if(n == 1 || n == 0) return num;

        long long res;
        if(n%2 == 0){
            res = myPow(num*num, n/2);
        }else{
            res = myPow(num, n-1);
            res = num * res;
        }

        return res;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> testCases = {
        {2, 10},     // 2^3 = 8
        {3, 7},     // 2^3 = 8
        {2, 3},     // 2^3 = 8
        {5, -2},    // 5^-2 = 0.04
        {10, 0},    // 10^0 = 1
        {3, 4},     // 3^4 = 81
        {7, -1},    // 7^-1 = 0.142857...
        {1, 5},     // 1^5 = 1
        {-2, 3},    // (-2)^3 = -8
        {-3, 2},    // (-3)^2 = 9
        {4, -3},    // 4^-3 = 0.015625
        {0, 5},     // 0^5 = 0
        {5, 1},     // 5^1 = 5
        {6, -2},    // 6^-2 = 0.0277...
        {9, 2},     // 9^2 = 81
        {2, -4},    // 2^-4 = 0.0625
        {-1, 3},    // -1^3 = -1
        {-1, 2},    // -1^2 = 1
        {8, 0},     // 8^0 = 1
        {3, -3},    // 3^-3 = 0.037
        {-4, 1},    // -4^1 = -4
        {2, -1}     // 2^-1 = 0.5
    };

    for(int i = 0; i < testCases.size(); i++){
        cout<<"Test Case: " <<i+1<< " : " <<testCases[i][0] << " " << testCases[i][1]<<endl;
        int ans = sol.myPow(testCases[i][0], abs(testCases[i][1]));
        cout<<"Answer: "<<((testCases[i][1] < 0) ? (double)1/ans : ans)<<endl;
        cout<<endl;
    }

    return 0;
}