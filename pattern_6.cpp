/*

 1
 1 2
 1 2 3
 1 2 3 4
 
 */

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    int row=1;
    while (row<=n){

        int col=1;
        while(col<=row){
           cout<<col<<" ";
           col+=1;
        }
        cout<<endl;
        row+=1;

    }

    return 0;
}
