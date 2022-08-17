#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
     int count=0;
        while(n!=0){
            
            //checking last bit
            //here consider n as binary in if
            if(n&1){
                count++;
                
            }
            n=n>>1; // shifting right side and add left side zero
        }
        cout<<count;
        return 0;
}
