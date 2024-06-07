#include <iostream>
using namespace std;

int find(int arr[] , int n){
    int res = 0;
    for(int i=0; i<n;i++){
        res = res^ arr[i];
    }
    return res;
}

int main(){
    int n = 7;
    int arr[n] = {2, 3, 5, 4, 5, 3, 4};

    int x = find(arr , n);
    cout<<x<<" ";

    return 0;
}