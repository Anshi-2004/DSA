//check if the array is sorted or not
#include <iostream>
using namespace std;
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; // Found an element smaller than the previous one
        }
    }
    return true; // No such elements found, array is sorted
}
int main() {
    int arr[] = {1, 2, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}