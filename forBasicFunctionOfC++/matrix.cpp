#include<iostream>
using namespace std;

int main(){
    int nag[3][3], sum=0;
    cout<<"Enter the matrix[3][3]: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>nag[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<=3; j++){
            if(i==0 && j==2 || i==1 && j==1 || i==2 && j==0){
                sum = sum + nag[i][j];
            }else{
                continue;
            }
    }
}
    cout<<"The sum of matrix like [0][2]+[1][1]+[2][0]: "<<sum;

    return 0;
}