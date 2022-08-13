/*

A B C D
E F G H
I J K L
M N O P

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char value='A';
    
    while(row<=n)
    {
        int col=1;
        
        
        while(col<=n)
        {
            cout<<value<<" ";
            value+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;

}
