#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[] ,int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int evenArr[8]={5,7,4,-9,446,24,86,-45};
    int oddArr[5]={45,56,986,-45,-72};

    swapAlternate(evenArr ,8);
    printArray(evenArr ,8);
    

    cout<<endl;

    swapAlternate(oddArr ,5);
    printArray(oddArr ,5);

    return 0;
}
