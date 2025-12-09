//Longest subarray with given sum K(positives)
#include<iostream>
#include<unordered_map>
using namespace std;
int longestSubarrayWithSumK(int arr[], int n, int k) {
    unordered_map<int, int> prefixSumIndex;
    int prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        if (prefixSum == k) {
            maxLength = i + 1;
        }

        if (prefixSumIndex.find(prefixSum - k) != prefixSumIndex.end()) {
            maxLength = max(maxLength, i - prefixSumIndex[prefixSum - k]);
        }

        if (prefixSumIndex.find(prefixSum) == prefixSumIndex.end()) {
            prefixSumIndex[prefixSum] = i;
        }
    }

    return maxLength;
}
int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 12;
    int result = longestSubarrayWithSumK(arr, n, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}
