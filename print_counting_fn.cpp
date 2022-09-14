#include<bits/stdc++.h>
using namespace std;

//function signature
int printCounting(int num){
    
    //function body
    for(int i=1; i<=num ;i++){
       cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
  // Function call
    printCounting(n);
    return 0;
    }
