/*

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11

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
           
            cout<<row<<" ";
            row+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;

}
