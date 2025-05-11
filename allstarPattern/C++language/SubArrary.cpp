// This is a C++ Program to define the SubArray Start and End...
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int Array[5] = {1, 2, 3, 4, 5};

    for(int str=0; str<n; str++){
        for(int end=0; end<n; end++){
            for(int i=str; i<=end; i++){
                cout<<Array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}