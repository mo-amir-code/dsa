#include <iostream>
#include <vector>
using namespace std;

struct TestCase
{
    string s;
    vector<string> wordDict;
    bool expected;
};

class Solution
{
public:
    bool solve(string &s, vector<string> &wordDict, int idx)
    {
        if (idx >= s.size())
            return true;

        for (int i = 0; i < wordDict.size(); i++)
        {
            // if(i > 0 && s[i] == s[i-1]) continue;
            if (s[idx] == wordDict[i][0] && (s.size() - idx) >= wordDict[i].size())
            {
                if (s.substr(idx, wordDict[i].size()) == wordDict[i] && solve(s, wordDict, idx + wordDict[i].size()))
                    return true;
            }
        }

        return false;
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        return solve(s, wordDict, 0);
    }
};

int main()
{
    vector<TestCase> testCases = {
        {"leetcode", {"leet", "code"}, true},
        {"applepenapple", {"apple", "pen"}, true},
        {"catsandog", {"cats", "dog", "sand", "and", "cat"}, false},
        {"aaaaaaa", {"aaaa", "aaa"}, true},
        {"catsanddog", {"cat", "cats", "and", "sand", "dog"}, true},
        {"", {"a"}, true},
        {"anything", {}, false},
        {"startmatchfail", {"start", "match"}, false},
        {"onetwo", {"onetwo"}, true},
        {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab",
         {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa"},
         false}};

    Solution sol;

    for (int i = 0; i < testCases.size(); i++)
    {
        cout << "\n\nTest Case " << i + 1 << ": ";
        cout<<sol.wordBreak(testCases[i].s, testCases[i].wordDict);
    }

    return 0;
}