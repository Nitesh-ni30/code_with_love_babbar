#include<bits/stdc++.h>
using namespace std;
int arithProg(int n){
       int result=3*n+7;
       return result;
}
int main(){
    int n=0;
    cin>>n;
    int ans=arithProg(n);
    cout<<"nth term of A.P. is :: "<<ans<<endl;
    return 0;

}
