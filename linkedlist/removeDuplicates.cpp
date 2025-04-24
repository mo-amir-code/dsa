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

    void removeDup(){
        if(head == NULL) return;
        Node* last = head;
        Node* t = head->next;

        while(t != NULL){
            if(last->val != t->val){
                last->next = t;
                last = last->next;
                t = t->next;
            }else{
                Node* toDelete = t;
                t = t->next;
                delete toDelete;
            }
        }

        last->next = NULL;

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
        {1, 1, 2, 2, 3},          // → {1, 2, 3}
        {5, 5, 5, 5},             // → {5}
        {},                       // → {}
        {7, 8, 9, 10},            // → {7, 8, 9, 10}
        {0, 0, 1, 1, 2, 2},       // → {0, 1, 2}
        {3, 3, 3, 4, 4},          // → {3, 4}
        {6, 6, 6, 6, 6},          // → {6}
        {1, 2, 2, 3, 3, 4},       // → {1, 2, 3, 4}
        {10, 10, 20, 30, 30},     // → {10, 20, 30}
        {-3, -2, -2, -1, -1},     // → {-3, -2, -1}
        {100, 100, 200, 300},     // → {100, 200, 300}
        {1, 1, 1},                // → {1}
        {4, 5, 6, 7, 8, 9},       // → {4, 5, 6, 7, 8, 9}
        {42, 42},                 // → {42}
        {11, 11, 12, 13, 13},     // → {11, 12, 13}
        {0, 1, 2, 3, 4, 5},       // → {0, 1, 2, 3, 4, 5}
        {6, 6, 7, 8, 8},          // → {6, 7, 8}
        {2, 2, 2, 2, 2},          // → {2}
        {-5, -5, -5, -4, -3, -3}, // → {-5, -4, -3}
        {1000, 2000, 2000, 3000}, // → {1000, 2000, 3000}
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

        sort.removeDup();

        cout << endl;

        sort.deleteL();
    }

    return 0;
}