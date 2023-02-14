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
