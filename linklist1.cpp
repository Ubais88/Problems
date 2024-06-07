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

void insertathead(node* &head , int val){
    node* new_node = new node(val);
    new_node -> next = head;
    head = new_node;
}

void deletealternate(node* &head){
    node* curr = head;
    while(curr != NULL && curr->next != NULL){
        node* temp = curr -> next;
        curr -> next = curr->next->next;
        free(temp);
        curr = curr -> next;
    }    
}

void removeduplicates(node* &head){
    node* curr = head;
    while(curr != NULL && curr->next != NULL){
        if( curr->data == curr->next->data){
            node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            free(temp);
        }
        else{
            curr = curr -> next;
        }
    }
}

void reverseprint(node* &head){
    if(head == NULL){
        return;
    }
    reverseprint(head->next);
    cout<<head->data;
    cout<<endl;
}

void reverse(node* &head){
    node* curr = head;
    node* prev = NULL;
    while(curr != NULL){
        node* n = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = n;
    }
    head = prev;
}

void reverserecur(node* &head){
    node* curr = head;
    node* prev = NULL;
    
        node* n = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = n;
    head = prev;
}

void display( node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head = NULL;
    insertathead(head , 15);
    insertathead(head , 15);
    insertathead(head , 15);
    insertathead(head , 15); 
    insertathead(head , 14);
    insertathead(head , 13);
    insertathead(head , 13);
    insertathead(head , 3);
    insertathead(head , 3);
    insertathead(head , 3);
    insertathead(head , 1);
    display(head);
    // deletealternate(head);
    // display(head);
    removeduplicates(head);
    display(head);
    reverseprint(head);
    display(head);
    reverse(head);
    display(head);



    
    return 0;
}
