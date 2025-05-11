//find the maximum number of array...
#include<iostream>
using namespace std;

int main(){
	int size, sum = 0;
	int array[50];
	
	cout << "Enter size of array: ";
	cin >> size;
	
	cout << "Enter your Array Elements: ";
		for(int i=0; i<size; i++){
			cin >> array[i];
		}
		
		int max = array[0];
		for(int i=0; i<size; i++){
			if(array[i] > max){
				max = array[i];
			}
		}
		
	cout << "Maximum number of given elements/numbers: " << max <<endl;
	
	return 0;
}
