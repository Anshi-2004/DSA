//move zeros to the end of the array
#include <iostream>
#include <vector>   
using namespace std;
void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Increment count
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }
}
int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZerosToEnd(arr);
    cout << "Array after moving zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}