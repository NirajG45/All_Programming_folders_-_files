#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    
    cout<<"Enter a Range which you want: ";
    cin>>n;
    
    // First half (Upper part of Butterfly)
    for(i=1; i<=n; i++){
        // Left side stars
        for(j=1; j<=i; j++){
            cout<<"+";
        }
        // Spaces in the middle
        for(j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        // Right side stars
        for(j=1; j<=i; j++){
            cout<<"+";
        }
        cout<<endl;
    }

    // Second half (Lower part of Butterfly)
    for(i=n; i>=1; i--){
        // Left side stars
        for(j=1; j<=i; j++){
            cout<<"+";
        }
        // Spaces in the middle
        for(j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        // Right side stars
        for(j=1; j<=i; j++){
            cout<<"+";
        }
        cout<<endl;
    }

    return 0;
}

