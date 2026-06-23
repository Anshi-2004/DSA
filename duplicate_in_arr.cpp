#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    int s=0;
    int result;
    s=(n*(n-1))/2;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    result=sum-s;
    return result;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The duplicate element is: " << duplicate(arr, n) << endl;
    return 0;
}