# GREEDY ALGORITHMS

## What is Greedy Algorithm?
 A greedy algorithm builds up a solution piece by piece, always choosing the **locally optimal** option with the hope that this leads to a **globally optimal** solution.

---

## STRUCTURED GREEDY TYPES AND PROBLEMS

### 1. **Interval-Based Greedy**

**Core Idea:**  
Sort by start or end times → pick intervals that don’t overlap.

**Common Problems:**
- Activity Selection / Non-overlapping Intervals
- Minimum Number of Arrows to Burst Balloons
- Meeting Rooms / Meeting Rooms II
- Partition Labels
- Erase Overlapping Intervals
- Minimum Platforms (Train Schedules)

---

### 2. **Graph-Based Greedy**

**Core Idea:**  
Pick smallest/largest weights (MST, shortest path), usually with sorting or heap.

**Common Problems:**
- Kruskal's Algorithm (MST using union-find)
- Prim's Algorithm (MST using priority queue)
- Dijkstra’s Algorithm (Shortest path using PQ)
- Greedy Coloring of Graph

---

### 3. **Greedy with Sorting + Priority Queue**

**Core Idea:**  
Sort based on profit/value/weight and take max from heap.

**Common Problems:**
- Job Sequencing with Deadlines
- Fractional Knapsack
- Greedy Florist
- Optimal Merge Pattern
- Minimum Cost to Connect Ropes

---

### 4. **Greedy with Strings/Arrays**

**Core Idea:**  
Choose character/element with highest or lowest priority at each step.

**Common Problems:**
- Reorganize String
- Remove K Digits
- Lexicographically Smallest String
- Monotone Increasing Digits
- Task Scheduler
- Candy Distribution
- Lemonade Change
- Gas Station Problem

---

### 5. **Greedy with Currency/Resources**

**Core Idea:**  
Use the **largest denomination first**, or minimize the number of operations.

**Common Problems:**
- Minimum Number of Coins
- Coin Change (Greedy variant)
- Egyptian Fraction
- Water Bottles (LeetCode 1518)

---

### 6. **Greedy Path/Steps**

**Core Idea:**  
Choose the farthest reachable step or minimum steps ahead.

**Common Problems:**
- Jump Game I & II
- Wiggle Subsequence
- Can Place Flowers
- Minimum Jumps to Reach End

---

## GREEDY ALGORITHMS TABLE FORMAT

| **Category**                    | **Core Idea**                                                                 | **Popular Problems**                                                                 |
|-----------------------------------|----------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------|
| **1. Interval-Based Greedy**      | Sort by start/end time, choose non-overlapping intervals                         | Activity Selection, Partition Labels, Erase Overlapping Intervals, Arrows to Balloons  |
| **2. Graph-Based Greedy**         | Use smallest/largest weights (priority queue or union-find)                      | Kruskal’s, Prim’s, Dijkstra’s, Graph Coloring                                          |
| **3. Sorting + Heap/Greedy PQ**   | Sort by value/deadline, use max heap for best option                             | Job Sequencing, Fractional Knapsack, Optimal Merge, Ropes Connection                   |
| **4. String/Array-Based Greedy**  | Greedy character/element selection based on priority or constraints              | Reorganize String, Remove K Digits, Monotone Digits, Candy Distribution, Task Scheduler|
| **5. Currency/Resources**         | Use largest denominations/resources first to minimize count                      | Coin Change (Greedy), Egyptian Fraction, Water Bottles, Lemonade Change                |
| **6. Path/Steps Optimization**    | Choose farthest reachable step or optimal path ahead                             | Jump Game I & II, Can Place Flowers, Wiggle Subsequence                                |

---

## 📘 STRUCTURED GREEDY TYPES AND PROBLEMS

### 1. Interval Scheduling & Merging

