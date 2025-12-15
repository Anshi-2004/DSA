//Search Insert Position
#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << endl;
    target = 2;
    cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << endl;
    target = 7;
    cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << endl;
    target = 0;
    cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << endl;
    return 0;
}