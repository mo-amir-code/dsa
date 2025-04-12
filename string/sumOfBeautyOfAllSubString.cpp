#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    int beautySum(string s)
    {
        int ans = 0;
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                int cnt = 0;
                for (int k = i; k <= j; k++)
                {
                    mpp[s[k]]++;

                    if (mpp.find(s[k]) != mpp.end())
                    {
                        if (mpp[s[k]] > 1)
                            cnt++;
                    }
                }

                cout << cnt << ":" << mpp.size() << endl;
                cout << s.substr(i, j + 1) << endl;

                if (cnt >= 1 && mpp.size() > 1)
                {
                    ans++;
                    cout << "Count: " << ans << endl;
                }

                mpp.clear();
            }
        }

        return ans;
    }
};

int main()
{
    string num = "aabcbaa";
    Solution sol;

    sol.beautySum(num);

    return 0;
}