| Problem | Difficulty | Link |
|---------|------------|------|
| 435. Non-overlapping Intervals | Medium | [Link](https://leetcode.com/problems/non-overlapping-intervals) |
| 452. Minimum Number of Arrows to Burst Balloons | Medium | [Link](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons) |
| 56. Merge Intervals | Medium | [Link](https://leetcode.com/problems/merge-intervals) |
---

### 2. Jump Game Variants

| Problem | Difficulty | Link |
|---------|------------|------|
| 55. Jump Game | Medium | [Link](https://leetcode.com/problems/jump-game) |
| 45. Jump Game II | Medium | [Link](https://leetcode.com/problems/jump-game-ii) |
| 1345. Jump Game IV | Hard | [Link](https://leetcode.com/problems/jump-game-iv) |

---

### 3. Resource Allocation & Scheduling

| Problem | Difficulty | Link |
|---------|------------|------|
| 135. Candy | Hard | [Link](https://leetcode.com/problems/candy) |
| 621. Task Scheduler | Medium | [Link](https://leetcode.com/problems/task-scheduler) |
| 630. Course Schedule III | Hard | [Link](https://leetcode.com/problems/course-schedule-iii) |
| 122. Best Time to Buy and Sell Stock II | Medium | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii) |

---

### 4. String Manipulation

| Problem | Difficulty | Link |
|---------|------------|------|
| 402. Remove K Digits | Medium | [Link](https://leetcode.com/problems/remove-k-digits) |
| 316. Remove Duplicate Letters | Medium | [Link](https://leetcode.com/problems/remove-duplicate-letters) |
| 321. Create Maximum Number | Hard | [Link](https://leetcode.com/problems/create-maximum-number) |
| 738. Monotone Increasing Digits | Medium | [Link](https://leetcode.com/problems/monotone-increasing-digits) |
| 406. Queue Reconstruction by Height | Medium | [Link](https://leetcode.com/problems/queue-reconstruction-by-height) |

---

### 5. Greedy with Sorting

| Problem | Difficulty | Link |
|---------|------------|------|
| 455. Assign Cookies | Easy | [Link](https://leetcode.com/problems/assign-cookies) |
| 1353. Maximum Number of Events That Can Be Attended | Medium | [Link](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended) |
| 1029. Two City Scheduling | Medium | [Link](https://leetcode.com/problems/two-city-scheduling) |
| 1383. Maximum Performance of a Team | Hard | [Link](https://leetcode.com/problems/maximum-performance-of-a-team) |
| 1090. Largest Values From Labels | Medium | [Link](https://leetcode.com/problems/largest-values-from-labels) |

---

### 6. Coin Change & Currency Problems

| Problem | Difficulty | Link |
|---------|------------|------|
| 860. Lemonade Change | Easy | [Link](https://leetcode.com/problems/lemonade-change) |
| 881. Boats to Save People | Medium | [Link](https://leetcode.com/problems/boats-to-save-people) |
| 1414. Min Fibonacci Numbers Whose Sum Is K | Medium | [Link](https://leetcode.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k) |
| 1405. Longest Happy String | Medium | [Link](https://leetcode.com/problems/longest-happy-string) |

---

### 7. Graphs & MST (Greedy + Union-Find)

| Problem | Difficulty | Link |
|---------|------------|------|
| 1584. Min Cost to Connect All Points | Medium | [Link](https://leetcode.com/problems/min-cost-to-connect-all-points) |
| 684. Redundant Connection | Medium | [Link](https://leetcode.com/problems/redundant-connection) |
| 685. Redundant Connection II | Hard | [Link](https://leetcode.com/problems/redundant-connection-ii) |
| 1631. Path With Minimum Effort | Medium | [Link](https://leetcode.com/problems/path-with-minimum-effort) |

---

### 8. Miscellaneous Greedy Problems

| Problem | Difficulty | Link |
|---------|------------|------|
| 605. Can Place Flowers | Easy | [Link](https://leetcode.com/problems/can-place-flowers) |
| 1005. Maximize Sum Of Array After K Negations | Easy | [Link](https://leetcode.com/problems/maximize-sum-of-array-after-k-negations) |
| 861. Score After Flipping Matrix | Medium | [Link](https://leetcode.com/problems/score-after-flipping-matrix) |
| 1046. Last Stone Weight | Easy | [Link](https://leetcode.com/problems/last-stone-weight) |
| 1647. Minimum Deletions to Make Char Frequencies Unique | Medium | [Link](https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique) |

---

## IMPORTANT LEETCODE GREEDY PROBLEMS FOR REVISION

These are **frequently asked LeetCode greedy problems** that are great for interviews:

| Problem | Link |
|--------|------|
| Jump Game | [LeetCode 55](https://leetcode.com/problems/jump-game) |
| Jump Game II | [LeetCode 45](https://leetcode.com/problems/jump-game-ii) |
| Gas Station | [LeetCode 134](https://leetcode.com/problems/gas-station) |
| Candy | [LeetCode 135](https://leetcode.com/problems/candy) |
| Reorganize String | [LeetCode 767](https://leetcode.com/problems/reorganize-string) |
| Partition Labels | [LeetCode 763](https://leetcode.com/problems/partition-labels) |
| Task Scheduler | [LeetCode 621](https://leetcode.com/problems/task-scheduler) |
| Minimum Number of Arrows to Burst Balloons | [LeetCode 452](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons) |
| Non-overlapping Intervals | [LeetCode 435](https://leetcode.com/problems/non-overlapping-intervals) |
| Monotone Increasing Digits | [LeetCode 738](https://leetcode.com/problems/monotone-increasing-digits) |
| Remove K Digits | [LeetCode 402](https://leetcode.com/problems/remove-k-digits) |
| Can Place Flowers | [LeetCode 605](https://leetcode.com/problems/can-place-flowers) |
| Lemonade Change | [LeetCode 860](https://leetcode.com/problems/lemonade-change) |
| Wiggle Subsequence | [LeetCode 376](https://leetcode.com/problems/wiggle-subsequence) |

---
