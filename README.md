# LeetCode Solutions

My solutions to LeetCode problems, written in **C++**. Each problem lives in its own folder with the solution file and a copy of the problem statement, so the repo doubles as a searchable study log.

## Progress

| Difficulty | Solved |
|---|---:|
| 🟢 Easy | 16 |
| 🟡 Medium | 10 |
| 🔴 Hard | 2 |
| **Total** | **28** |

## Topics covered

| Area | Problems | Techniques practiced |
|---|---:|---|
| [Linked Lists](#linked-lists) | 13 | Two pointers, Floyd's cycle detection, in-place reversal, recursion |
| [Stacks & Monotonic Stacks](#stacks--monotonic-stacks) | 5 | Monotonic stack, bracket matching, O(1) design, data streams |
| [Trees](#trees) | 4 | Recursive DFS (in/pre/post-order), BFS with a queue |
| [Arrays, Strings & Math](#arrays-strings--math) | 6 | Hash tables, sorting, Boyer–Moore voting, string searching, divide and conquer |

## Problems

### Linked Lists

_Pointer manipulation, in-place reversal, and cycle detection._

| # | Problem | Difficulty | Topics | Solution |
|---:|---|:---:|---|:---:|
| 19 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list) | 🟡 Medium | Two Pointers, Linked List | [C++](./0019-remove-nth-node-from-end-of-list/0019-remove-nth-node-from-end-of-list.cpp) |
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists) | 🟢 Easy | Linked List, Recursion | [C++](./0021-merge-two-sorted-lists/0021-merge-two-sorted-lists.cpp) |
| 24 | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs) | 🟡 Medium | Linked List, Recursion | [C++](./0024-swap-nodes-in-pairs/0024-swap-nodes-in-pairs.cpp) |
| 83 | [Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list) | 🟢 Easy | Linked List | [C++](./0083-remove-duplicates-from-sorted-list/0083-remove-duplicates-from-sorted-list.cpp) |
| 92 | [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii) | 🟡 Medium | Linked List | [C++](./0092-reverse-linked-list-ii/0092-reverse-linked-list-ii.cpp) |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle) | 🟢 Easy | Hash Table, Two Pointers, Linked List, Floyd's Cycle Finding Algorithm | [C++](./0141-linked-list-cycle/0141-linked-list-cycle.cpp) |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii) | 🟡 Medium | Hash Table, Two Pointers, Linked List, Floyd's Cycle Finding Algorithm | [C++](./0142-linked-list-cycle-ii/0142-linked-list-cycle-ii.cpp) |
| 160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists) | 🟢 Easy | Hash Table, Two Pointers, Linked List | [C++](./0160-intersection-of-two-linked-lists/0160-intersection-of-two-linked-lists.cpp) |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list) | 🟢 Easy | Linked List, Recursion | [C++](./0206-reverse-linked-list/0206-reverse-linked-list.cpp) |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list) | 🟢 Easy | Two Pointers, Linked List, Recursion, Stack | [C++](./0234-palindrome-linked-list/0234-palindrome-linked-list.cpp) |
| 328 | [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list) | 🟡 Medium | Linked List | [C++](./0328-odd-even-linked-list/0328-odd-even-linked-list.cpp) |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list) | 🟢 Easy | Two Pointers, Linked List | [C++](./0876-middle-of-the-linked-list/0876-middle-of-the-linked-list.cpp) |
| 1290 | [Convert Binary Number in a Linked List to Integer](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer) | 🟢 Easy | Math, Linked List | [C++](./1290-convert-binary-number-in-a-linked-list-to-integer/1290-convert-binary-number-in-a-linked-list-to-integer.cpp) |

### Stacks & Monotonic Stacks

_Bracket matching, constant-time design problems, and next-greater-style patterns._

