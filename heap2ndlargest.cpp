#include<bits/stdc++.h>
using namespace std;

int find(vector<int>arr , int size , int k){

    priority_queue<int , vector<int>,greater<int>>q;
    for(int i =0 ; i < size ; i++){
        q.push(-arr[i]);

        if(q.size() > k)
            q.pop();
    }



    return -q.top();
}

int main(){
    
    vector<int>arr{1,22,13,45,5};
    int size = arr.size();
    int element = 3;

    int result = find(arr,  size , element);

    cout<<"Result : "<<result<<endl;

    return 0;
}