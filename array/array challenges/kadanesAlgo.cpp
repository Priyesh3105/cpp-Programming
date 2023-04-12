#include <iostream>
#include <climits>
using namespace std;

int kadanesAlgorithm(int arr[], int n) {
    int max_sum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    return max_sum;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array data: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = kadanesAlgorithm(arr, n);
    cout << "Maximum sum of subarray: " << max_sum << endl;

    return 0;
}