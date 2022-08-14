/*

A
B B
C C C
D D D D

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n)
    {
        int col=1;
        
        while(col<=row)
        {
            char value='A'+row-1;
            cout<<value<<" ";
            value+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;

}
