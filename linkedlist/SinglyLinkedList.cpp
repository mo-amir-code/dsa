#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};

class SinglyLinkedList{
    private:
       Node* head;

    public:
       SinglyLinkedList(){
          head = nullptr;
       }

       SinglyLinkedList(int data){
          Node* temp = new Node(data);
          head = temp;
       }

       void insert(int data){
         Node* newNode = new Node(data);

         if(head == nullptr){
            head = newNode;
            return;
         }

         Node* temp = head;
         while(temp->next != nullptr){
            temp = temp->next;
         }

         temp->next = newNode;
       }

       void findPos(int val){
         Node* temp = head;
         int pos = 0;

         while(temp != nullptr){
            if(temp->data == val){
               cout<<"\nValue: "<<val<<" exist on the pos: "<<pos+1<<endl;
               return;
            }
            temp = temp->next;
            pos++;
         }

         cout<<"Val is not found"<<endl;
       }

       void display(){
        Node* temp = head;
        while(temp->next != nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
       }
};

int main(){
    SinglyLinkedList sl;

    sl.insert(1);
    sl.insert(2);
    sl.insert(3);
    sl.insert(4);
    sl.insert(5);
    sl.insert(6);
    sl.insert(7);
    sl.insert(8);
    sl.insert(9);
    sl.display();
    sl.findPos(7);

    return 0;
}