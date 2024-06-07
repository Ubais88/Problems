#include "iostream"
#include "vector"
using namespace std;

int main(){
    string str = "aCBAafv654bdf";
    int arr[26];
    cout<<str<<endl;
    int start =0;
    int end = str.size()-1;
  while(start < end){
      swap(str[start],str[end]);
      start++;
      end--;
  }
  cout<<str<<endl;

    // for(int i=0;i<26;i++){
    //     arr[i] = 0;
    // }
    
    // for(int i = 0;i<str.size();i++){
    //     int count = str[i] - 'a';
    //     arr[count] += 1;
    // }

    // string str1;
    // for(int i = 0;i<26;i++){
    //         for(int j=0;j<arr[i];j++){
    //             char a = i + 'a';
    //              str1 += a;
    //         }
    // }
    // cout<<str1<<endl;

    return 0;
}