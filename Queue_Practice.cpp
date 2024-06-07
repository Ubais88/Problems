#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;
    node(int data){
        this -> data = data;
        next = NULL;
    }
};

class queue{
    node* head;
    node* tail;
    public:
    queue(){
        head = NULL;
        tail = NULL;
    }

    void push(int data){
        node* new_node = new node(data);
        if(head == NULL){
            head = tail = new_node;
            cout<<"Tail -> "<<tail->data<<endl;
            return;
        }
        tail -> next = new_node;
        tail = new_node;
        cout<<"Tail -> "<<tail->data<<endl;
    }

    void pop(){
        if(head == NULL){
            cout<<"Queue is UnderFlow"<<endl;
            return;
        }
        node* todelete = head;
        head = head -> next;
        cout<<"Deleted -> "<<todelete->data<<endl;
        delete todelete;
    }

    void isEmpty(){
        if(head == NULL){
            cout<<"Empty"<<endl;
            return;
        }
        cout<<"Not Empty"<<endl;
    }

    void peek(){
        if(head == NULL){
            cout<<"Queue is UnderFlow"<<endl;
            return;
        }
        cout<<"Peek -> "<<head->data<<endl;
    }
};

int main(){

    queue q;
    q.push(12);
    q.push(172);
    q.push(121);
    q.push(112);
    q.pop();
    q.isEmpty();
    q.peek();

    return 0;
}