#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertathead(node* &head , int data){
    node* new_node = new node(data);
    new_node -> next = head;
    head = new_node;
    }

void reversePrint(node* head){
    if(head == NULL){
        return;
    }
    reversePrint(head -> next);
    cout<<head->data<<" ";
    cout<<endl;
}

void reverse(node* &head){
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;
    while(curr){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl; 
}

int main(){

    node* head = NULL;

    insertathead(head , 5);
    insertathead(head , 35);
    insertathead(head , 56);
    display(head);
    reversePrint(head);
    display(head);
    reverse(head);
    display(head);



    return 0;
}