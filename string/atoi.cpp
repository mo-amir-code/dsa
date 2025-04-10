#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int isPos = 1;
        int ans = 0;
        int range = 2147483647;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
            {
                if ((ans == 0 && s[i] >= 49) || ans != 0)
                {
                    long cNum = ans * 10;
                    if (isPos == 1)
                        cNum += s[i] - '0';
                    else
                        cNum -= s[i] - '0';

                    cout<<"IsPos: "<<isPos<<", cNum: "<<cNum<<endl;

                    if (isPos == 1 && cNum <= range)
                        ans = cNum;
                    else if (isPos == 0 && cNum >= range)
                        ans = cNum;
                    else
                    {
                        ans = range;
                        break;
                    }
                }
            }
            else if (ans > 0)
                break;
            else
            {
                if (s[i] == '-')
                {
                    isPos = 0;
                    range = range * -1 - 1;
                }
                else if (s[i] != ' ' && s[i] != '+')
                    break;
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    string s = "   -042";
    cout<<sol.myAtoi(s);

    return 0;
}