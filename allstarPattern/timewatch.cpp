#include<iostream>
using namespace std;

int main(){
	int i, j, n=0;
	
	cout<<"Enter a Range which you want: ";
	cin>>n;
	
// Reversed pyramid code
	for(i=0; i<=n; i++){
		for(j=0; j<=i; j++){
			cout<<" ";
		}
			for(j=0; j<=n-i; j++){
				cout<<"+";
			}
				for(j=n-i-1; j>=0; j--){
				cout<<"+";
				}
		cout<<endl;
	}
	
//	Right Pyramid code
	for(i=n; i>=0; i--){
		for(j=0; j<=i; j++){
			cout<<" ";
		}
		for(j=i; j<=n; j++){
			cout<<"+";
		}
		
		for(j=0; j<=n-i; j++){
			cout<<"+";
		}
		cout<<endl;
	}
	
	return 0;
}
