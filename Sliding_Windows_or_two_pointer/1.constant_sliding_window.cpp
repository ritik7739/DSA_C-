#include <bits/stdc++.h>
using namespace std;

int MaxSubArraySum(int arr[], int n, int k) {
    if (n < k) return -1;

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxsum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];
        maxsum = max(maxsum, sum);
    }

    return maxsum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << MaxSubArraySum(arr, n, k) << endl; // Output: 24
    return 0;
}
