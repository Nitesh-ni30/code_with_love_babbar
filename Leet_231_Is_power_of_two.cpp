#include<bits/stdc++.h>
using namespace std; 
int main() {
        int n;
        cin>>n;
        for(int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n){
                cout<<1;
                return 1;
            }
        }
        cout<<0;
        return 0;
        
    }
