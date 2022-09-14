#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size){
    cout<<"Printing the array"<<endl;
    //Print the array
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<"printing DONE"<<endl;

}

int main(){
    //Declaration the aaray
    int num[15];

    //accessing the array , give random value
    cout<<endl<<"value at 14th index "<<num[14]<<endl;

    //initializing the array
    int second[3]={5,7,11};

    //accessing an element
    cout<<endl<<"value at second index "<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;

    printArray(third,15);
    int thirdsize= sizeof (third)/sizeof(int);
    cout<<endl<<"size of third is "<<thirdsize<<endl<<endl;
    
    //initialization all location wiyh zero(0)
    int fourth[10]={0};
    n=10;
    printArray(fourth,10);

    //initialization all location with one(1) {not possible with below line}
    int fifth[10]={1};
    n=10;
    printArray(fifth,10);

    int fifthsize=sizeof(fifth)/sizeof(int);
    cout<<endl<<"size of fifth is "<<fifthsize<<endl;

    //array of char

    char ch[5]={'a','b','c','D','R'};
    cout<<ch[3]<<endl;

    //print the array
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl<<"Printing done "<<endl;

    //We make some more array 

    double arr1[20];
    float arr2[5];
    bool arr3[9];

    cout<<endl<<"Everything is fine"<<endl<<endl;

    return 0;
} 
