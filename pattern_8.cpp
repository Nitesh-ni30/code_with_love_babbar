/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    int value =row;
    
    while(row<=n)
    {
        int col=1;
        while(col<=row)
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
