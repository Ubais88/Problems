#include<iostream>
using namespace std;

int main(){

        int i,j,n=3,m=3;
        int arr2[n][m];
        int arr[n][m] = {
                        {3,4,5},
                        {4,5,7},
                        {6,5,5}
                        };

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;

        for(i=0;i<n-1;i++){
            for(j=i+1;j<m;j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
            cout<<endl;
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        




    return 0;
    
}
