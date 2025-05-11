#include<iostream>
using namespace std;

int main(){
	int i, j, n=0;
	
	cout<<"Enter a Range which you want: ";
	cin>>n;
	
	 //	this code try to printing the empty pyramid
	for(i=n; i>=1; i--){
		for(j=1; j<=i; j++){
			cout<<" ";
		}
			for(j=i; j<=n; j++){
				if(j==0 || j==i){
					cout<<"+";
				}else{
					cout<<" ";
				}
				
			}	
				for(j=0; j<n; j++){
					if(j==(n-i)-1){
					cout<<"+";
				}else{
					cout<<" ";
				}
				}
			cout<<endl;
	}
	for(i=0; i<=n*2; i++){
		cout<<"+";
	}
	
	return 0;
}
