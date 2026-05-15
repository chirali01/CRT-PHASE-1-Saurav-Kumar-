//queue using array

#include<iostream>
using namespace std;

class Queue{
private:
    int arr[100];
    int front;
    int rear;

public:

    Queue(){
        front=0;
        rear=-1;
    }

    void enqueue(int val){

        if(rear==99){
            cout<<"Queue Overflow"<<endl;
        }
        else{
            rear++;
            arr[rear]=val;

            cout<<val<<" inserted into queue"<<endl;
        }
    }

    void dequeue(){

        if(front>rear){
            cout<<"Queue Underflow"<<endl;
        }
        else{

            cout<<arr[front]<<" removed from queue"<<endl;

            front++;
        }
    }

    int top(){

        if(front>rear){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int size(){

        return rear-front+1;
    }

    bool isEmpty(){

        if(front>rear){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Queue q;

    q.enqueue(10);

    q.enqueue(20);

    q.dequeue();

    cout<<"Front element: "<<q.top()<<endl;

    cout<<"Size: "<<q.size()<<endl;

    q.enqueue(30);

    q.enqueue(40);

    q.dequeue();

    if(q.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }

    return 0;
}
