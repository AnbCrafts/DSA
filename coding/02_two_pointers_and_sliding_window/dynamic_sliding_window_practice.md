# Dynamic Sliding Window Mastery Sheet (Subarrays & Substrings)
Target Exam: **TCS NQT / TCS Digital / TCS Prime** | Language: **C++**

---

## 🧭 The Universal Dynamic Sliding Window Mental Model

Unlike fixed-size windows (where window size $K$ never changes), a **Dynamic Sliding Window** expands and shrinks like an accordion based on a condition.

Every dynamic sliding window problem follows one of **Three Flavors**:

### Flavor 1: Maximize Window Length (e.g., Longest Substring / Subarray)
```cpp
int left = 0, maxLen = 0;
for (int right = 0; right < n; right++) {
    // 1. Add arr[right] to window state (update sum, frequency map, etc.)
    
    // 2. Window is INVALID -> Shrink from left until valid again
    while (window_is_invalid) {
        // Remove arr[left] from window state
        left++;
    }
    
    // 3. Window is now VALID -> Update maximum length
    maxLen = max(maxLen, right - left + 1);
}
```

### Flavor 2: Minimize Window Length (e.g., Smallest Subarray with Sum $\ge S$)
```cpp
int left = 0, minLen = INT_MAX;
for (int right = 0; right < n; right++) {
    // 1. Add arr[right] to window state
    
    // 2. Window is VALID -> Try to shrink to find the SMALLEST valid window
    while (window_is_valid) {
        minLen = min(minLen, right - left + 1); // Record before shrinking
        // Remove arr[left] from window state
        left++;
    }
}
```

### Flavor 3: Count Subarrays (e.g., Subarrays with condition)
```cpp
// For every valid window [left ... right], the number of valid subarrays ending at `right`
// is exactly: (right - left + 1)
totalCount += (right - left + 1);
```

---

## 📋 The Curated Problem Set

| # | Problem Name | Target Output | TCS Frequency | Key Technique |
|---|:---|:---:|:---:|:---|
| **W1** | **Longest Substring Without Repeating Characters** | Max Length | Extremely High (Digital Signature) | Frequency map / Last-seen index |
| **W2** | **Smallest Subarray with Sum $\ge S$** | Min Length | High (NQT / Digital) | Shrink while sum $\ge S$ |
| **W3** | **Longest Substring with At Most $K$ Distinct Characters** | Max Length | High (Digital) | Map size $\le K$ |
| **W4** | **Max Consecutive Ones III (Flip at most $K$ Zeros)** | Max Length | Very High (Digital) | Count of zeros $\le K$ |
| **W5** | **Subarray Product Less Than $K$** | Total Count | High (Digital) | Count subarrays `right - left + 1` |
| **W6** | **Fruit Into Baskets (At most 2 types of fruits)** | Max Length | High (Digital / Prime) | Map size $\le 2$ |
| **W7** | **Subarrays with Exactly $K$ Distinct Elements** | Total Count | Prime / CodeVita | `atMost(K) - atMost(K - 1)` |

---

## 🎯 Detailed Problem Statements

### Problem W1: Longest Substring Without Repeating Characters
* **TCS Category:** TCS Digital Classic
* **Statement:** Given a string `s`, find the length of the longest substring without repeating characters.
* **Example 1:**
  * Input: `s = "abcabcbb"`
  * Output: `3` (Explanation: The answer is `"abc"`, with length 3)
* **Example 2:**
  * Input: `s = "bbbbb"`
  * Output: `1` (Explanation: The answer is `"b"`, with length 1)
* **Example 3:**
  * Input: `s = "pwwkew"`
  * Output: `3` (Explanation: The answer is `"wke"`, with length 3)
* **Hint:** Maintain an `unordered_set<char>` or frequency array. When `s[right]` is already in the set, erase `s[left]` and advance `left++` until `s[right]` can be inserted.

---

### Problem W2: Minimum Size Subarray Sum
* **TCS Category:** TCS NQT & Digital
* **Statement:** Given an array of positive integers `nums` and a positive integer `target`, return the minimal length of a contiguous subarray of which the sum is greater than or equal to `target`. If there is no such subarray, return `0`.
* **Example 1:**
  * Input: `target = 7, nums = [2, 3, 1, 2, 4, 3]`
  * Output: `2` (Explanation: The subarray `[4, 3]` has the minimal length 2 with sum $\ge 7$)
* **Example 2:**
  * Input: `target = 4, nums = [1, 4, 4]`
  * Output: `1`
