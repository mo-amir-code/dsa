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

    Node *reverse(Node *newHead)
    {
        Node *last = NULL;
        Node *curr = newHead;

        while (curr != NULL)
        {
            newHead = newHead->next;
            curr->next = last;
            last = curr;
            curr = newHead;
        }

        return last;
    }

    void addOne()
    {
        Node *newHead = reverse(head);
        Node *t = newHead;

        int c = 1;

        while (t != NULL)
        {
            if (t->val < 9)
            {
                t->val = t->val + 1;
                c = 0;
                break;
            }
            t->val = 0;
            t = t->next;
        }

        newHead = reverse(newHead);

        if (c > 0 && t == NULL)
        {
            Node *newNode = new Node(1, newHead);
            head = newNode;
            display(head);
            return;
        }

        head = newHead;

        display(head);
    }
};

int main()
{
    // int n;
    // cout << "Enter number of nodes: ";
    // cin >> n;

    Solution sort;

    vector<vector<int>> testCases = {
        {1, 2, 3},    // 123 + 1 = 124
        {9},          // 9 + 1 = 10
        {1, 0, 0},    // 100 + 1 = 101
        {2, 5, 9},    // 259 + 1 = 260
        {0},          // 0 + 1 = 1
        {9, 9},       // 99 + 1 = 100
        {3, 4, 9, 9}, // 3499 + 1 = 3500
        {9, 9, 9},    // 999 + 1 = 1000
        {5, 6, 7},    // 567 + 1 = 568
        {1, 9, 9},    // 199 + 1 = 200
        {1, 2, 9},    // 129 + 1 = 130
        {2, 0, 0},    // 200 + 1 = 201
        {8, 9},       // 89 + 1 = 90
        {7, 7, 7},    // 777 + 1 = 778
        {4, 3, 2, 1}, // 4321 + 1 = 4322
        {6, 5, 4, 3}, // 6543 + 1 = 6544
        {3, 3, 3},    // 333 + 1 = 334
        {2, 0, 2},    // 202 + 1 = 203
        {0, 0, 1},    // 001 + 1 = 002 (or 2)
        {1, 0, 0, 0}, // 1000 + 1 = 1001
    };

    for (int i = 0; i < testCases.size(); i++)
    {
        cout << "Test Case: " << i + 1 << endl;

        for (int j = 0; j < testCases[i].size(); j++)
        {
            sort.insert(testCases[i][j]);
        }

        sort.display(sort.head);

        cout << endl;

        sort.addOne();

        cout << endl;

        sort.deleteL();
    }

    return 0;
}