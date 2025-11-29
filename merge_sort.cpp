#include <iostream>
using namespace std;
int merge_sort(int arr[], int left, int right) {
    if (left >= right) {
        return 0; // Base case: array of one element
    }
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    
    // Merging the two halves
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* L = new int[n1];
    int* R = new int[n2];
    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
    delete[] L;
    delete[] R;
    return 0;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Unsorted array: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    merge_sort(arr, 0, arr_size - 1);
    
    cout << "Sorted array: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
    
}