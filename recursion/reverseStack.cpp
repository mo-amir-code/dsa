#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

class Solution
{
public:
   void reverseStack(stack<int> st){
    if(st.empty()) return;
    int val = st.top();
    st.pop();
    reverseStack(st);
    st.push(val);
   }
};

int main()
{
    Solution sol;
    stack<int> st;

    for(int i = 1; i <= 10; i++){
        st.push(i);
    }

    sol.reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}