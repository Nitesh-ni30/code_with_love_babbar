#include<bits/stdc++.h>
using namespace std;
int printFibonacci(int n){
      int num1=0;
      int num2=1;
      int next;
      
      if(n==1){return num1;}
      if(n==2){return num2;}
      
      for(int i=3;i<=n;i++){
          next=num1+num2;
          num1=num2;
          num2=next;
       }
       int res=next;
       return res;
}
int main(){
    int n=0;
    cin>>n;
    int ans=printFibonacci(n);
    cout<<n<<"th term of fibonacci series is :: "<<ans<<endl;
    return 0;

}
