#include<iostream>
using namespace std;

int main(){
	int i, j, n=0;
	
	cout<<"Enter a Range which you want: ";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<"+";
	}
	cout<<"\n";
	
	for(i=1; i<n; i++){
		for(j=0; j<=n; j++){
			if(j==0 || j==n-1){
				cout<<"+";
			}else{
				cout<<" ";
			}
		}
			cout<<"\n";
	}
	for(i=0; i<n; i++){
		cout<<"+";
	}
	cout<<"\n";
	
	return 0;
}
