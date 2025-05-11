#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert (0-based index): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> val;

    // Shift elements to right
    for(int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
