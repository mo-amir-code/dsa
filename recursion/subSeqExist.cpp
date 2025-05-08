#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool findSubSeq(vector<int> &nums, int idx, int sum, int k)
    {
        if(sum == k){
            return true;
        }

        if(idx == nums.size()) return false;

        bool res = false;

        sum += nums[idx];
        res = findSubSeq(nums, idx + 1, sum, k);

        if(res == true) return res;

        sum -= nums[idx];
        res = findSubSeq(nums, idx + 1, sum, k);

        return res;
    }
};

int main()
{
    Solution sol;

    vector<vector<vector<int>>> testCases = {
        {{1, 2, 1}, {2}},
        {{1, 2, 3, 4}, {6}},
        {{0, 0, 0}, {0}},
        {{-1, -2, -3, -4}, {-6}},
        {{5, 5, 5, 5}, {10}},
        {{1, 1, 1, 1, 1}, {3}},
        {{10, -10, 10, -10}, {0}},
        {{2, 4, 6, 8}, {12}},
        {{3, 3, 3, 3}, {6}},
        {{9, 8, 7, 6, 5}, {15}},
        {{1}, {1}},
        {{1}, {2}},
        {{-5, -2, -1, 0, 1, 2, 5}, {0}},
        {{7, 3, 2, 5, 8}, {10}},
        {{1, 2, 3}, {7}},
        {{0, -1, 2, -3, 4}, {2}},
        {{5, 10, 15, 20}, {25}},
        {{1, 3, 5, 7, 9}, {12}},
        {{2, 2, 2, 2, 2}, {6}},
        {{-1, 1, -1, 1}, {0}},
        {{4, 4, 4, 4}, {8}},
        {{11, 22, 33, 44}, {55}},
        {{-10, -5, 0, 5, 10}, {0}},
        {{6, 1, 2, 7, 3}, {10}},
        {{100, 200, 300}, {600}},
        {{1, 2, 3, 4, 5}, {15}},
        {{5, -2, 3, 1}, {7}},
        {{-2, -1, 0, 1, 2}, {1}},
        {{3, 6, 9}, {18}},
        {{1, 2, 3, 4, 5, 6}, {21}},
        {{7, 7, 7, 7}, {14}},
        {{9, -3, 2, 1, -1}, {8}},
        {{0, 1, 2, 3, 4}, {5}},
        {{2, 2, 2, 2, 2, 2}, {8}},
        {{-1, -1, -1, -1}, {-2}},
        {{6, 5, 4, 3, 2, 1}, {10}},
        {{10, 10, 10, 10}, {20}},
        {{1, 10, 100, 1000}, {1111}},
        {{3, 2, 1}, {6}},
        {{0}, {0}},
        {{7, 3, 1, 9}, {10}},
        {{2, 4, 1, 3}, {5}},
        {{-5, 5, -5, 5}, {0}},
        {{12, 3, 5, 2}, {17}},
        {{2, 2, 2}, {4}},
        {{4, 3, 2, 1}, {6}},
        {{9, 1, 1, 1, 1}, {13}},
        {{8, -2, 3, 5}, {6}},
        {{6, 6, 6, 6}, {18}},
        {{5, 4, 3, 2, 1}, {9}}};

    for(int i = 0; i < testCases.size(); i++){
        cout<<"\n\nTest Case: "<<i+1<<endl;
        cout<<"Elements: ";
        for(int j = 0; j < testCases[i][0].size(); j++){
            cout<<testCases[i][0][j]<<" ";
        }
        
        cout<<" : Target : "<<testCases[i][1][0]<<endl;

        bool res = sol.findSubSeq(testCases[i][0], 0, 0, testCases[i][1][0]);
        cout<<"Result: "<<(res ? "Yes" : "No")<<endl;
    }

    return 0;
}