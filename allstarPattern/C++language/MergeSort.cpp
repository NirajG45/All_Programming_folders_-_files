#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (int i=0; i<n1; i++) L[i]=a[l+i];
    for (int j=0; j<n2; j++) R[j]=a[m+1+j];
    int i=0, j=0, k=l;
    while (i<n1 && j<n2) a[k++] = (L[i]<=R[j]) ? L[i++] : R[j++];
    while (i<n1) a[k++] = L[i++];
    while (j<n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l<r) {
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    cout << "Merge Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
