#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2)
        return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);

    if (result != -1)
        cout << "Second Largest Element: " << result << endl;
    else
        cout << "No second largest element found" << endl;

    return 0;
}
