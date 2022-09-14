#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n;i++){
        if(n%i==0){
            return 0; //not prime
        }
    }
    return 1; //Prime
}

int main(){
    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<"Number is Prime"<<endl;
    }
    else 
       cout<<"Number is not Prime"<<endl;

}
