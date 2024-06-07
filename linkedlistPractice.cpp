#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node( int val){
        data = val;
        next = NULL;
    }

};

void insertathead(node* &head , int data){
    node * new_node = new node(data);
    new_node -> next = head;
    head = new_node;
    new_node = NULL;
    return;
    }

void insertatpos(node* &head , int data , int index){
    if(index == 1){
        insertathead(head , data);
        return;
    }
    node * new_node = new node(data);
    node* temp  = head;
    int count = 0;
    while(count != index -1){
        temp = temp -> next;
        count++;
    }
    new_node -> next = temp ->next;
    temp -> next = new_node;
}

void insertatend(node* &head , int data){
    node* new_node = new node(data);
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = new_node;
    new_node -> next = NULL;
}

void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteathead(node* &head){
    node* temp = head;
    head = head->next;
    free(temp);
}

void deleteatend(node* &head){
    node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp ->next;
    }
    node* temp2 = temp -> next;
    free(temp2);
    temp -> next = NULL;
}

void deleteatpos(node* head , int pos){
    node* temp = head;
    int count = 0;
    while(count != pos-2){
        temp = temp -> next;
    }
    node* del = temp -> next;
    temp -> next = del -> next;
    free(del);
}

void update(node* head , int data , int pos){
    cout<<"update"<<endl;
    node* temp = head;
    int count = 0;
    while(count != pos-1){
        temp = temp -> next;
        count++;
    }
    temp -> data = data;
}



int main() {

    node* head  = NULL;

    insertathead(head , 12);
    insertathead(head , 16);
    insertatend(head , 74);
    insertatend(head , 70);    
    insertatend(head , 170);    
    insertatend(head , 13);    
    insertatpos(head , 1000 , 2);
    display(head);
    deleteathead(head);
    display(head);
    deleteatend(head);
    display(head);
    deleteatpos(head , 2);
    display(head);
    update(head , 89, 3);
    display(head);


    return 0;
}