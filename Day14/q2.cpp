//stack implementation using linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* topNode;

public:

    Stack() {
        topNode = NULL;
    }

    void push(int val) {

        Node* newNode = new Node(val);

        newNode->next = topNode;

        topNode = newNode;

        cout << val << " pushed into stack" << endl;
    }

    void pop() {

        if(topNode == NULL) {
            cout << "Stack Underflow" << endl;
        }
        else {

            cout << topNode->data << " popped from stack" << endl;

            Node* temp = topNode;

            topNode = topNode->next;

            delete temp;
        }
    }

    int top() {

        if(topNode == NULL) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else {
            return topNode->data;
        }
    }

    int size() {

        int count = 0;

        Node* temp = topNode;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    bool isEmpty() {

        if(topNode == NULL) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {

    Stack s;

    s.push(2);

    s.pop();

    cout << "Size: " << s.size() << endl;

    s.pop();

    cout << "Top element: " << s.top() << endl;

    s.push(3);
    s.push(4);
    s.push(5);

    if(s.isEmpty()) {
        cout << "Stack is Empty" << endl;
    }
    else {
        cout << "Stack is Not Empty" << endl;
    }

    return 0;
}
