#include<iostream>
using namespace std;

int main(){
	int n;
	int sumodd=0;
	cout<<"enter the number:";
	cin>>n;
	for(int i=1; i<=n; i++){ //i+=2
		if(i%2 != 0){
		     cout<<i<<" ";//cout<<""<<i<<endl;
		sumodd += i;	
		}
	}
	cout<<"\n sumodd: "<<sumodd;
	
	return 0;
}
