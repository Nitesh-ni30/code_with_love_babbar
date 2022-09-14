#include<bits/stdc++.h>
using namespace std;

int getMin(int num[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini= min(mini,num[i]); //Pre defined function of min
       // if(num[i]<min){
         //   min=num[i];
        // }
    }
    return mini;
}

int getMax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]); //pre defined fn of max
       // if(num[i]>max){
         //   max=num[i];
         // }
    }
    return maxi;
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Min Value :: "<<getMin(num,size)<<endl;
    cout<<"Max Value :: "<<getMax(num,size)<<endl;

    return 0;
}
