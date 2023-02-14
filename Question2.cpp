#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key, int &comparisons) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        comparisons++; 

        if (arr[mid] == key) {
            return mid;
        }

        comparisons++;

        if (arr[mid] > key) {
            return binarySearch(arr, l, mid - 1, key, comparisons);
        }

        return binarySearch(arr, mid + 1, r, key, comparisons);
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 9, 11}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7; 
    int comparisons = 0; 

    int result = binarySearch(arr, 0, n - 1, key, comparisons);

    if (result == -1) {
        cout << key << " is not present in the array." << endl;
    } else {
        cout << key << " is present at index " << result << " in the array." << endl;
    }
    cout << "Total number of comparisons: " << comparisons << endl;

    return 0;
}
