#include<iostream>
using namespace std;

int main(){
	int i, five[5], sum=0, avg;
	
	cout<<"Enter Five Numbers: ";
	for(i=0; i<5; i++){
		cin>>five[i];
	}
	
	for(i=0; i<5; i++){
		sum+=five[i];
	}
	
	cout<<"Sum of Five Numbers: "<< sum << endl;
	
	avg=sum/5;
	
	cout<<"Average of Five Numbers: "<< avg << endl;
	
	return 0;
}
