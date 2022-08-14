/*

         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1



*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   
   // Print 1st triangle
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        // Print 2nd triangle
        int col=1;
        while(col<=row){
            cout<<col;
            col+=1;
        }
        // Print 3rd triangle
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}
