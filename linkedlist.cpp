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

void insertathead( node* &head , int val){
    node* new_node = new node(val);
    new_node-> next = head;
    head = new_node;
}

void insertattail( node* &head , int val){
    node* new_node = new node(val);
   node *temp = head;
   while(temp -> next != NULL){
    temp = temp -> next;
   }
    temp -> next = new_node;
    new_node = NULL;
}

void insertatpos( node* &head , int val , int pos){

    if(pos == 0){
        insertathead(head ,val);
        return;
    }
    node* new_node = new node(val);
    node* temp = head;
    int curr_pos = 0;
    while(curr_pos != pos -1){
        temp = temp -> next;
        curr_pos++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
}

void update( node* &head , int val , int pos){
 
    node* temp = head;
    int curr_pos = 0;
    while(curr_pos != pos){
        temp = temp -> next;
        curr_pos++;
    }
    temp -> data = val;
}

void display(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

void deleteathead(node* &head){
    node* temp = head;
    head = head -> next;
    free(temp);
}

void deleteatend(node* &head){
    node* second_last = head;
    while(second_last -> next -> next != NULL){
        second_last = second_last -> next;
    }
    node* temp = second_last->next;
    second_last -> next = NULL;
    free(temp);
}

void deleteatpos(node* &head , int pos){
    node* temp = head;
    int curr_pos =0;
    while(curr_pos != pos-2){
        temp = temp -> next;
        curr_pos++;
    }
    node* d = temp ->next;
    cout<<d->data<<" delete data"<<endl;
    cout<<temp->data<<" delete data"<<endl;
    temp -> next = d -> next;
    free(d);

}

int main(){

    node* head = NULL;
    insertathead(head,5);
    display(head);
    insertathead(head,9);
    display(head);
    insertathead(head,8);
    display(head);
    insertattail(head , 23);
    display(head);
    insertattail(head , 243);
    display(head);
    insertatpos(head , 32, 2);
    display(head);
    update(head , 80, 2);
    display(head);
    deleteathead(head);
    display(head);
    deleteatend(head);
    display(head);
    deleteatpos(head,3);
    display(head);

    return 0;
}