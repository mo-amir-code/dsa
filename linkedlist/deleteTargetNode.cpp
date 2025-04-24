#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int val;
    struct Node *next;

    Node(int v)
    {
        val = v;
        next = NULL;
    }

    Node(int v, Node *newNode)
    {
        val = v;
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

    void deleteNode(Node *tHead, int target)
    {
        Node *t = tHead;
        Node *last = NULL;

        while (t != NULL)
        {
            if (t->val == target)
            {
                Node *dNode = t;

                if (last != NULL)
                {
                    last->next = t->next;
                }
                else
                {
                    tHead = t->next;
                }

                t = t->next;
                delete dNode;
            }
            else
            {
                last = t;
                t = t->next;
            }
        }

        head = tHead;

        display(tHead);
    }
};

int main()
{
    // int n;
    // cout << "Enter number of nodes: ";
    // cin >> n;

    Solution sort;

    vector<vector<int>> testCases = {
        {1, 2, 3, 2, 4},      // remove 2 → {1, 3, 4}
        {5, 5, 5},            // remove 5 → {}
        {9, 8, 7},            // remove 6 → no change
        {1, 2, 3, 4},         // remove 4 → {1, 2, 3}
        {0, 0, 1, 0},         // remove 0 → {1}
        {7, 6, 7, 5},         // remove 7 → {6, 5}
        {8},                  // remove 8 → {}
        {3, 3, 2, 3, 1},      // remove 3 → {2, 1}
        {10, 20, 30},         // remove 10 → {20, 30}
        {4, 4, 4, 4},         // remove 4 → {}
        {6, 6, 6, 7, 6, 8},   // remove 6 → {7, 8}
        {1, 2, 1, 2, 1},      // remove 1 → {2, 2}
        {11, 12, 13},         // remove 14 → no change
        {100, 200, 100, 300}, // remove 100 → {200, 300}
        {42},                 // remove 24 → no change
        {0, -1, -2, 0, -3},   // remove 0 → {-1, -2, -3}
        {999, 998, 997},      // remove 998 → {999, 997}
        {1, 1, 2, 2, 1, 3},   // remove 1 → {2, 2, 3}
    };

    vector<int> targets = {
        2,
        5,
        6,
        4,
        0,
        7,
        8,
        3,
        10,
        4,
        6,
        1,
        14,
        100,
        24,
        0,
        998,
        1,
    };

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

        sort.deleteNode(sort.head, targets[i]);

        cout << endl;

        sort.deleteL();
    }

    return 0;
}