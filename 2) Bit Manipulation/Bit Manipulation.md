# Bit Manipulation Ultimate Guide for Competitive Programming

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CP](https://img.shields.io/badge/Competitive-Programming-gold?style=for-the-badge)
![Bitwise](https://img.shields.io/badge/Bit-Manipulation-blue?style=for-the-badge)

**🔥 Master Bit Tricks for Fast Competitive Programming 🔥**

---

**👨‍💻 Author:** `rashedjamanraju` | **📅 Created:** `2025-06-28 13:13:18 UTC`
**🎯 Journey:** 2nd Journey (Restarted from June 1, 2025) | **⭐ Version:** 1.0

---

</div>

## 📋 Table of Contents

<details>
<summary>🔍 Click to expand navigation</summary>

1. [🌟 Introduction](#-introduction)
2. [& Bitwise AND](#-bitwise-and)
3. [| Bitwise OR](#-bitwise-or)
4. [~ Bitwise NOT](#-bitwise-not)
5. [^ Bitwise XOR](#-bitwise-xor)
6. [<< Left Shift](#-left-shift)
7. [>> Right Shift](#-right-shift)
8. [🛠️ Useful Bit Tricks](#️-useful-bit-tricks)
9. [⚡ Time Complexity](#-time-complexity)
10. [🏆 Best Practices](#-best-practices)

</details>

---

## 🌟 Introduction

> **Bit manipulation** is the art of using bitwise operations to solve problems efficiently. It's a must-have skill for every competitive programmer!

---

## & Bitwise AND

### How it works

Bitwise AND (`&`) compares each bit of two numbers and returns 1 only if both bits are 1.

**Example:**

```cpp
int a = 5;  // 101
int b = 7;  // 111
int c = a & b; // 101 & 111 = 101 (5)
cout << c << endl;
```

**Explanation:**  
- `a` in binary: `101`  
- `b` in binary: `111`  
- Bitwise AND compares each bit:  
    - 1 & 1 = 1  
    - 0 & 1 = 0  
    - 1 & 1 = 1  
- So, result is `101` (which is 5 in decimal).

**Bitwise Table:**

```
        1 0 1   (5)
    &   1 1 1   (7)
    ---------
        1 0 1   (5)
```

**Use Cases:**
- Masking bits
- Checking if a number is even/odd (`n & 1`)
- Clearing bits

---

## | Bitwise OR

### How it works

Bitwise OR (`|`) compares each bit and returns 1 if at least one bit is 1.

**Example:**

```cpp
int a = 5;  // 101
int b = 7;  // 111
int c = a | b; // 101 | 111 = 111 (7)
cout << c << endl;
```

**Explanation:**  
- `a` in binary: `101`  
- `b` in binary: `111`  
- Bitwise OR compares each bit:  
    - 1 | 1 = 1  
    - 0 | 1 = 1  
    - 1 | 1 = 1  
- So, result is `111` (which is 7 in decimal).

**Bitwise Table:**

```
        1 0 1   (5)
     |  1 1 1   (7)
    ---------
        1 1 1   (7)
```

**Use Cases:**
- Setting bits
- Combining bitmasks

---

## ~ Bitwise NOT

### How it works

Bitwise NOT (`~`) inverts all bits (1 becomes 0, 0 becomes 1).

**Example:**

```cpp
int a = 5;  // 000...0101
int b = ~a; // 111...1010 (on 32-bit: -6)
cout << b << endl;
```

**Explanation:**  
- `a` in binary (32-bit): `000...0101`  
- `~a` flips all bits: `111...1010`  
- In two's complement, this is `-6`.

**Note:** Output is negative due to two's complement.

---

## ^ Bitwise XOR

### How it works

Bitwise XOR (`^`) returns 1 if bits are different.

**Example:**

```cpp
int a = 5;  // 101
int b = 7;  // 111
int c = a ^ b; // 101 ^ 111 = 010 (2)
cout << c << endl;
```

**Explanation:**  
- `a` in binary: `101`  
- `b` in binary: `111`  
- Bitwise XOR compares each bit:  
    - 1 ^ 1 = 0  
    - 0 ^ 1 = 1  
    - 1 ^ 1 = 0  
- So, result is `010` (which is 2 in decimal).

**Bitwise Table:**

```
        1 0 1   (5)
     ^  1 1 1   (7)
    ---------
        0 1 0   (2)
```

**Use Cases:**
- Swapping values without temp
- Finding unique element in array (all others appear twice)

---

## << Left Shift

### How it works

Left shift (`<<`) moves bits to the left, filling with zeros. Each shift multiplies by 2.

**Example:**

```cpp
int a = 3; // 011
int b = a << 2; // 011 << 2 = 1100 (12)
cout << b << endl;
```

**Explanation:**  
- `a` in binary: `011`  
- Shifting left by 2:  
    - `011` becomes `1100`  
- `1100` is 12 in decimal.  
- Each left shift multiplies by 2, so `a << k` is `a * 2^k`.

---

## >> Right Shift

### How it works

Right shift (`>>`) moves bits to the right, discarding rightmost bits. Each shift divides by 2.

**Example:**

```cpp
int a = 12; // 1100
int b = a >> 2; // 1100 >> 2 = 0011 (3)
cout << b << endl;
```

**Explanation:**  
- `a` in binary: `1100`  
- Shifting right by 2:  
    - `1100` becomes `0011`  
- `0011` is 3 in decimal.  
- Each right shift divides by 2, so `a >> k` is `a / 2^k` (integer division).

---

## 🛠️ Useful Bit Tricks

### 1️⃣ Check Even or Odd

```cpp
if (n & 1) cout << "Odd";
else cout << "Even";
```
**Explanation:**  
- The least significant bit (LSB) of an odd number is 1, even is 0.
- `n & 1` checks the LSB.

- **Time:** O(1)

### 2️⃣ Check if n is Power of 2

```cpp
bool isPowerOf2 = (n > 0) && ((n & (n - 1)) == 0);
```
**Explanation:**  
- Powers of 2 have only one bit set.
- `n & (n-1)` clears the lowest set bit. If result is 0, n is a power of 2.

- **Proof:** Only powers of 2 have one bit set.

### 3️⃣ Count Set Bits

```cpp
int cnt = __builtin_popcount(n); // GCC/Clang
```
- **Manual:**
```cpp
int cnt = 0;
for (int x = n; x; x >>= 1) cnt += (x & 1);
```
**Explanation:**  
- `__builtin_popcount(n)` counts number of 1s in binary representation.
- Manual loop shifts right and adds 1 for each set bit.

### 4️⃣ Get Rightmost Set Bit

```cpp
int rightmost = n & -n;
```
**Explanation:**  
- `-n` is two's complement, flips all bits and adds 1.
- `n & -n` isolates the lowest set bit.

### 5️⃣ Swap Two Numbers (XOR Trick)

```cpp
a ^= b; b ^= a; a ^= b;
```
**Explanation:**  
- XORing twice with the same value restores the original.
- Swaps values without using a temporary variable.

### 6️⃣ Set/Clear/Toggle k-th Bit

```cpp
// Set k-th bit
n |= (1 << k);
// Clear k-th bit
n &= ~(1 << k);
// Toggle k-th bit
n ^= (1 << k);
```
**Explanation:**  
- `1 << k` creates a mask for the k-th bit.
- OR sets, AND with NOT clears, XOR toggles the k-th bit.

---

## ⚡ Time Complexity

| Operation                | Time Complexity |
|--------------------------|----------------|
| Bitwise AND/OR/XOR/NOT   | O(1)           |
| Shift (<<, >>)           | O(1)           |
| Set/Clear/Toggle Bit     | O(1)           |
| Count Set Bits           | O(log n)       |

---

## 🏆 Best Practices

- Use bitwise operations for fast checks and manipulations.
- Prefer built-in functions for counting bits if available.
- Always comment tricky bitwise code for clarity.
- Practice common patterns (masking, toggling, checking).

---

<div align="center">

**🌟 Happy Coding! Master bits, master speed! 🌟**

</div>
