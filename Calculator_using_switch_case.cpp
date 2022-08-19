#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the fisrt number :: ";
    cin>>a;
    cout<<"Enter the second number :: ";
    cin>>b;
    
    char op;
    cout<<" Enter the operator you have to perform ";
    cin>>op;

    switch (op){
        case '+': cout<<(a+b)<<endl; 
                   break;
        case '-': cout<<(a-b)<<endl; 
                   break;   
        case '*': cout<<(a*b)<<endl; 
                   break;  
        case '/': cout<<(a/b)<<endl; 
                   break;    
        case '%': cout<<(a%b)<<endl; 
                   break; 
        default : cout<<"Please eneter the valid oparator ";
    }
    return 0;

}
