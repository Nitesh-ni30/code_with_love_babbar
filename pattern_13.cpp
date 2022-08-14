/*

A B C D
B C D E
C D E F
D E F G

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
        
        while(col<=n)
        {
            char value='A'+row+col-2;
            cout<<value<<" ";
            value+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;

}
