# Lecture 01 — Foundations of Problem Solving

## Topic
Finding the Sum of All Subarrays

## Approaches Covered

1. **Naive Approach**
   - Generate every subarray and calculate its sum.
   - Time Complexity: `O(N³)`

2. **Two-Loop Approach**
   - Maintain the current subarray sum while expanding the end point.
   - Time Complexity: `O(N²)`

3. **Contribution Technique**
   - Calculate how many times each element contributes to the sum.
   - Time Complexity: `O(N)`

## Key Formula

For an element at index `i` in an array of size `N`:

```text
Number of occurrences = (i + 1) × (N - i)
Total Sum = Σ A[i] × (i + 1) × (N - i)
