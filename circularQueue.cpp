// ~ by using Linked List

#include<iostream>
using namespace std;


int main()
{

    return 0; 
}










/*
& by using ARRAY


 #include<iostream>
using namespace std;

class CircularQueue{
    int front;
    int rear;
    int size;
    int *arr;

    public:
    CircularQueue(int size){
        front = rear =-1;
        arr = new int[size];
        this -> size = size;
    }

    bool isEmpty(){
        return front ==-1 && rear ==-1;
    }
    bool isFull(){
        return front == (rear +1)% size;
    }

    void push(int data){
        if(isEmpty()){
            front = rear =0;
            arr[rear] = data;
            cout<<"index : "<<rear<<"data : "<<arr[rear]<<endl;
        }
        else if(isFull()){
            cout<<"queue is full "<<endl;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = data;
            cout<<"index : "<<rear<<"data : "<<arr[rear]<<endl;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"queu is empty"<<endl;
            return;
        }
        else if(front == rear){
            cout<<"index : "<<front<<"data : "<<arr[front]<<endl;
            front = rear = -1;
            return;
        }
        else{
            
            cout<<"index : "<<front<<"data : "<<arr[front]<<endl;
            front = (front + 1) %size;
            return;
        }
    }
};

*/


int main(){
    
    CircularQueue q(4);

    q.push(2);
    q.push(23);
    q.push(12);
    q.push(25);
    q.push(82);
    q.pop();
    q.push(592);
    q.push(82);



    return 0;
}