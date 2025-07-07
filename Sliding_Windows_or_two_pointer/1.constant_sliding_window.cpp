                            
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxConsecutiveSum(vector<int>& arr, int K) {
    // Get the size of the input array
    int n = arr.size();

    // Check if the size of
    // the array is less than K
    if (n < K) {
        // Handle invalid input 
        // by returning 0
        return 0; 
    }

    // Initialize left and right
    // pointers of the sliding window
    
    // Left pointer
    int l = 0;    
    // Right pointer,
    // initialized to K-1
    int r = K - 1;

    // Initialize variables to store
    // current sum and maximum sum
    
    // Current sum
    int sum = 0; 
    
    // Maximum sum
    int maxSum = 0;          

    // Calculate sum of first K
    // elements and set it as maxSum
    for (int i = 0; i <= r; ++i) {
         // Add each element within
         // the window to the sum
        sum += arr[i];      
    }
    
    // Set maxSum to the sum
    // of first K elements
    maxSum = sum;            

    // Slide the window and
    // calculate the maximum sum
    while (r < n - 1) {
        
        // Slide the window by subtracting
        // the leftmost element and adding
        // the next element to the right
        sum = sum - arr[l] + arr[r + 1];
        
        // Update maxSum with the
        // maximum of current maxSum
        // and sum within the window
        maxSum = max(maxSum, sum);       
        
        // Move the left pointer to
        // the right by one position
        l++;                             
        // Move the right pointer to
        // the right by one position
        r++;                             
    }
    
    // Return the maximum sum
    return maxSum;
}


int main() {
    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    int K = 4;
    cout << "Input Array: ";
    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl << "K: " << K << endl;
    cout << "Maximum sum: " << maxConsecutiveSum(arr, K) << endl;
    return 0;
}
                            
                        