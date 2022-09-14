#include<bits/stdc++.h>
using namespace std;

int power(int num1,int num2){
    int ans=1;
    for(int i=1; i<=num2; i++){
        ans=ans*num1;
    }
    return ans;
}

int main(){
    int a,b=0;
    cin>> a >> b;

   int answer=power(a,b);
    cout<<" result of their power is :: "<<answer<<endl;
 
    // Another operation using fn
    int c,d;
    cin>> c >> d;
    answer=power(c,d);
    cout<< " result of 2nd input:: "<<answer<<endl;
    return 0;
}
