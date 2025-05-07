#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

class Solution
{
public:
    void sortStack(stack<int>& st){
        if(st.empty()) return;
        int val = st.top();
        st.pop();
        sortStack(st);

        insertVal(st, val);
    }

    void insertVal(stack<int>& st, int val){
        if(st.empty() || st.top() < val){
            st.push(val);
            return;
        }

        int currVal = st.top();
        st.pop();

        insertVal(st, val);
        st.push(currVal);
    }

    void viewStack(stack<int> st){
        if(st.empty()) return;

        cout<<st.top()<<" ";
        st.pop();

        viewStack(st);
    }
};

int main()
{
    Solution sol;
    stack<int> st;
    

    st.push(42);
    st.push(7);
    st.push(19);
    st.push(3);
    st.push(88);


    sol.sortStack(st);
    sol.viewStack(st);

    return 0;
}