#include <iostream>
#include <vector>  // Vector Header File

using namespace std;

int main() {
    vector<int> v;  // Integer type empty vector

    v.push_back(10); // adding value of 10 in Vector
    v.push_back(20); // adding value of 20 in Vector
    v.push_back(30); // adding value of 30 in Vector

    // Printing Vector
    cout << "Vector Elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


    // Using Iterator in Vector...
    vector<int> vac = {10, 20, 30, 40, 50};

    cout <<"\n" << "Vector elements using iterator: ";
    for (auto it = vac.begin(); it != vac.end(); ++it) {
        cout << *it << " ";  // The value is obtained by dereferencing the iterator.
    }

    vac.insert(vac.begin() + 2, 25); // Will insert 25 before 30
    vac.erase(vac.begin() + 4);  // Will delete 40

    cout << "\n" << "Modified Vector: ";
    for (int i : vac) {
        cout << i << " ";
    }

    return 0;
}
