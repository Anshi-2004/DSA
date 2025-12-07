//Max Consecutive Ones
#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(const vector<int>& nums) {
    int maxCount = 0;
    int currentCount = 0;

    for (int num : nums) {
        if (num == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);
    cout << "The maximum number of consecutive 1s is: " << maxConsecutiveOnes << endl;

    return 0;
}