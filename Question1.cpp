#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 7;
    bool found = false; 
    int comparisons = 0;

    for (int i = 0; i < n; i++) {
        comparisons++; 
        if (arr[i] == key) {
            found = true; 
            break;
        }
    }

    if (found) {
        cout << key << " is present in the array." << endl;
    } else {
        cout << key << " is not present in the array." << endl;
    }
    cout << "Total number of comparisons: " << comparisons << endl;

    return 0;
}
       // algorithm of the code 

// Initialize an array of non-negative integers, an integer variable 'n' to store the size of the array, and an integer variable 'key' to store the value of the key element to search for.

// Initialize a boolean flag variable 'found' to false, which will be used to indicate whether the key element is present in the array or not.

// Initialize an integer variable 'comparisons' to 0, which will be used to count the number of comparisons made during the search.

// Use a for loop to iterate through the array from index 0 to n-1.

// network error
// For each iteration, increment the 'comparisons' variable by 1, to keep track of the number of comparisons made.

// Inside the loop, check whether the current element of the array matches the 'key' element.

// If there is a match, set the 'found' flag to true, and break out of the loop.

// If there is no match, continue to the next iteration of the loop.

// After the loop completes, output the results based on the value of the 'found' flag.

// If 'found' is true, output a message indicating that the 'key' element was found in the array.

// If 'found' is false, output a message indicating that the 'key' element was not found in the array.

// Also output the total number of comparisons made during the search.

// The linear search algorithm used in this code has a time complexity of O(n), where n is the size of the array.
