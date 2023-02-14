#include <iostream>
using namespace std;

string search(int arr[], int n, int key) {
    int k = 0;
    while (k < n) {
        if (arr[k] == key) {
            return "Present";
        }
        if (arr[k] > key) {
            break;
        }
        k = 2*k + 1;
    }
    for (int i = k/2; i < min(k, n); i++) {
        if (arr[i] == key) {
            return "Present";
        }
    }
    return "Not Present";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, key;
        cin >> n >> key;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        string result = search(arr, n, key);
        cout << result << endl;
    }
    return 0;
}


//Algorithm:

//Start
//Read the number of test cases T
//Repeat T times, do the following:
//a. Read the size of the array n
//b. Read the key element to be searched
//c. Declare an integer variable k and initialize it with 0
//d. Perform a loop that runs until k < n:
//i. If the arr[k] is equal to the key, output "Present" and return
//ii. If arr[k] > key, break from the loop
//iii. Otherwise, double the value of k
//e. Perform a linear search from index k/2 to min(k, n-1) to find the key element
//f. If the key is found, output "Present", otherwise output "Not Present"
//End
