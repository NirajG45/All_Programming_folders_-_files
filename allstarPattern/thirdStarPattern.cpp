#include<iostream>
using namespace std;

int main(){
	int i, j, n=0;
	
	cout<<"Enter a Range which you want: ";
	cin>>n;
	
	for(i=n; i>=1; i--){
		for(j=1; j<=i; j++){
			cout<<" ";
		}
		for(j=i; j<=n; j++){
			cout<<"+";
		}
		cout<<endl;
	}
	
	return 0;
}
