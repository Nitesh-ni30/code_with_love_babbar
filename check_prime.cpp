
// Program of fibonacci series with for loop

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number :: ";
    cin>>n;

    bool isPrime=1;
    for(int i=2;i<n;i++){
        // rem =0  ,i.e. not prime
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if (isPrime ==0){
        cout<<"given Number is not prime No";
    }
    else{
        cout<<"given Number is prime No";
    }
  
  return 0;

}
