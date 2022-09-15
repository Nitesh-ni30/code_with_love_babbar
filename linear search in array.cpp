#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}
int main(){
    int arr[10]={3,6,8,45,-7,4,2,7,56,35};

    cout<<"enter the element to search for :: ";
    int key;
    cin>>key;

    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else {
        cout<<"key is not present"<<endl;
    }
    return 0;
}
