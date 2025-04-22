#include <iostream>
using namespace std;

struct Node
{
  int val;
  Node *next;
  Node *prev;

  Node(int v)
  {
    val = v;
    next = NULL;
    prev = NULL;
  }
};

class ReverseLL
{
private:
  Node *head;
  Node *temp;

public:
  ReverseLL(int v)
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

  Node* reverse(Node* headA, Node* tempA)
  {
    if(headA->next == NULL){
      headA->next = tempA;
      return headA;
    }
    Node* newHead = reverse(headA->next, headA);
    headA->next = tempA;
    return newHead;
  }

  void display()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->val << "->";
      temp = temp->next;
    }
  }

  Node* getHead() {
    return head;
  }

  void setHead(Node* newHead) {
    head = newHead;
    temp = newHead;
  }
};


int main()
{
  ReverseLL ll(1);
  ll.insert(2);
  ll.insert(3);
  ll.insert(4);
  ll.insert(5);
  ll.insert(6);

  Node* newHead = ll.reverse(ll.getHead(), NULL);
  ll.setHead(newHead);

  ll.display();

  return 0;
}