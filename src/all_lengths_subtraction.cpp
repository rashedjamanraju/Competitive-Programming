#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int allLengthsSubtraction(const vector<int>& arr) {
    int total = 0;
    int n = arr.size();

    // Iterate over all possible lengths of subarrays
    for (int length = 1; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            vector<int> subarray(arr.begin() + i, arr.begin() + i + length);
            sort(subarray.begin(), subarray.end());
            total += subarray[length - 1] - subarray[0]; // max - min
        }
    }

    return total;
}

int main() {
    vector<int> arr = {1, 3, 2, 4}; // Example input
    cout << "Total Subtraction: " << allLengthsSubtraction(arr) << endl;
    return 0;
}