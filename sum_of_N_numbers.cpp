// Lecture 2
// sum of n Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number :: ";
    cin>>n;

    int i=1,sum=0;

    while (i<=n){
        sum=sum+i;
        i+=1;
    }
    cout<<"sum of numbers are :: "<<sum<<endl;
}
