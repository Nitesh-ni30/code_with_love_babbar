 #include<bits/stdc++.h>
 using namespace std;
 int main() {
        int n;
        cin>>n;
        int prod=1,sum=0;
        
        while(n!=0){
            
            int digit;
            
            digit=n%10;
            
            prod=prod*digit;
            
            sum=sum+digit;
            
            n=n/10;
            
        }
        int result=prod-sum;
        cout<<result;
        return 0;
    }
