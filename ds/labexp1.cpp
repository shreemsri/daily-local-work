#include <iostream>
using namespace std;

#define MAX 100

void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int insert(int arr[], int n, int pos, int val) {
    if (n >= MAX) {
        cout << "Array is full, cannot insert!" << endl;
        return n;
    }
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return n;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    cout << "Inserted " << val << " at position " << pos << endl;
    return n + 1;
}

int remove(int arr[], int n, int pos) {
    if (n <= 0) {
        cout << "Array is empty, nothing to delete!" << endl;
        return n;
    }
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return n;
    }
    cout << "Deleted " << arr[pos] << " from position " << pos << endl;
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[MAX], n, choice, pos, val, key, index;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Display\n2. Insert\n3. Delete\n4. Search\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            display(arr, n);
            break;
        case 2:
            cout << "Enter position (0 to " << n << "): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            n = insert(arr, n, pos, val);
            break;
        case 3:
            cout << "Enter position (0 to " << n - 1 << "): ";
            cin >> pos;
            n = remove(arr, n, pos);
            break;
        case 4:
            cout << "Enter value to search: ";
            cin >> key;
            index = search(arr, n, key);
            if (index != -1)
                cout << "Element found at position " << index << endl;
            else
                cout << "Element not found!" << endl;
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
}