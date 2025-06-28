# 🚀 STL Vector Ultimate Guide for Competitive Programming

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CP](https://img.shields.io/badge/Competitive-Programming-gold?style=for-the-badge)
![STL](https://img.shields.io/badge/STL-Vector-blue?style=for-the-badge)

**🔥 Master the Most Important STL Container 🔥**

---

**👨‍💻 Author:** `rashedjamanraju` | **📅 Created:** `2025-06-28 13:13:18 UTC`
**🎯 Journey:** 2nd Journey (Restarted from June 1, 2025) | **⭐ Version:** 1.0

---

</div>

## 📋 Table of Contents

<details>
<summary>🔍 Click to expand navigation</summary>

1. [🌟 Introduction](#-introduction)
2. [🎯 Vector Declaration](#-vector-declaration)
3. [🔄 Iteration Methods](#-iteration-methods)
4. [📏 Size and Resize Operations](#-size-and-resize-operations)
5. [➕ Adding and Removing Elements](#-adding-and-removing-elements)
6. [🔀 Sorting Operations](#-sorting-operations)
7. [🔍 Search Operations](#-search-operations)
8. [🗑️ Element Removal](#️-element-removal)
9. [📊 Count and Statistical Operations](#-count-and-statistical-operations)
10. [🎯 Binary Search Operations](#-binary-search-operations)
11. [⚡ Advanced Operations](#-advanced-operations)
12. [🔧 Common Macros and Shortcuts](#-common-macros-and-shortcuts)
13. [💡 Best Practices](#-best-practices)
14. [🏆 Competitive Programming Patterns](#-competitive-programming-patterns)

</details>

---

## 🌟 Introduction

> **Vector** is a dynamic array that can resize itself automatically. It's the **backbone** of competitive programming! 💪

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    // 🔥 The magic begins here!
	Write Your Code On Vector
    return 0;
}

```

<div align="center">

**✨ Why Vector is Amazing ✨**

| Feature           | Benefit                    |
| ----------------- | -------------------------- |
| 🔄 Dynamic Size   | No fixed size limitations  |
| ⚡ Fast Access    | O(1) random access         |
| 🛠️ Rich Methods | Tons of built-in functions |
| 🎯 STL Compatible | Works with all algorithms  |

</div>

---

## 🎯 Vector Declaration

### 1️⃣ Empty Vector

```cpp
vector<int> a;  // 📦 Empty container
cout << "📊 Empty vector size: " << a.size() << endl;
```

**🖥️ Output:**

```
📊 Empty vector size: 0
```

### 2️⃣ Vector with Size (Default Values)

```cpp
vector<int> b(10);  // 🔢 10 zeros by default
cout << "🎯 Vector b: ";
for (int x : b) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🎯 Vector b: 0 0 0 0 0 0 0 0 0 0 
```

### 3️⃣ Vector with Size and Custom Value

```cpp
vector<int> c(10, 10);  // 🔥 10 elements, all set to 10
cout << "✨ Vector c: ";
for (int x : c) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
✨ Vector c: 10 10 10 10 10 10 10 10 10 10 
```

### 4️⃣ Vector with Initialization List

```cpp
vector<int> d = {1, 2, 3, 4, 5};  // 🎨 Custom initialization
cout << "🌈 Vector d: ";
for (int x : d) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🌈 Vector d: 1 2 3 4 5 
```

---

## 🔄 Iteration Methods

<div align="center">

**🚀 Four Powerful Ways to Iterate 🚀**

</div>

### 🔢 Traditional For Loop

```cpp
vector<int> c = {10, 10, 10, 10, 10};
cout << "🔄 Traditional for loop: ";
for (int i = 0; i < c.size(); ++i) {
    cout << c[i] << " ";
}
cout << endl;
```

**🖥️ Output:**

```
🔄 Traditional for loop: 10 10 10 10 10 
```

### 🌟 Range-based For Loop (Modern C++)

```cpp
cout << "✨ Range-based for loop: ";
for (int each : c) {
    cout << each << " ";
}
cout << endl;
```

**🖥️ Output:**

```
✨ Range-based for loop: 10 10 10 10 10 
```

### 👉 Iterator (Traditional)

```cpp
cout << "🔗 Traditional iterator: ";
for (vector<int>::iterator it = c.begin(); it != c.end(); it++) {
    cout << *it << " ";
}
cout << endl;
```

**🖥️ Output:**

```
🔗 Traditional iterator: 10 10 10 10 10 
```

### 🎯 Iterator with Auto (Recommended)

```cpp
cout << "🚀 Auto iterator: ";
for (auto it = c.begin(); it != c.end(); it++) {
    cout << *it << " ";
}
cout << endl;
```

**🖥️ Output:**

```
🚀 Auto iterator: 10 10 10 10 10 
```

---

## 📏 Size and Resize Operations

### 📈 Resize with Default Values

```cpp
vector<int> c = {10, 10, 10, 10, 10};
c.resize(12);  // 🔧 Expand with zeros
cout << "📊 After resize(12): ";
for (int x : c) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📊 After resize(12): 10 10 10 10 10 0 0 0 0 0 0 0 
```

### 🎨 Resize with Custom Values

```cpp
c.resize(15, 10);  // 🌟 Expand with custom value
cout << "✨ After resize(15, 10): ";
for (int x : c) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
✨ After resize(15, 10): 10 10 10 10 10 0 0 0 0 0 0 0 10 10 10 
```

### 📊 Check Size and Status

```cpp
cout << "📏 Size: " << c.size() << endl;
cout << "❓ Empty: " << (c.empty() ? "Yes" : "No") << endl;
cout << "🎯 Capacity: " << c.capacity() << endl;
```

**🖥️ Output:**

```
📏 Size: 15
❓ Empty: No
🎯 Capacity: 20
```

---

## ➕ Adding and Removing Elements

### 🚀 Adding Elements

```cpp
vector<int> c = {10, 10, 10, 10, 10};
c.push_back(101);  // 📌 Add to end
cout << "➕ After push_back(101): ";
for (int x : c) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
➕ After push_back(101): 10 10 10 10 10 101 
```

```cpp
// 🎯 Insert at specific position
auto start = c.begin();
c.insert(start + 2, -123);  // 📍 Insert at index 2
cout << "🔧 After insert(-123) at index 2: ";
for (int x : c) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔧 After insert(-123) at index 2: 10 10 -123 10 10 10 101 
```

### 🗑️ Removing Elements

```cpp
c.pop_back();  // 🔄 Remove last element
cout << "➖ After pop_back(): ";
for (int x : c) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
➖ After pop_back(): 10 10 -123 10 10 10 
```

---

## 🔀 Sorting Operations

### ⬆️ Ascending Order

```cpp
vector<int> d = {1, 3, 2, 4, -1, 0};
cout << "📋 Before sorting: ";
for (int x : d) cout << x << " ";
cout << endl;

sort(d.begin(), d.end());  // 🔄 Sort ascending
cout << "⬆️ After ascending sort: ";
for (int x : d) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Before sorting: 1 3 2 4 -1 0 
⬆️ After ascending sort: -1 0 1 2 3 4 
```

### ⬇️ Descending Order

```cpp
vector<int> e = {1, 3, 2, -100, 4, 5};
cout << "📋 Before sorting: ";
for (int x : e) cout << x << " ";
cout << endl;

sort(e.rbegin(), e.rend());  // 🔄 Sort descending
cout << "⬇️ After descending sort: ";
for (int x : e) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Before sorting: 1 3 2 -100 4 5 
⬇️ After descending sort: 5 4 3 2 1 -100 
```

### 🔄 Reverse Vector

```cpp
vector<int> f = {1, 2, 1, 9, 8, 74, 1};
cout << "🔄 Before reverse: ";
for (int x : f) cout << x << " ";
cout << endl;

reverse(f.begin(), f.end());  // 🎯 Reverse order
cout << "🔃 After reverse: ";
for (int x : f) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔄 Before reverse: 1 2 1 9 8 74 1 
🔃 After reverse: 1 74 8 9 1 2 1 
```

---

## 🔍 Search Operations

### 🎯 Finding Element Index

```cpp
vector<int> v1 = {1, 3, 5, 3, 7};
cout << "🔍 Vector: ";
for (int x : v1) cout << x << " ";
cout << endl;

auto it = find(v1.begin(), v1.end(), 3);
if (it != v1.end()) {
    size_t index = distance(v1.begin(), it);
    cout << "✅ Found 3 at index: " << index << endl;
} else {
    cout << "❌ Element 3 not found" << endl;
}
```

**🖥️ Output:**

```
🔍 Vector: 1 3 5 3 7 
✅ Found 3 at index: 1
```

### ✅ Check if Element Exists

```cpp
bool exists = find(v1.begin(), v1.end(), 5) != v1.end();
cout << "🔍 Element 5 exists: " << (exists ? "✅ Yes" : "❌ No") << endl;

bool notExists = find(v1.begin(), v1.end(), 99) != v1.end();
cout << "🔍 Element 99 exists: " << (notExists ? "✅ Yes" : "❌ No") << endl;
```

**🖥️ Output:**

```
🔍 Element 5 exists: ✅ Yes
🔍 Element 99 exists: ❌ No
```

---

## 🗑️ Element Removal

### 🎯 Remove Single Element

```cpp
vector<int> v2 = {1, 2, 3, 4, 5};
cout << "📋 Before erase: ";
for (int x : v2) cout << x << " ";
cout << endl;

v2.erase(v2.begin() + 2);  // 🗑️ Remove element at index 2
cout << "➖ After erase(index 2): ";
for (int x : v2) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Before erase: 1 2 3 4 5 
➖ After erase(index 2): 1 2 4 5 
```

### 🔥 Remove Range of Elements

```cpp
v2.erase(v2.begin() + 1, v2.begin() + 3);  // 💥 Remove range [1,3)
cout << "🔥 After erase range [1,3): ";
for (int x : v2) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔥 After erase range [1,3): 1 5 
```

### 🧹 Remove All Occurrences

```cpp
vector<int> v3 = {1, 3, 2, 3, 4, 3, 5};
cout << "📋 Before remove all 3s: ";
for (int x : v3) cout << x << " ";
cout << endl;

v3.erase(remove(v3.begin(), v3.end(), 3), v3.end());  // 🧽 Clean sweep
cout << "🧹 After remove all 3s: ";
for (int x : v3) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Before remove all 3s: 1 3 2 3 4 3 5 
🧹 After remove all 3s: 1 2 4 5 
```

---

## 📊 Count and Statistical Operations

### 🔢 Count Occurrences

```cpp
vector<int> v4 = {1, 2, 2, 3, 2, 4};
cout << "📊 Vector: ";
for (int x : v4) cout << x << " ";
cout << endl;

int count_twos = count(v4.begin(), v4.end(), 2);
cout << "🎯 Number 2 appears: " << count_twos << " times" << endl;
```

**🖥️ Output:**

```
📊 Vector: 1 2 2 3 2 4 
🎯 Number 2 appears: 3 times
```

### 📈 Find Min and Max Elements

```cpp
vector<int> v5 = {3, 1, 4, 1, 5, 9};
cout << "📊 Vector: ";
for (int x : v5) cout << x << " ";
cout << endl;

auto minIt = min_element(v5.begin(), v5.end());
auto maxIt = max_element(v5.begin(), v5.end());

cout << "📉 Min: " << *minIt << " at index: " << (minIt - v5.begin()) << endl;
cout << "📈 Max: " << *maxIt << " at index: " << (maxIt - v5.begin()) << endl;
```

**🖥️ Output:**

```
📊 Vector: 3 1 4 1 5 9 
📉 Min: 1 at index: 1
📈 Max: 9 at index: 5
```

### ➕ Sum of All Elements

```cpp
vector<int> v6 = {1, 2, 3, 4, 5};
cout << "📊 Vector: ";
for (int x : v6) cout << x << " ";
cout << endl;

int sum = accumulate(v6.begin(), v6.end(), 0);
cout << "🧮 Sum of all elements: " << sum << endl;
```

**🖥️ Output:**

```
📊 Vector: 1 2 3 4 5 
🧮 Sum of all elements: 15
```

---

## 🎯 Binary Search Operations

> **⚠️ Important:** Vector must be sorted for binary search operations!

### 🔍 Binary Search

```cpp
vector<int> v7 = {1, 2, 3, 4, 5, 6, 7};
cout << "📊 Sorted vector: ";
for (int x : v7) cout << x << " ";
cout << endl;

bool found4 = binary_search(v7.begin(), v7.end(), 4);
bool found8 = binary_search(v7.begin(), v7.end(), 8);

cout << "🔍 Element 4 found: " << (found4 ? "✅ Yes" : "❌ No") << endl;
cout << "🔍 Element 8 found: " << (found8 ? "✅ Yes" : "❌ No") << endl;
```

**🖥️ Output:**

```
📊 Sorted vector: 1 2 3 4 5 6 7 
🔍 Element 4 found: ✅ Yes
🔍 Element 8 found: ❌ No
```

### 🎯 Lower and Upper Bound

```cpp
auto lower = lower_bound(v7.begin(), v7.end(), 4);  // 📍 First position >= 4
auto upper = upper_bound(v7.begin(), v7.end(), 4);  // 📍 First position > 4

cout << "📍 Lower bound of 4 at index: " << (lower - v7.begin()) << endl;
cout << "📍 Upper bound of 4 at index: " << (upper - v7.begin()) << endl;
cout << "🎯 Element at lower bound: " << *lower << endl;
cout << "🎯 Element at upper bound: " << *upper << endl;
```

**🖥️ Output:**

```
📍 Lower bound of 4 at index: 3
📍 Upper bound of 4 at index: 4
🎯 Element at lower bound: 4
🎯 Element at upper bound: 5
```

---

## ⚡ Advanced Operations

### 🧹 Remove Duplicates

```cpp
vector<int> v8 = {1, 2, 2, 3, 3, 3, 4};
cout << "📋 Before removing duplicates: ";
for (int x : v8) cout << x << " ";
cout << endl;

sort(v8.begin(), v8.end());  // 🔄 Must be sorted first
v8.erase(unique(v8.begin(), v8.end()), v8.end());  // ✨ Magic cleanup
cout << "✨ After removing duplicates: ";
for (int x : v8) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Before removing duplicates: 1 2 2 3 3 3 4 
✨ After removing duplicates: 1 2 3 4 
```

### 📊 Frequency Count

```cpp
vector<int> v9 = {1, 2, 3, 2, 1, 4, 2, 3, 1};
cout << "📊 Vector: ";
for (int x : v9) cout << x << " ";
cout << endl;

unordered_map<int, int> freq;
for (int x : v9) {
    freq[x]++;
}

cout << "📈 Frequency count:" << endl;
for (auto& p : freq) {
    cout << "🔢 Element " << p.first << " appears " << p.second << " times" << endl;
}
```

**🖥️ Output:**

```
📊 Vector: 1 2 3 2 1 4 2 3 1 
📈 Frequency count:
🔢 Element 4 appears 1 times
🔢 Element 3 appears 2 times
🔢 Element 2 appears 3 times
🔢 Element 1 appears 3 times
```

### 🔄 Next Permutation

```cpp
vector<int> v10 = {1, 2, 3};
cout << "🎲 All permutations of {1, 2, 3}:" << endl;
do {
    cout << "🔸 ";
    for (int x : v10) cout << x << " ";
    cout << endl;
} while (next_permutation(v10.begin(), v10.end()));
```

**🖥️ Output:**

```
🎲 All permutations of {1, 2, 3}:
🔸 1 2 3 
🔸 1 3 2 
🔸 2 1 3 
🔸 2 3 1 
🔸 3 1 2 
🔸 3 2 1 
```

---

## 🔧 Common Macros and Shortcuts

<div align="center">

**🚀 Speed Up Your Coding with These Macros! 🚀**

</div>

```cpp
// 🔥 Essential Vector Macros
#define pb push_back
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()

// 🎯 Usage examples
vector<int> v;
v.pb(5);           // ✨ Same as v.push_back(5)
v.pb(3);
v.pb(1);

cout << "📋 Before sort: ";
for (int x : v) cout << x << " ";
cout << endl;

sort(all(v));      // 🚀 Same as sort(v.begin(), v.end())
cout << "✨ After sort: ";
for (int x : v) cout << x << " ";
cout << endl;
cout << "📏 Size: " << sz(v) << endl;
```

**🖥️ Output:**

```
📋 Before sort: 5 3 1 
✨ After sort: 1 3 5 
📏 Size: 3
```

---

## 💡 Best Practices

### 1️⃣ Size Type Usage

```cpp
vector<int> v = {1, 2, 3, 4, 5};
cout << "🔧 Using size_t for indices:" << endl;
for (size_t i = 0; i < v.size(); ++i) {
    cout << "📍 v[" << i << "] = " << v[i] << endl;
}
```

**🖥️ Output:**

```
🔧 Using size_t for indices:
📍 v[0] = 1
📍 v[1] = 2
📍 v[2] = 3
📍 v[3] = 4
📍 v[4] = 5
```

### 2️⃣ 2D Vectors

```cpp
int n = 3, m = 4;
vector<vector<int>> matrix(n, vector<int>(m, 0));
matrix[1][2] = 99;

cout << "🏗️ 2D Vector (3x4):" << endl;
for (int i = 0; i < n; i++) {
    cout << "🔸 ";
    for (int j = 0; j < m; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

**🖥️ Output:**

```
🏗️ 2D Vector (3x4):
🔸 0 0 0 0 
🔸 0 0 99 0 
🔸 0 0 0 0 
```

### 3️⃣ Reserve for Performance

```cpp
vector<int> v;
v.reserve(1000000);  // 🚀 Pre-allocate memory for better performance
cout << "⚡ Reserved capacity: " << v.capacity() << endl;
cout << "📏 Current size: " << v.size() << endl;
```

**🖥️ Output:**

```
⚡ Reserved capacity: 1000000
📏 Current size: 0
```

---

## 🏆 Competitive Programming Patterns

### 🔢 Input Reading Pattern

```cpp
// 📥 Simulating competitive programming input
int n = 5;
vector<int> v(n);
// 💡 In actual CP: for (int i = 0; i < n; i++) cin >> v[i];
// 🎯 For demo:
v = {10, 20, 30, 40, 50};

cout << "📥 Input array: ";
for (int x : v) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📥 Input array: 10 20 30 40 50 
```

### 📊 Prefix Sum Pattern

```cpp
vector<int> arr = {1, 2, 3, 4, 5};
int n = arr.size();
vector<int> prefix(n + 1, 0);

for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + arr[i];
}

cout << "📊 Original array: ";
for (int x : arr) cout << x << " ";
cout << endl;

cout << "📈 Prefix sum array: ";
for (int x : prefix) cout << x << " ";
cout << endl;

// 🎯 Query sum from index 1 to 3 (inclusive)
int sum_1_to_3 = prefix[4] - prefix[1];
cout << "🧮 Sum from index 1 to 3: " << sum_1_to_3 << endl;
```

**🖥️ Output:**

```
📊 Original array: 1 2 3 4 5 
📈 Prefix sum array: 0 1 3 6 10 15 
🧮 Sum from index 1 to 3: 9
```

### 👥 Two Pointers Pattern

```cpp
vector<int> sorted_arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int target = 11;
int left = 0, right = sorted_arr.size() - 1;
bool found = false;

cout << "🎯 Finding pair with sum " << target << ":" << endl;

while (left < right) {
    int current_sum = sorted_arr[left] + sorted_arr[right];
    if (current_sum == target) {
        cout << "✅ Found pair: " << sorted_arr[left] << " + " << sorted_arr[right] << " = " << target << endl;
        found = true;
        break;
    } else if (current_sum < target) {
        left++;
    } else {
        right--;
    }
}

if (!found) {
    cout << "❌ No pair found with sum " << target << endl;
}
```

**🖥️ Output:**

```
🎯 Finding pair with sum 11:
✅ Found pair: 1 + 10 = 11
```

---

<div align="center">

## ⚡ Time Complexity Cheat Sheet

| Operation          | Time Complexity      | Space    | When to Use     |
| ------------------ | -------------------- | -------- | --------------- |
| 🔍 Access (v[i])   | **O(1)**       | O(1)     | Random access   |
| ➕ push_back()     | **O(1)***      | O(1)     | Adding elements |
| ➖ pop_back()      | **O(1)**       | O(1)     | Removing last   |
| 📍 insert()        | **O(n)**       | O(1)     | Rare insertions |
| 🗑️ erase()       | **O(n)**       | O(1)     | Rare deletions  |
| 🔍 find()          | **O(n)**       | O(1)     | Linear search   |
| 🔀 sort()          | **O(n log n)** | O(log n) | Sorting data    |
| 🎯 binary_search() | **O(log n)**   | O(1)     | Sorted data     |

*Amortized time complexity

</div>

---

<div align="center">

## 🎉 Conclusion

**🚀 Vector is the Swiss Army knife of competitive programming! 🚀**

> **Master these operations and you'll solve 90% of CP problems efficiently!**

### 🔥 Key Takeaways:

- ✅ Use `vector<int>` for most problems
- ✅ Remember time complexities
- ✅ Use macros for faster coding
- ✅ Practice common patterns
- ✅ Always consider edge cases

---

**🌟 Happy Coding! May your solutions be fast and your rankings high! 🌟**

---

<table align="center">
<tr>
<td align="center">
