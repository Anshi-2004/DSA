#include<iostream>
using namespace std;
int pivot(int arr[], int n){
   int s=0,e=n-1,mid=s+(e-s)/2;
   while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[s];
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
   
    cout << "The pivot element is: " << pivot(arr, n) << endl;
    return 0;
}