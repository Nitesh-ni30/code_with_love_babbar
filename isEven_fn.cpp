#include<bits/stdc++.h>
using namespace std;

bool isEven(int n){
    if(n&1){
        return 0; //Odd
    }
    else return 1; //Even 
    
}

int main(){
    int num;
    cin>>num;
    if(isEven(num)) //since it returns boolean
    {
       cout<<"Number is Even"<<endl;
    
    }
    else {
        cout<<"Number is odd"<<endl;
    }
    return 0;
    
}
