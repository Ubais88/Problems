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

    void push(int data){
        node* new_node = new node(data);
        if(!new_node){
            cout<<"OverFlow"<<endl;
            return;
        }
        cout<<"PUSHED -> "<<new_node->data<<endl;
        new_node -> next = top;
        top = new_node;
    }

    void pop(){
        if(!top){
            cout<<"UnderFlow"<<endl;
            return;
        }
        node* temp = top;
        top = top -> next;
        cout<<"POPPED -> "<<temp->data<<endl;
        delete temp;
    }

    void peek(){
        if(!top){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Peek ->"<<top -> data<<endl;
    }
    void isEmpty(){
        if(!top){
            cout<<"Empty"<<endl;
            return;
        }
        cout<<"NOT EMPTY"<<endl;
    }
};

int main(){
    
    Stack st;

    st.push(12);
    st.push(102);
    st.push(124);
    st.push(112);
    st.push(142);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.push(142);
    st.peek();
    st.isEmpty();

    return 0;
}