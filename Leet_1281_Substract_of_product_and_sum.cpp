 #include<bits/stdc++.h>
 using namespace std;
 int main() {
        int n;
        cout<<"Enter a number :: ";
        cin>>n;
        int prod=1,sum=0;
        
        while(n!=0){
            
            int digit;
            
            digit=n%10;
            
            prod=prod*digit;
            
            sum=sum+digit;
            
            n=n/10;
            
        }
        cout<<"product of digits : "<<prod<<endl;
        cout<<"sum of digits : "<<sum<<endl;
        int result=prod-sum;
        cout<<"diff : "<<result<<endl;
        return 0;
    }
