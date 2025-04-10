#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                cout<<mp[s[i]]<<" : "<<t[i]<<endl;
                if (mp[s[i]] != t[i])
                return false;
            }
            else if (mp.find(t[i]) != mp.end())
            {
                cout<<mp[t[i]]<<" : "<<s[i]<<endl;
                if (mp[t[i]] != s[i])
                return false;
            }
            else
            {
                mp[s[i]] = t[i];
                mp[t[i]] = s[i];
            }
            
        }

        return true;
    }
};

int main()
{
    Solution sol;
    string s = "paper";
    string t = "title";

    cout << sol.isIsomorphic(s, t);

    return 0;
}