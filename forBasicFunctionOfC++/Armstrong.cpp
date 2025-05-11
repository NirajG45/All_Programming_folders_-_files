#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,temp;
    cout<<"Enter a number: ";
    cin>>n;

    temp=n;

    while(n>0){
        r=n%10;
        sum= r*r*r+sum;
        n=n/10;
    }
    if(temp==sum){
        cout<<"The number is a Armstrong.";
    }
    else{
        cout<<"The number is not a Armstrong.";
    }
    return 0;
}