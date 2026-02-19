//wap in c++ in which 2 sorted arrays are merged in such a way so that the resultant araay is also sorted .
// do not use any type of sorting 
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input sizes
    cout << "Enter size of first sorted array: ";
    cin >> n1;
    int a[n1];
    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n1; ++i) {
        cin >> a[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> n2;
    int b[n2];
    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < n2; ++i) {
        cin >> b[i];
    }

    // Merging process
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while (i < n1) {
        merged[k++] = a[i++];
    }
    while (j < n2) {
        merged[k++] = b[j++];
    }

    // Output merged array
    cout << "\nMerged sorted array:\n";
    for (int i = 0; i < n1 + n2; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}