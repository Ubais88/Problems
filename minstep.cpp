#include "iostream"
using namespace std;

int solve( int arr[] , int n){
    int zero = 0;
    int mul = 1 ;
    int steps= 0; 
    for(int i = 0 ; i < n ; i++){
         if(arr[i] > 0){
            steps = steps + (arr[i] - 1);
            mul = mul *1;
         }
         else if(arr[i] < 0){
            steps = steps + ( -1 -(arr[i]));
            mul = mul *(-1);
         }
         else {
            steps +=1;
            zero +=1;
         }
    }
    if(mul == -1 && zero == 0)
       return steps+2;      
    else
      return steps;
    
}


int main (){
    int n = 1;
    int arr[n] = {-1};

    int x = solve(arr , n);
    cout<<"total steps = "<<x<<endl;

    return 0;
}