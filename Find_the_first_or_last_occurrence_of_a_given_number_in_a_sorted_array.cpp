//Find the first or last occurrence of a given number in a sorted array
#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target){
    int left = 0, right = nums.size() - 1;
    int first = -1, last = -1;
    // Find first occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            first = mid;
            right = mid - 1; // Continue searching in the left half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    left = 0; right = nums.size() - 1;
    // Find last occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            last = mid;
            left = mid + 1; // Continue searching in the right half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return {first, last};
}
int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    cout << "First and last occurrence of " << target << " is: [" << result[0] << ", " << result[1] << "]" << endl;
    target = 6;
    result = searchRange(nums, target);
    cout << "First and last occurrence of " << target << " is: [" << result[0] << ", " << result[1] << "]" << endl;
    target = 7;
    result = searchRange(nums, target);
    cout << "First and last occurrence of " << target << " is: [" << result[0] << ", " << result[1] << "]" << endl;
    target = 10;
    result = searchRange(nums, target);
    cout << "First and last occurrence of " << target << " is: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}