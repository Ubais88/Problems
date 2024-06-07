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

class Stack{
    node* top;

    public:
    Stack(){
        top = NULL;
    }

    //push into the stack
    void push(int data){
        node *temp = new node(data);
        if(!temp){
            cout<<"OverFlow"<<endl;
            return;
        }
        temp -> next = top;
        top = temp;
    }

    //pop from the stack
    void pop(){
        if(!top){
            cout<<"Underflow"<<endl;
            return;
        }
        node* temp = top;
        top = top -> next;
        cout<<"Deleted "<<temp->data<<endl;
        delete temp;
    }

    //peak in stack
    void peak(){
        if(!top){
            cout<<"UnderFlow NO PEAK ELEMENT FOUND"<<endl;
            return;
        };
        cout<<"Peak element "<<top->data<<endl;
        return;
    }

};

int main(){

    Stack s;
    s.push(4);
    s.push(34);
    s.push(43);
    s.push(43);
    s.push(43);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(433);
    s.push(433);
    s.push(433);
    s.push(433);
    s.push(433);
    s.pop();
    s.peak();
    s.push(433);
    s.push(413);
    s.push(13);

    return 0;
}