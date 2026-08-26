/*
 Goal: Master the extraction and evaluation of contiguous contiguous sequence sums within linear data structures. 
   The objective is to compute the global maximum subarray sum by iteratively building cumulative totals across nested execution blocks.

 Concept:
 * **Nested Iteration Strategy:** Fixing a dynamic starting index `st` and sweeping an ending index `end` to traverse all valid contiguous slices.
 * **Running Cumulative Tracking:** Eliminating redundant sum recalculations by continuously updating a local accumulator `currsum` across the inner loop space.
 * **Global Max Updating:** Utilizing `std::max` in real time to compare running subarray totals against `INT_MIN` for persistent state tracking.

 Question: What is the maximum sum among all contiguous subarrays of the array {1, 2, 3, 4, 5}? (Answer: 15, which is the sum of the entire array).
*/

#include <iostream>
#include <climits>   // Needed for INT_MIN
#include <algorithm> // Needed for max()
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    cout << "Maximum subarray sum is: ";

    int MAXsum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currsum = 0;
        for (int end = st; end < n; end++) {
            currsum += arr[end];
            MAXsum = max(currsum, MAXsum);
        }
    }

    cout << MAXsum << endl;
    return 0;
}