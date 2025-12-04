//left roate an array by d places
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    
int RotateArray(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // In case d is greater than n
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());    
    return 0;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 3; // Number of positions to rotate

    RotateArray(arr, d);

    cout << "Array after left rotation by " << d << " positions: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}