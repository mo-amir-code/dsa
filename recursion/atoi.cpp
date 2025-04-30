#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    long findAtoi(string s, int idx, long ans, int sign)
    {
        if (ans * sign > INT_MAX)
            return INT_MAX;
        if (ans * sign < INT_MIN)
            return INT_MIN;

        if (!(idx < s.size() && s[idx] >= 48 && s[idx] <= 57))
        {
            return ans;
        }

        ans = ans * 10 + (s[idx] - '0');
        return findAtoi(s, idx + 1, ans, sign);
    }
    int myAtoi(string s)
    {
        int sign = 1, i = 0;
        long ans = 0;

        while (i < s.size() && s[i] == ' ')
            i++;
        if (i == s.size())
            return 0;

        if (s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (s[i] == '+')
            i++;

        ans = findAtoi(s, i, ans, sign);

        return (int)(ans * sign);
    }
};

int main()
{
    Solution sol;

    vector<string> testCases = {
        "123",         // valid
        "-456",        // valid
        "   789",      // whitespace
        "00123",       // leading zeros
        "2147483647",  // INT_MAX
        "-2147483648", // INT_MIN
        "12abc",       // partial
        "abc123",      // invalid
        "",            // empty
        "+",           // only plus
        "-",           // only minus
        "+00123"       // valid with plus and leading zeros
    };

    for(int i = 0; i < testCases.size(); i++){
        cout<<"Test Case: "<<i+1<<endl;
        int ans = sol.myAtoi(testCases[i]);
        cout<<"Answer: "<<ans<<endl;
        cout<<endl;
    }

    return 0;
}