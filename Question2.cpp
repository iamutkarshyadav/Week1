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
 // algorithm of the code
//Initialize an array of positive integers, an integer variable 'n' to store the size of the array, and an integer variable 'key' to store the value of the key element to search for.

// Initialize an integer variable 'comparisons' to 0, which will be used to count the number of comparisons made during the search.

// Call the binarySearch function, passing in the array, the first index (l) and the last index (r), the 'key' element to search for, and the 'comparisons' variable.

// The binarySearch function implements a recursive algorithm for binary search:

// Check if the last index (r) is greater than or equal to the first index (l). If not, return -1 to indicate that the 'key' element was not found.

// Calculate the middle index of the array, and compare the value at that index to the 'key' element.

// If the value at the middle index is equal to the 'key' element, return the index.

// If the value at the middle index is greater than the 'key' element, call the binarySearch function recursively with the left half of the array, from the first index to the middle index - 1.

// If the value at the middle index is less than the 'key' element, call the binarySearch function recursively with the right half of the array, from the middle index + 1 to the last index.

// The recursion continues until the 'key' element is found or the left and right indices converge.

// After the binary search completes, output the results based on the value of the returned index.

// If the returned index is -1, output a message indicating that the 'key' element was not found in the array.

// If the returned index is not -1, output a message indicating the index at which the 'key' element was found.

// Also output the total number of comparisons made during the search.

// The binary search algorithm used in this code has a time complexity of O(log n), where n is the size of the array
