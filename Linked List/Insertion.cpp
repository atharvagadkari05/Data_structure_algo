#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next; // SETTING DEFAULT NODE

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// WE WILL INSERT A NEW NODE AT THE END

void InsertAtTail(Node* &head, int val)
{

    Node* new_node = new Node(val); // 'new_node' THIS VARIABLE WILL STORE THE ADDRESS OF THE NEWLY ADDED NODE.

    // IF LINKED LIST IS EMPTY THEN:
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node* temp = head; // ITERATOR WHICH WILL ITERATE FROM START TO END
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node* head)
{
    Node* temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
Node* head =NULL;
InsertAtTail(head,5);
InsertAtTail(head,2);
InsertAtTail(head,3);
InsertAtTail(head,4);

display(head);


}