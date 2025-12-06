//Find missing number in an array
#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    int n;
    cout << "Enter the value of n (size of array should be n-1): ";
    cin >> n;

    vector<int> arr(n - 1);

    cout << "Enter the elements of the array (from 1 to " << n << " with one missing): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
