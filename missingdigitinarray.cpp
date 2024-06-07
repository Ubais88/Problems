#include <iostream>
using namespace std;

 int missing(int arr[] , int n){
        int sum = 0 ;
        for(int i=0 ; i<n-1 ; i++)
        {
            sum += arr[i];
        }
        int m = n*(n + 1 )/2;
        return (m - sum) ;
 }

int main() {
    int n = 7;
    int arr[n-1] = {2,3,4,1,6,7}; 
    int x = missing(arr , n);
    cout<<x<<" ";

   return 0;       
}