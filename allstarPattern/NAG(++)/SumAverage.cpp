//find the sum and average of numbers using array...
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
			sum += array[i];
		}
		
	cout << "Sum of your given elements/numbers: " << sum <<endl;
	cout << "Average of your given elements/numbers: " << sum/size <<endl;
	
}
