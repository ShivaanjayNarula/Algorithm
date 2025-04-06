 Intuition Behind Intro Sort:
Start with Quick Sort – fast in average cases.

If recursion gets too deep, fall back to Heap Sort – avoids worst-case 
𝑂
(
𝑛
2
)
O(n 
2
 ).

Small subarrays? Use Insertion Sort – faster for small inputs.

It's used in C++ STL's std::sort(), making it very efficient in practice.
