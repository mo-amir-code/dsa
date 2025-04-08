#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        int lOdd = -1;
        for (int i = 0; i < num.size(); i++)
        {
            if (((int)num[i]) % 2 != 0)
            {
                lOdd = max(lOdd, ((int)num[i]));
            }
            string cStr = num.substr(0, i+1);
            int cNum = stoi(cStr);
            cout << "Current Num: " << cNum << endl;
            if (cNum % 2 != 0)
            {
                lOdd = max(lOdd, cNum);
            }
        }

        string ans = lOdd == -1 ? "" : to_string(lOdd);
        cout << "Ans: " << ans;
        return ans;
    }
};

int main()
{
    string num = "35427";
    Solution sol;

    sol.largestOddNumber(num);

    return 0;
}