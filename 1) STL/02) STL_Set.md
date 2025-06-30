# 🌟 STL Set for Competitive Programming

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CP](https://img.shields.io/badge/Competitive-Programming-gold?style=for-the-badge)
![STL](https://img.shields.io/badge/STL-Set-red?style=for-the-badge)

**🔥 Pure STL Set Operations for CP 🔥**

---

**👨‍💻 Author:** `rashedjamanraju` | **📅 Created:** `2025-06-28 14:45:10 UTC`
**🎯 Journey:** 2nd Journey (Restarted from June 1, 2025) | **⭐ Version:** 1.0

---

</div>

## 📋 Table of Contents

<details>
<summary>🔍 Click to expand navigation</summary>

1. [🌟 Set Declaration](#-set-declaration)
2. [🔄 Iteration Methods](#-iteration-methods)
3. [➕ Insertion Operations](#-insertion-operations)
4. [🔍 Search Operations](#-search-operations)
5. [🗑️ Deletion Operations](#️-deletion-operations)
6. [📊 Size and Status Operations](#-size-and-status-operations)
7. [🎯 Iterator Operations](#-iterator-operations)
8. [🔧 Custom Comparators](#-custom-comparators)
9. [⚡ Advanced Set Operations](#-advanced-set-operations)
10. [🔧 CP Macros and Shortcuts](#-cp-macros-and-shortcuts)

</details>

---

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    // 🔥 Pure STL Set Operations!
    Write Your Code On Set
    return 0;
}
```

---

## 🌟 Set Declaration

### 1️⃣ Empty Set

```cpp
set<int> s;  // 📦 Empty set
cout << "📊 Empty set size: " << s.size() << endl;
```

**🖥️ Output:**

```
📊 Empty set size: 0
```

### 2️⃣ Initialize with Values

```cpp
set<int> s1 = {5, 2, 8, 2, 1, 8, 3};  // 🎨 Auto removes duplicates & sorts
cout << "🌈 Set s1: ";
for (int x : s1) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🌈 Set s1: 1 2 3 5 8 
```

### 3️⃣ From Vector/Array

```cpp
vector<int> vec = {10, 5, 10, 3, 7, 5, 1};
set<int> s2(vec.begin(), vec.end());  // 🔄 Convert vector to set
cout << "✨ Set from vector: ";
for (int x : s2) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
✨ Set from vector: 1 3 5 7 10 
```

### 4️⃣ Descending Order

```cpp
set<int, greater<int>> s3 = {5, 2, 8, 1, 3};  // ⬇️ Descending
cout << "⬇️ Descending set: ";
for (int x : s3) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
⬇️ Descending set: 8 5 3 2 1 
```

---

## 🔄 Iteration Methods

### 🌟 Range-based For Loop

```cpp
set<int> s = {10, 20, 30, 40, 50};
cout << "✨ Forward: ";
for (int x : s) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
✨ Forward: 10 20 30 40 50 
```

### 🎯 Iterator Forward

```cpp
cout << "🚀 Iterator forward: ";
for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
}
cout << endl;
```

**🖥️ Output:**

```
🚀 Iterator forward: 10 20 30 40 50 
```

### 🔄 Reverse Iterator

```cpp
cout << "🔄 Reverse: ";
for (auto it = s.rbegin(); it != s.rend(); it++) {
    cout << *it << " ";
}
cout << endl;
```

**🖥️ Output:**

```
🔄 Reverse: 50 40 30 20 10 
```

---

## ➕ Insertion Operations

### 🚀 Basic Insert

```cpp
set<int> s;
s.insert(5);
s.insert(2);
s.insert(8);
s.insert(2);  // 🚫 Duplicate ignored
cout << "➕ After insert: ";
for (int x : s) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
➕ After insert: 2 5 8 
```

### 🔄 Insert Range

```cpp
vector<int> vec = {1, 3, 7, 9};
s.insert(vec.begin(), vec.end());
cout << "🔄 After range insert: ";
for (int x : s) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔄 After range insert: 1 2 3 5 7 8 9 10 
```

---

## 🔍 Search Operations

### 🎯 Find Element / Check Existence

```cpp
set<int> s = {1, 3, 5, 7, 9};
cout << "🔍 Set: ";
for (int x : s) cout << x << " ";
cout << endl;

auto it = s.find(5);
if (it != s.end()) {
    cout << "✅ Found 5" << endl;
} else {
    cout << "❌ Not found 5" << endl;
}
```

**🖥️ Output:**

```
🔍 Set: 1 3 5 7 9 
✅ Found 5
```

### 📊 Count Element

```cpp
cout << "🔢 Count of 5: " << s.count(5) << endl;
cout << "🔢 Count of 6: " << s.count(6) << endl;
```

**🖥️ Output:**

```
🔢 Count of 5: 1
🔢 Count of 6: 0
```

---

## 🗑️ Deletion Operations

### 🎯 Erase by Value

```cpp
set<int> s = {1, 3, 5, 7, 9};
cout << "📋 Before erase: ";
for (int x : s) cout << x << " ";
cout << endl;

size_t removed = s.erase(5);  // 🗑️ Returns count removed
cout << "🗑️ Removed count: " << removed << endl;
cout << "➖ After erase: ";
for (int x : s) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Before erase: 1 3 5 7 9 
🗑️ Removed count: 1
➖ After erase: 1 3 7 9 
```

### 🔍 Erase by Iterator

```cpp
auto it = s.find(7);
if (it != s.end()) {
    s.erase(it);
    cout << "🎯 Erased by iterator" << endl;
}
cout << "📋 After iterator erase: ";
for (int x : s) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🎯 Erased by iterator
📋 After iterator erase: 1 3 9 
```

### 🔥 Erase Range

```cpp
set<int> s2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
auto start = s2.find(3);
auto end = s2.find(7);
s2.erase(start, end);  // 🔥 Erase [3, 7)
cout << "🔥 After range erase: ";
for (int x : s2) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔥 After range erase: 1 2 7 8 9 
```

### 🧹 Clear All

```cpp
s2.clear();
cout << "🧹 After clear: " << s2.size() << endl;
```

**🖥️ Output:**

```
🧹 After clear: 0
```

---

## 📊 Size and Status Operations

### 📏 Size Operations & Empty or Not Check

```cpp
set<int> s = {10, 20, 30, 40, 50};
cout << "📏 Size: " << s.size() << endl;
cout << "❓ Empty: " << (s.empty() ? "Yes" : "No") << endl;
cout << "🎯 Max size: " << s.max_size() << endl;
```

**🖥️ Output:**

```
📏 Size: 5
❓ Empty: No
🎯 Max size: 461168601842738790
```

---

## 🎯 Iterator Operations

### 📍 Begin and End

```cpp
set<int> s = {2, 4, 6, 8, 10};
cout << "🔍 First element: " << *s.begin() << endl;
cout << "🔍 Last element: " << *s.rbegin() << endl;

// 🚫 Don't do *s.end() - it's undefined!
auto last = s.end();
--last;
cout << "🔍 Last (using end): " << *last << endl;
```

**🖥️ Output:**

```
🔍 First element: 2
🔍 Last element: 10
🔍 Last (using end): 10
```

### 🎯 Lower and Upper Bound

```cpp
set<int> s = {2, 4, 6, 8, 10, 12, 14};
cout << "📊 Set: ";
for (int x : s) cout << x << " ";
cout << endl;

auto lb = s.lower_bound(7);  // First >= 7
auto ub = s.upper_bound(8);  // First > 8

if (lb != s.end()) cout << "📍 Lower bound of 7: " << *lb << endl;
if (ub != s.end()) cout << "📍 Upper bound of 8: " << *ub << endl;
```

**🖥️ Output:**

```
📊 Set: 2 4 6 8 10 12 14 
📍 Lower bound of 7: 8
📍 Upper bound of 8: 10
```

---

## 🔧 Custom Comparators

### ⬇️ Descending Order

```cpp
set<int, greater<int>> desc = {5, 2, 8, 1, 9};
cout << "⬇️ Descending: ";
for (int x : desc) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
⬇️ Descending: 9 8 5 2 1 
```

### 🔥 Lambda Comparator

```cpp
auto cmp = [](int a, int b) { return abs(a) < abs(b); };
set<int, decltype(cmp)> abs_set(cmp);
abs_set.insert({-5, 3, -2, 7, -1});

cout << "🔥 By absolute value: ";
for (int x : abs_set) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔥 By absolute value: -1 -2 3 -5 7 
```

---

## ⚡ Advanced Set Operations

### 🔄 Set to Vector

```cpp
set<int> s = {5, 2, 8, 1, 9};
vector<int> vec(s.begin(), s.end());
cout << "🔄 Set to vector: ";
for (int x : vec) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
🔄 Set to vector: 1 2 5 8 9 
```

### 🧹 Remove Duplicates

```cpp
vector<int> arr = {5, 2, 8, 2, 1, 8, 3, 5};
cout << "📋 Original: ";
for (int x : arr) cout << x << " ";
cout << endl;

set<int> unique(arr.begin(), arr.end());
arr.assign(unique.begin(), unique.end());
cout << "✨ Unique: ";
for (int x : arr) cout << x << " ";
cout << endl;
```

**🖥️ Output:**

```
📋 Original: 5 2 8 2 1 8 3 5 
✨ Unique: 1 2 3 5 8 
```

### 🎯 Multiset vs Set

```cpp
vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6, 5};

set<int> s(data.begin(), data.end());
multiset<int> ms(data.begin(), data.end());

cout << "📊 Original: ";
for (int x : data) cout << x << " ";
cout << endl;

cout << "📦 Set: ";
for (int x : s) cout << x << " ";
cout << endl;

cout << "🔄 Multiset: ";
for (int x : ms) cout << x << " ";
cout << endl;

cout << "🔢 Set size: " << s.size() << endl;
cout << "🔢 Multiset size: " << ms.size() << endl;
```

**🖥️ Output:**

```
📊 Original: 3 1 4 1 5 9 2 6 5 
📦 Set: 1 2 3 4 5 6 9 
🔄 Multiset: 1 1 2 3 4 5 5 6 9 
🔢 Set size: 7
🔢 Multiset size: 9
```

---

## ⚡ STL Set Time Complexity

| Operation        | Time Complexity    | Space | Use Case        |
| ---------------- | ------------------ | ----- | --------------- |
| 🔍 find()        | **O(log n)** | O(1)  | Search element  |
| ➕ insert()      | **O(log n)** | O(1)  | Add element     |
| 🗑️ erase()     | **O(log n)** | O(1)  | Remove element  |
| 🔢 count()       | **O(log n)** | O(1)  | Check existence |
| 📍 lower_bound() | **O(log n)** | O(1)  | First >= x      |
| 📍 upper_bound() | **O(log n)** | O(1)  | First > x       |
| 🔄 begin/end     | **O(1)**     | O(1)  | Iterator        |
| 📏 size()        | **O(1)**     | O(1)  | Get count       |

</div>

---

<div align="center">

## 🎉 STL Set Summary

**🌟 Perfect for unique sorted collections! 🌟**

### 🔥 Key Points:

- ✅ **Automatic sorting** - always maintains order
- ✅ **Unique elements** - no duplicates allowed
- ✅ **O(log n) operations** - very efficient
- ✅ **Red-Black Tree** - self-balancing BST
- ✅ **Iterator support** - full STL compatibility

---

**🌟 Happy Coding! Keep your elements unique and sorted! 🌟**

</div>
