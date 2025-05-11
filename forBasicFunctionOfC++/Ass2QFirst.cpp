// this is a C++ program for finding sum and average of numbers using array...
#include<iostream>
using namespace std;

int main(){
    int n, i, sum=0;
    int num[n];

    cout<<"Enter size of Array: ";
    cin>>n;

    cout<<"Enter array elements: ";
        for(i=0; i<n; i++){
            cin>>num[i];
        }
        
    cout<<"Sum of array elements: ";
        for(i=0; i<n; i++){
            sum+=num[i];
        }

    int avg = sum/n;
    cout<<"Sum of elements of array: "<<sum<<"\n";
    cout<<"Sum of elements of array: "<<avg<<"\n";

    return 0;
}