//WAP in c++ for reversing a linked list with 5 nodes containing values 10, 20, 30, 40, and 50 and display all the elements of the linked list.
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void printNode(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* reverseList(Node* head)
{
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int main()
{
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    Node* head = n1;
    cout << "Original Linked List: ";
    printNode(head);
    head = reverseList(head);
    cout << endl;
    cout << "Reversed Linked List: ";
    printNode(head);
    return 0;
}
