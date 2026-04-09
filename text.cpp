#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 5, 8, 2, 0, 4, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);

    cout << "The sorted Array is: ";
    for(int k=0; k<n; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}
