#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;  
    Node(int val){
        data = val;
        next = NULL;
    } 
};

class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head = NULL;
        tail = NULL;
    }
    void push(int data){
        Node* temp = new Node(data);

        if(head == NULL){
            head = tail = temp;
            cout<<"data: "<<tail->data<<endl;
            return;
        }
        tail -> next  = temp;
        tail = temp;
        cout<<"data: "<<tail->data<<endl;
    }

    void pop(){
        if(head == NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        Node* todelete = head;
        head = head->next;
        cout<<"delete data: "<<todelete->data<<endl;
        delete todelete;
    }

    void peek(){
        if(head==NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<"Peek "<<head->data<<endl;
    }

    void isEmpty(){
        if(head==NULL){
            cout<<"queue is empty"<<endl;
            return;
    }
    cout<<"queue is not empty"<<endl;
    }
};

//     class Queue{
//         int front;
//         int rear;
//         int *arr;
//         int size;
//         public:
//         Queue(int size){
//             front = rear = 0;
//             this -> size = size;
//             arr = new int[size];
//         }
    

//     void push(int data){
//         if(rear == size){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         arr[rear] = data;
//         cout<<"Pushed : "<<arr[rear]<<endl;
//         rear++;
//     }

//     void pop(){
//         if(front == rear)
//         {
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         cout<<"Popped : "<<arr[front]<<endl;
//         front++;
//     }

//     bool isEmpty(){
//         return front == rear;
//     }
// };


int main(){
   
//    Queue q(5);
   Queue q;
   q.push(13);
   q.push(16);
   q.push(21);
   q.push(19);
   q.push(11);
//    cout<<q.isEmpty()<<endl;
   q.isEmpty();
   q.push(191);
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   q.push(191);
   q.pop();
//    cout<<q.isEmpty()<<endl;
   q.isEmpty();

    return 0;
}