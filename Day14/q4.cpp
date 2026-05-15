//queue using linked list

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
private:
    Node* front;
    Node* rear;

public:

    Queue(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(int val){

        Node* newNode=new Node(val);

        if(isFull()){
            cout<<"Queue is Full"<<endl;
        }
        else{

            if(front==NULL){
                front=newNode;
                rear=newNode;
            }
            else{
                rear->next=newNode;
                rear=newNode;
            }

            cout<<val<<" inserted into queue"<<endl;
        }
    }

    void dequeue(){

        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
        }
        else{

            cout<<front->data<<" removed from queue"<<endl;

            Node* temp=front;

            front=front->next;

            delete temp;

            if(front==NULL){
                rear=NULL;
            }
        }
    }

    int Front(){

        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }

    int Rear(){

        if(rear==NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return rear->data;
        }
    }

    bool isFull(){

        Node* temp=new Node(0);

        if(temp==NULL){
            return true;
        }
        else{
            delete temp;
            return false;
        }
    }
};

int main(){

    Queue q;

    q.enqueue(10);

    q.enqueue(20);

    q.enqueue(30);

    q.dequeue();

    cout<<"Front element: "<<q.Front()<<endl;

    cout<<"Rear element: "<<q.Rear()<<endl;

    return 0;
}
