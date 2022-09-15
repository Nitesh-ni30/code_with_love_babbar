#include<bits/stdc++.h>
using namespace std;

int find_unique(int arr[], int size){
    int ans=0;
      for(int i=0; i<size ;i++){
        ans=ans^arr[i];
      }
      return ans;
}

int main(){
   
    int array[11]={4,8,4,9,7,9,3,3,7,8,13};


    cout<<find_unique(array,11)<<endl;

    return 0;
}
