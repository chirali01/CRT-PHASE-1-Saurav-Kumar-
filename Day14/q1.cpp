//stack implementation using array

#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int topIndex;

public:
    
    Stack() {
        topIndex = -1;
    }

    void push(int val) {
        if(topIndex < 99) {
            topIndex++;
            arr[topIndex] = val;
            cout << val << " pushed into stack" << endl;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if(topIndex >= 0) {
            cout << arr[topIndex] << " popped from stack" << endl;
            topIndex--;
        }
        else {
            cout << "Stack Underflow" << endl;
        }
    }

    int top() {
        if(topIndex >= 0) {
            return arr[topIndex];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    int size() {
        return topIndex + 1;
    }

    bool isEmpty() {
        if(topIndex == -1) {
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
