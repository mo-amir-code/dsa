#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;

    Node(int v)
    {
        val = v;
        prev = NULL;
        next = NULL;
    }

    Node(int v, Node *newNode)
    {
        val = v;
        prev = NULL;
        next = newNode;
    }
};

class Solution
{
public:
    Node *head = NULL;
    Node *temp;

    void insert(int v)
    {
        Node *newNode = new Node(v);

        if (head == NULL)
        {
            head = newNode;
            temp = head;
            return;
        }

        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }

    void deleteL()
    {
        Node *t = head;

        while (t != NULL)
        {
            Node *t1 = t;
            t = t->next;
            delete t1;
        }

        head = NULL;
        temp = head;
    }

    void display(Node *newHead)
    {
        Node *t = newHead;
        while (t != NULL)
        {
            cout << t->val << " ";
            t = t->next;
        }
    }

    void findPair(int tar)
    {
        Node* left = head;
        Node* right = head;

        int sum = left->val;

        while(left != NULL && right != NULL){

            if(sum == tar) break;
            else if(sum > tar){
                sum -= left->val;
                left = left->next;
            }else{
                right = right->next;
                if(right != NULL){
                    sum += right->val;
                }
            }
        }

        while(left != NULL && left->prev != right){
            cout<<left->val<<" ";
            left = left->next;
        }
    }
};

int main()
{
    // int n;
    // cout << "Enter number of nodes: ";
    // cin >> n;

    Solution sort;

    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5},    // → pairs for 6: (1,5), (2,4)
        {1, 1, 2, 2, 3},    // → pairs for 4: (1,3), (2,2)
        {2, 3, 5, 7, 11},   // → pairs for 10: (3,7), (5,5) — ignore duplicate if not allowed
        {0, 1, 2, 3, 4},    // → pairs for 4: (0,4), (1,3)
        {1, 3, 5, 7},       // → pairs for 8: (1,7), (3,5)
        {2, 2, 4, 6},       // → pairs for 8: (2,6), (4,4)
        {0, 1, 1, 2, 3},    // → pairs for 3: (0,3), (1,2)
        {5, 10, 15, 20},    // → pairs for 25: (5,20), (10,15)
        {1, 2, 4, 5, 6, 8}, // → pairs for 10: (2,8), (4,6)
        {3, 4, 5, 6},       // → pairs for 9: (3,6), (4,5)
        {0, 1, 2, 3},       // → pairs for 5: (2,3)
        {-3, -1, 0, 1, 4},  // → pairs for 1: (-1,2), (0,1)
        {-5, -3, 0, 3, 5},  // → pairs for 0: (-5,5), (-3,3), (0,0)
        {2, 3, 4, 6, 8},    // → pairs for 7: (3,4)
        {1, 2, 5, 6, 7},    // → pairs for 8: (1,7), (2,6)
        {1, 3, 4, 6},       // → pairs for 7: (3,4)
        {2, 4, 6, 8},       // → pairs for 10: (2,8), (4,6)
        {1, 1, 1, 1},       // → pairs for 2: (1,1)
        {10, 20, 30, 40},   // → pairs for 50: (10,40), (20,30)
        {0, 2, 4, 6, 8},    // → pairs for 8: (0,8), (2,6), (4,4)
    };

    vector<int> targets = {
        6,
        4,
        10,
        4,
        8,
        8,
        3,
        25,
        10,
        9,
        5,
        1,
        0,
        7,
        8,
        7,
        10,
        2,
        50,
        8};

    for (int i = 0; i < testCases.size(); i++)
    {
        cout << "Test Case: " << i + 1 << endl;

        for (int j = 0; j < testCases[i].size(); j++)
        {
            sort.insert(testCases[i][j]);
        }

        sort.display(sort.head);
        cout<<"Target: "<<targets[i];

        cout << endl;

        sort.findPair(targets[i]);

        cout << endl;

        sort.deleteL();
    }

    return 0;
}