# Sliding Window Algorithms

The sliding window technique is a powerful method used to solve problems related to arrays and strings efficiently, often reducing the time complexity from O(n²) to O(n).

---

## 1. Fixed-size Sliding Window

**Use case**: When the size of the window (`k`) is fixed.

**Examples**:
- Maximum sum of subarray of size k
- First negative integer in every window of size k
- Maximum of all subarrays of size k (Deque based)

---

## 2. Variable-size Sliding Window (a.k.a. Dynamic Sliding Window)

**Use case**: When the window size is not fixed; expand and contract the window based on some condition.

**Examples**:
- Longest substring without repeating characters
- Minimum size subarray sum ≥ target
- Longest subarray with sum ≤ k

---

## Famous Sliding Window Problems (and Patterns)

| Problem Type                 | Examples (LeetCode/Classic)                              | Algorithm Insight                         |
|-----------------------------|-----------------------------------------------------------|-------------------------------------------|
| Max/Min Subarray Sum        | Max sum subarray of size K, Kadane's Algorithm (variable) | Fixed-size / Greedy                       |
| Character Count / Frequency | Longest substring without repeating chars, Longest repeating character replacement | HashMap + Variable-size Window |
| Subarray Sum / Count        | Subarray sum equals K, Count number of nice subarrays     | Prefix Sum + HashMap (optimized)          |
| Anagram Problems            | Find all anagrams in a string                             | Frequency Map + Sliding Window            |
| Deque Based (Monotonic Queue) | Sliding window maximum (LeetCode 239), Sum of minimums of all subarrays | Deque (Monotonic Queue)        |
| Two Pointers Variation      | Longest substring with at most K distinct characters      | Two Pointers + HashMap                    |
| Binary Search + Sliding Window | Maximize minimum in sliding window                     | Binary Search on Answer                   |

---

## Popular Problems with Sliding Window Solutions

- [LeetCode 3](https://leetcode.com/problems/longest-substring-without-repeating-characters) – Longest Substring Without Repeating Characters
- [LeetCode 76](https://leetcode.com/problems/minimum-window-substring) – Minimum Window Substring
- [LeetCode 209](https://leetcode.com/problems/minimum-size-subarray-sum) – Minimum Size Subarray Sum
- [LeetCode 438](https://leetcode.com/problems/find-all-anagrams-in-a-string) – Find All Anagrams in a String
- [LeetCode 567](https://leetcode.com/problems/permutation-in-string) – Permutation in String
- [LeetCode 239](https://leetcode.com/problems/sliding-window-maximum) – Sliding Window Maximum
- [LeetCode 1004](https://leetcode.com/problems/max-consecutive-ones-iii) – Max Consecutive Ones III
- [LeetCode 1248](https://leetcode.com/problems/count-number-of-nice-subarrays) – Count Number of Nice Subarrays

---

Feel free to contribute more examples or patterns!