| # | Problem | Difficulty | Topics | Solution |
|---:|---|:---:|---|:---:|
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses) | 🟢 Easy | String, Stack, Bracket Sequences | [C++](./0020-valid-parentheses/0020-valid-parentheses.cpp) |
| 84 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram) | 🔴 Hard | Array, Stack, Monotonic Stack, Range Minimum/Maximum Query | [C++](./0084-largest-rectangle-in-histogram/0084-largest-rectangle-in-histogram.cpp) |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack) | 🟡 Medium | Stack, Design | [C++](./0155-min-stack/0155-min-stack.cpp) |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i) | 🟢 Easy | Array, Hash Table, Stack, Monotonic Stack | [C++](./0496-next-greater-element-i/0496-next-greater-element-i.cpp) |
| 901 | [Online Stock Span](https://leetcode.com/problems/online-stock-span) | 🟡 Medium | Stack, Design, Monotonic Stack, Data Stream | [C++](./0901-online-stock-span/0901-online-stock-span.cpp) |

### Trees

_All the classic traversals: DFS (in/pre/post-order) and BFS (level-order)._

| # | Problem | Difficulty | Topics | Solution |
|---:|---|:---:|---|:---:|
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal) | 🟢 Easy | Stack, Tree, Depth-First Search, Binary Tree | [C++](./0094-binary-tree-inorder-traversal/0094-binary-tree-inorder-traversal.cpp) |
| 102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal) | 🟡 Medium | Tree, Binary Tree, Breadth-First Search | [C++](./0102-binary-tree-level-order-traversal/0102-binary-tree-level-order-traversal.cpp) |
| 144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal) | 🟢 Easy | Stack, Tree, Depth-First Search, Binary Tree | [C++](./0144-binary-tree-preorder-traversal/0144-binary-tree-preorder-traversal.cpp) |
| 145 | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal) | 🟢 Easy | Stack, Tree, Depth-First Search, Binary Tree | [C++](./0145-binary-tree-postorder-traversal/0145-binary-tree-postorder-traversal.cpp) |

### Arrays, Strings & Math

_Counting, voting algorithms, string matching, and binary-search-style reasoning._

| # | Problem | Difficulty | Topics | Solution |
|---:|---|:---:|---|:---:|
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays) | 🔴 Hard | Array, Divide and Conquer, Binary Search | [C++](./0004-median-of-two-sorted-arrays/0004-median-of-two-sorted-arrays.cpp) |
| 7 | [Reverse Integer](https://leetcode.com/problems/reverse-integer) | 🟡 Medium | Math | [C++](./0007-reverse-integer/0007-reverse-integer.cpp) |
| 28 | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string) | 🟢 Easy | String, Two Pointers, String Matching, Z Algorithm, Knuth–Morris–Pratt Algorithm, Boyer–Moore String-Search Algorithm | [C++](./0028-find-the-index-of-the-first-occurrence-in-a-string/0028-find-the-index-of-the-first-occurrence-in-a-string.cpp) |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element) | 🟢 Easy | Array, Hash Table, Sorting, Counting, Boyer–Moore Majority Vote Algorithm, Divide and Conquer | [C++](./0169-majority-element/0169-majority-element.cpp) |
| 229 | [Majority Element II](https://leetcode.com/problems/majority-element-ii) | 🟡 Medium | Array, Hash Table, Sorting, Counting, Boyer–Moore Majority Vote Algorithm | [C++](./0229-majority-element-ii/0229-majority-element-ii.cpp) |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram) | 🟢 Easy | Hash Table, Sorting, String | [C++](./0242-valid-anagram/0242-valid-anagram.cpp) |

## Repository structure

```
leetcode-solutions/
├── 0206-reverse-linked-list/
│   ├── 0206-reverse-linked-list.cpp   # solution
│   └── README.md                      # problem statement
├── 0155-min-stack/
│   └── ...
├── README.md
└── stats.json                         # solved-count metadata
```

Folders are named `<4-digit problem number>-<problem-slug>`, so they sort in problem order.

## Running a solution

Solutions are written in LeetCode's format (a `Solution` class, with no `main`), so they won't compile on their own. To test one locally, paste it into a small driver:

```cpp
#include <bits/stdc++.h>
using namespace std;

// paste the contents of the solution file here

int main() {
    Solution s;
    // call s.yourMethod(...) with a sample input and print the result
}
```

```bash
g++ -std=c++17 -O2 main.cpp -o main && ./main
```

Problems that use `ListNode` or `TreeNode` need those struct definitions added above the `Solution` class.


## Notes

- Solutions are for learning and practice; problem statements belong to [LeetCode](https://leetcode.com).
- Folder and file structure is generated by a LeetCode-sync extension, so new solutions land automatically. If it regenerates this README, keep a copy of this version.
