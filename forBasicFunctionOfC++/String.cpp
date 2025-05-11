// this is a simple and easy string program in c++.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char Name[20];
    char SecName[20];
    char final_Name[50];

    cout << "Enter your name: " << endl;
    cin >> Name;

    cout << "Enter your second name: " << endl;
    cin >> SecName;

    strcpy(final_Name, Name);
    strcat(final_Name, " ");
    strcat(final_Name, SecName);


    cout << "Your name is: " << Name << endl;
    cout << "Your second name is: " << SecName << endl;

    // this is a final Your Name.
    cout << "Your name is: " << final_Name << endl;

    return 0;
}