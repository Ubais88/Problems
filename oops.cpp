#include<iostream>
using namespace std;

// class rectangle{  // class
//     public:
//     int l;
//     int b;

//     rectangle(){  // default constructor
//         l = 10;
//         b = 80;
//     } 

//     rectangle( int x , int y ){  // parameterized constructor
//         l = x;
//         b = y;
//     }

//     rectangle( rectangle &r){  // copy constructor
//         l =r.l;
//         b =r.b;
//     }

//     ~rectangle(){ //delete r1 r2 r3.
//       cout<<"destructor is called"<<endl; 
//     }

// };


class parent1{
    public:
     parent1(){
        cout<<"parent1 class called"<<endl;
     }   
};


class child1: public parent1{
    public:
    child1(){
        cout<<"child1 class called"<<endl;
    }
};

class child2: public parent1{
    public:
    child2(){
        cout<<"child2 class called"<<endl;
    }
};


// class grandchild: public child{
//     public:
//     grandchild(){
//         cout<<"grandchild class called"<<endl;
//     }
// };



int main(){

    // rectangle r1; // object creation
    // cout<<r1.l<<" "<<r1.b<<endl;

    // rectangle r2(43,54);
    // cout<<r2.l<<" "<<r2.b<<endl;

    // rectangle r3 = r2;
    // cout<<r3.l<<" "<<r3.b<<endl;
    
    // abc obj1;

    // obj1.set(356756);

    // cout<<obj1.get()<<endl;

    child1 c;
    child2 d;

    // grandchild c;
 
    return 0;
}