Problem Statement:
Given an array of integers, find the contiguous subarray (containing at least one number) which has the largest sum, and return that sum.

Kadane’s Algorithm Intuition:
You keep track of:

max_ending_here: the maximum subarray sum ending at the current position

max_so_far: the overall maximum found so far

At each step:

You either extend the previous subarray or start a new subarray from the current element — whichever is better.

Time Complexity:
O(n)

Space Complexity:
O(1)
