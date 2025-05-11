#include<iostream>
using namespace std;

int main(){
	int i, j, n=0;
	
	cout<<"Enter a Range which you want: ";
	cin>>n;
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
