#include <iostream>
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

    // Solution(int v){
    //     Node* newNode = new Node(v, NULL);
    //     head = newNode;
    //     temp = newNode;
    // }

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

    void arrange()
    {
        Node *t = head;
        Node *left = head;
        Node *right = head;

        while (t != NULL)
        {
            if (t->val == 0)
            {
                t->val = left->val;
                left->val = 0;
            }
            if (t->val == 1)
            {
                t->val = right->val;
                right->val = 1;
            }

            if (left->val == 0 && left->next != NULL)
                left = left->next;
            if ((right->val == 1 || right->val == 0) && right->next != NULL)
                right = right->next;

            t = t->next;
        }

        display(head);
    }
};

int main()
{
    // int n;
    // cout << "Enter number of nodes: ";
    // cin >> n;

    Solution sort;

    int testCases[10][9] = {
        {2, 0, 1, 2, 1, 0, 2, 1, 0}, // Test case 1
        {1, 2, 0, 1, 2, 0, 0, 1, 2}, // Test case 2
        {0, 0, 0, 1, 1, 1, 2, 2, 2}, // Test case 3 (already sorted)
        {2, 2, 2, 1, 1, 1, 0, 0, 0}, // Test case 4 (reverse sorted)
        {1, 0, 2, 1, 0, 2, 1, 0, 2}, // Test case 5
        {0, 2, 1, 0, 2, 1, 0, 2, 1}, // Test case 6
        {2, 1, 0, 2, 0, 1, 2, 0, 1}, // Test case 7
        {0, 1, 2, 0, 1, 2, 0, 1, 2}, // Test case 8
        {1, 1, 1, 1, 1, 1, 1, 1, 1}, // Test case 9 (all 1s)
        {0, 0, 0, 0, 0, 0, 0, 0, 0}  // Test case 10 (all 0s)
    };

    for (int i = 0; i < 10; i++)
    {
        cout<<"Test Case: "<<i+1<<endl;

        for (int j = 0; j < 9; j++)
        {
            sort.insert(testCases[i][j]);
        }

        sort.arrange();

        cout<<endl;

        sort.deleteL();
    }

    return 0;
}