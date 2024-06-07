#include <iostream>
using namespace std;

int main(){
    int a[5] = {1,-2,5,4,0};
    int b[5] = {-2,4,5,0,1};
    int res1 = 0;
    int res2 =0;
    for(int i=0;i<5;i++){
        res1 = res1 ^ a[i];
        res2 = res2 ^ b[i];
    }
    if(res1 == res2)
       cout<<"equal";
    else
       cout<<"unequal";

    return 0;
}