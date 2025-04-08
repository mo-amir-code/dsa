#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.size() != goal.size())
            return false;

        int n = s.size();
        int sIdx = 0;

        string str = goal + goal;

        for (int i = 0; i < str.size(); i++)
        {

            if (str[i] == s[sIdx])
                sIdx++;
            else
            {
                while (sIdx >= 0)
                {
                    if (s[sIdx] != str[i])
                        sIdx--;
                    else
                    {
                        sIdx++;
                        break;
                    }
                }

                if(sIdx < 0) sIdx = 0;
            }

            cout<<str[i]<<": "<<sIdx<<endl;

            if (sIdx == n)
                break;
        }

        return sIdx == n ? true : false;
    }
};

int main()
{
    Solution sol;
    string s = "slqhrmnxqjtyzvfldllvixbzpswspednzonqkjrlaltguusdxvknoasahjgqdquinucpmlxtdzpnmvxqtfwmxdqozgmaaycjebjs";
    string goal = "llvixbzpswspednzonqkjrlaltguusdxvknoasahjgqdquinucpmlxtdzpnmvxqtfwmxdqozgmaaycjebjsslqhrmnxqjtyzvfld";

    cout<<sol.rotateString(s, goal);

    return 0;
}