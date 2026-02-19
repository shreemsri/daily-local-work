#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> vectorA = {5, 1, 3, 2, 4};
    vector<int> vectorB = {8, 4, 6, 7, 5};
    vector<int> unionVector;
    vector<int> diffVector;

    sort(vectorA.begin(), vectorA.end());
    sort(vectorB.begin(), vectorB.end());

    set_union(vectorA.begin(), vectorA.end(),
              vectorB.begin(), vectorB.end(),
              back_inserter(unionVector));

    cout << "Vector A: { ";
    for (int x : vectorA) {
        cout << x << " ";
    }
    cout << "}" << endl;

    cout << "Vector B: { ";
    for (int x : vectorB) {
        cout << x << " ";
    }
    cout << "}" << endl;

    cout << "Union: { ";
    for (int x : unionVector) {
        cout << x << " ";
    }
    cout << "}" << endl;

    return 0;
}