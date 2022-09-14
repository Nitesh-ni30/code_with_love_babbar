#include<bits/stdc++.h>
using namespace std;

void dummy(int n){
    n++;
    cout<<"the dummy number output ::"<<n<<endl; //in pass by value,copy the main value and action on it ,while main value remain constant
}

int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"value of number is :: "<<n<<endl; //value is not increment in main fn even n is increment in dummy fn
    return 0;
}