* **Example 3:**
  * Input: `target = 11, nums = [1, 1, 1, 1, 1, 1, 1, 1]`
  * Output: `0`
* **Hint:** Flavor 2! Expand `right` and add to sum. While `sum >= target`, update `minLen = min(minLen, right - left + 1)`, then subtract `nums[left++]`.

---

### Problem W3: Longest Substring with At Most $K$ Distinct Characters
* **TCS Category:** TCS Digital
* **Statement:** Given a string `s` and an integer `k`, return the length of the longest substring of `s` that contains at most `k` distinct characters.
* **Example 1:**
  * Input: `s = "eceba", k = 2`
  * Output: `3` (Explanation: Substring `"ece"` with length 3 has 2 distinct characters 'e' and 'c')
* **Example 2:**
  * Input: `s = "aa", k = 1`
  * Output: `2`
* **Hint:** Use `unordered_map<char, int> freq`. Expand `right` and increment `freq[s[right]]`. While `freq.size() > k`, decrement `freq[s[left]]`; if count hits 0, erase key from map, and `left++`.

---

### Problem W4: Max Consecutive Ones III (At most $K$ zeros flipped)
* **TCS Category:** TCS Digital / Prime
* **Statement:** Given a binary array `nums` and an integer `k`, return the maximum number of consecutive `1`'s in the array if you can flip at most `k` `0`'s.
* **Example 1:**
  * Input: `nums = [1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0], k = 2`
  * Output: `6` (Explanation: Flip indices 5 and 10 $\to$ `[1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1]`)
* **Hint:** Rephrase the problem: *"Find the longest subarray containing at most $K$ zeros!"* Keep a `zeroCount`. While `zeroCount > k`, if `nums[left] == 0` decrement `zeroCount`, then `left++`.

---

### Problem W5: Subarray Product Less Than $K$
* **TCS Category:** TCS Digital
* **Statement:** Given an array of positive integers `nums` and an integer `k`, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than `k`.
* **Example 1:**
  * Input: `nums = [10, 5, 2, 6], k = 100`
  * Output: `8` (Subarrays: `[10]`, `[5]`, `[2]`, `[6]`, `[10, 5]`, `[5, 2]`, `[2, 6]`, `[5, 2, 6]`)
* **Hint:** If $k \le 1$, return 0. Maintain `product *= nums[right]`. While `product >= k`, `product /= nums[left++]`. For each `right`, the number of new valid subarrays ending at `right` is `(right - left + 1)`.

---

### Problem W6: Fruit Into Baskets
* **TCS Category:** TCS Digital / Prime
* **Statement:** You are visiting a farm with a single row of fruit trees represented by an integer array `fruits` where `fruits[i]` is the type of fruit the $i$-th tree produces. You have **2 baskets**, and each basket can only hold **one type of fruit**. You can pick exactly one fruit from every tree starting at any tree and moving right until a tree has a fruit that does not fit into either basket. Return the maximum number of fruits you can pick.
* **Example 1:**
  * Input: `fruits = [1, 2, 1]`
  * Output: `3` (Pick `[1, 2, 1]`)
* **Example 2:**
  * Input: `fruits = [0, 1, 2, 2]`
  * Output: `3` (Pick `[1, 2, 2]`)
* **Example 3:**
  * Input: `fruits = [1, 2, 3, 2, 2]`
  * Output: `4` (Pick `[2, 3, 2, 2]`)
* **Hint:** This is literally: *"Find the longest contiguous subarray with at most 2 distinct integers!"* Use the exact same logic as Problem W3 with $K = 2$.

---

### Problem W7: Subarrays with Exactly $K$ Distinct Elements
* **TCS Category:** TCS Prime / CodeVita
* **Statement:** Given an integer array `nums` and an integer `k`, return the number of good subarrays of `nums`. A good array is an array where the number of different integers in that array is exactly `k`.
* **Example 1:**
  * Input: `nums = [1, 2, 1, 2, 3], k = 2`
  * Output: `7` (Subarrays with 2 distinct elements: `[1, 2]`, `[2, 1]`, `[1, 2]`, `[2, 3]`, `[1, 2, 1]`, `[2, 1, 2]`, `[1, 2, 1, 2]`)
* **The Master Secret Formula:**
  $$\text{Exactly}(K) = \text{atMost}(K) - \text{atMost}(K - 1)$$
  Write a helper function `atMost(nums, k)` that counts subarrays with at most $k$ distinct elements (using Flavor 3), then call it twice!
