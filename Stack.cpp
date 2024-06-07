#include<iostream>
using namespace std;

class Stack{

    int size;
    int *arr;
    int top;

    public:
    Stack(int s){
        arr  = new int[size];
        top = -1;
        size = s;
    };

    //push Element in the stack
    void push(int data){
        if(top == size - 1){
            cout<<"OverFlow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
        cout<<"Element is Pushed :"<<arr[top]<<endl;
    }

    //pop Element from the stack
    void pop(){
        if(top == -1){
            cout<<"underflow"<<endl;
            return;
        }
        cout<<"Element is poped :"<<arr[top]<<endl;
        top--;
        return;
    }

    //top Element of the stack
    void peak(){
        if(top == -1){
            cout<<"underflow"<<endl;
            return;
        }
        cout<<"Top of stack: "<<arr[top]<<endl;
        return;
    };

    //check if the stack is empty or not

    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }

};

int main(){

    Stack s(4);
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