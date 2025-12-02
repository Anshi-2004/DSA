//Largest Element in an Array
#include<iostream>
using namespace std;
int findLargest(int arr[], int n) {
    int largest = arr[0]; // Assume first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if current element is greater
        }
    }
    return largest;
}   
int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargest(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}