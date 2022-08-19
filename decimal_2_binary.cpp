#include<bits/stdc++.h>
using namespace std;

//don't worry Program give actual answer in other compiler
int main(){
    int n;
    cin>>n;

    int i=0; int ans=0;
    while(n!=0){
        int bit=n & 1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i=i+1;;
    }
    cout<<ans;
    return 0;
    
}
