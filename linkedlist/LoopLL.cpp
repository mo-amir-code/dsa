#include <iostream>
using namespace std;

struct Node
{
  int val;
  Node *next;

  Node(int v)
  {
    val = v;
    next = NULL;
  }
};

class LoopLL
{
private:
  Node *head;
  Node *temp;

public:
  LoopLL(int v)
  {
    Node *newNode = new Node(v);
    head = newNode;
    temp = head;
  }

  void insert(int v)
  {
    Node *newNode = new Node(v);
    temp->next = newNode;
    temp = temp->next;
  }

  int countLoop()
  {
    Node *slow = head;
    Node *fast = head;

    int cnt = 0;

    while (fast != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
      {
        slow = head;
        while (slow != fast)
        {
          slow = slow->next;
          fast = fast->next;
        }

        cnt = 1;
        fast = fast->next;
        while (fast != slow)
        {
          fast = fast->next;
          cnt++;
        }

        return cnt;
      }
    }

    return cnt;
  }

  void display(int n)
  {
    cout<<n;
  }

  void makeALoop(int pos){
    Node* t = head;

    while(pos != 1){
      t = t->next;
      pos--;
    }

    temp->next = t;
  }

  Node *getHead()
  {
    return head;
  }

  void setHead(Node *newHead)
  {
    head = newHead;
    temp = newHead;
  }
};

int main()
{
  LoopLL ll(1);
  ll.insert(2);
  ll.insert(3);
  ll.insert(4);
  ll.insert(5);
  ll.insert(6);
  ll.insert(7);
  ll.insert(8);
  ll.insert(9);
  ll.makeALoop(2);

  int loopLen = ll.countLoop();

  ll.display(loopLen);

  return 0;
}