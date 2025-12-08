//Find the number that appears once, and other numbers twice.
#include <iostream>
using namespace std;
int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR operation
    }
    return result; // The unique number
}
int main() {
    int arr[] = {4, 1, 2, 1, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueNumber = findUnique(arr, n);
    cout << "The number that appears once is: " << uniqueNumber << endl;
    return 0;
}