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

## 🧠 Famous Sliding Window Problems (and Patterns)

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

## 🚀 Popular Problems with Sliding Window Solutions

- [LeetCode 3](https://leetcode.com/problems/longest-substring-without-repeating-characters) – Longest Substring Without Repeating Characters  
- [LeetCode 76](https://leetcode.com/problems/minimum-window-substring) – Minimum Window Substring  
- [LeetCode 209](https://leetcode.com/problems/minimum-size-subarray-sum) – Minimum Size Subarray Sum  
- [LeetCode 438](https://leetcode.com/problems/find-all-anagrams-in-a-string) – Find All Anagrams in a String  
- [LeetCode 567](https://leetcode.com/problems/permutation-in-string) – Permutation in String  
- [LeetCode 239](https://leetcode.com/problems/sliding-window-maximum) – Sliding Window Maximum  
- [LeetCode 1004](https://leetcode.com/problems/max-consecutive-ones-iii) – Max Consecutive Ones III  
- [LeetCode 1248](https://leetcode.com/problems/count-number-of-nice-subarrays) – Count Number of Nice Subarrays  
- [LeetCode 2958](https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency) – Length of Longest Subarray With at Most K Frequency  
- [LeetCode 1456](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length) – Maximum Number of Vowels in a Substring of Given Length  
- [LeetCode 1208](https://leetcode.com/problems/get-equal-substrings-within-budget) – Get Equal Substrings Within Budget  
- [LeetCode 1052](https://leetcode.com/problems/grumpy-bookstore-owner) – Grumpy Bookstore Owner  
- [LeetCode 1658](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero) – Minimum Operations to Reduce X to Zero  
- [LeetCode 930](https://leetcode.com/problems/binary-subarrays-with-sum) – Binary Subarrays With Sum  
- [LeetCode 862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k) – Shortest Subarray with Sum at Least K  
- [LeetCode 904](https://leetcode.com/problems/fruit-into-baskets) – Fruit Into Baskets  
- [LeetCode 1695](https://leetcode.com/problems/maximum-erasure-value) – Maximum Erasure Value  
- [LeetCode 1984](https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores) – Minimum Difference Between Highest and Lowest of K Scores  
- [LeetCode 187](https://leetcode.com/problems/repeated-dna-sequences) – Repeated DNA Sequences  
- [LeetCode 643](https://leetcode.com/problems/maximum-average-subarray-i) – Maximum Average Subarray I  
- [LeetCode 485](https://leetcode.com/problems/max-consecutive-ones) – Max Consecutive Ones  
- [LeetCode 1343](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold) – Number of Sub-arrays of Size K and Average ≥ Threshold

---

### ✨ Feel free to contribute more examples or patterns!
