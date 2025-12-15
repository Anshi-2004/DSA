//Find the first or last occurrence of a given number in a sorted array
#include <iostream>
#include <vector>
using namespace std;
int findFirstOccurrence(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            right = mid - 1; // Continue searching in the left half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}
int findLastOccurrence(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            left = mid + 1; // Continue searching in the right half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}
int main() {
    vector<int> nums = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;
    int firstIndex = findFirstOccurrence(nums, target);
    int lastIndex = findLastOccurrence(nums, target);
    cout << "First occurrence of " << target << " is at index: " << firstIndex << endl;
    cout << "Last occurrence of " << target << " is at index: " << lastIndex << endl;
    return 0;
}