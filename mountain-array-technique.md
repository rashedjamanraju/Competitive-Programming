# Mountain Array Technique

The mountain array technique is a useful concept in competitive programming, particularly for problems that involve searching in a unimodal array. An array is considered a mountain array if:

1. There exists an index `i` (0 < i < n - 1) such that:
   - `A[i - 1] < A[i] > A[i + 1]`
2. The elements before index `i` are strictly increasing.
3. The elements after index `i` are strictly decreasing.

### Characteristics:
- The peak element is the maximum element of the array.
- The time complexity for finding the peak using a modified binary search is O(log n).

### Application:
- It is often used in problems where you need to find a peak element or perform binary search in a unimodal array.

### Example:
```python
def find_peak(arr):
    left, right = 0, len(arr) - 1
    while left < right:
        mid = (left + right) // 2
        if arr[mid] < arr[mid + 1]:
            left = mid + 1  # Move to right side
        else:
            right = mid  # Move to left side
    return left  # Peak index
```

### Conclusion:
Understanding the mountain array technique can greatly enhance your problem-solving skills in competitive programming, enabling you to tackle various challenges efficiently.