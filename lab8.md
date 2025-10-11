# Lab – STL Power-Solving: Advanced Algorithmic Challenges

### Task 1 – Group Anagrams (`std::map` and `std::sort`)

**Objective:** To use `std::map` with a creative key to group items. This problem shows how a hash map can make a complex grouping task incredibly efficient.

**Problem:** Given a vector of strings, group the anagrams together. You can return the answer in any order. An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

- **Function Signature:** `vector<vector<string>> groupAnagrams(const vector<string>& strs);`
- **Hint:** How can you generate a unique "signature" or key for every group of anagrams? What happens if you sort the letters of a word? Use a `map` where the key is this signature and the value is a vector of the original strings that match it.

**Example:**

- Input: `{"eat", "tea", "tan", "ate", "nat", "bat"}`
- Output: `[ ["bat"], ["nat","tan"], ["ate","eat","tea"] ]`

### Task 2 – K Closest Points to Origin (`std::sort` with Custom Lambda)

**Objective:** To use `std::sort` with a custom comparison function (lambda) to sort objects based on a calculated property.

**Problem:** Given a vector of points where `points[i] = [xi, yi]`, and an integer `k`, return the `k` closest points to the origin `(0, 0)`. The distance between two points is the Euclidean distance. You may return the answer in any order.

- **Function Signature:** `vector<vector<int>> kClosest(vector<vector<int>>& points, int k);`
- **Hint:** You don't need to calculate the actual square root for the distance; comparing the squared distances (`x^2 + y^2`) is sufficient and faster. Write a lambda function that tells `std::sort` how to compare two points based on their squared distance from the origin. After sorting, the first `k` elements are your answer.

**Example:**

- Input: `points = {{3,3},{5,-1},{-2,4}}`, `k = 2`
- Output: `{{3,3},{-2,4}}` (or `{{-2,4},{3,3}}`)

### Task 3 – Valid Parentheses (`std::stack`)

**Objective:** To use the Last-In, First-Out (LIFO) property of a `std::stack` to validate a nested structure, a classic application.

**Problem:** Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid. An input string is valid if:

1.  Open brackets must be closed by the same type of brackets.
2.  Open brackets must be closed in the correct order.

- **Function Signature:** `bool isValid(const string& s);`
- **Hint:** Iterate through the string. When you see an opening bracket, `push` its corresponding closing bracket onto a stack. When you see a closing bracket, check if the stack is empty or if the bracket doesn't match the one at the `top()` of the stack. If either is true, the string is invalid. If you finish the loop, what must be true about the stack for the string to be valid?

**Example:**

- Input: `"{[]}"` -> Output: `true`
- Input: `"(]"` -> Output: `false`

### Task 4 – Backspace String Compare (`std::stack` or Two Pointers)

**Objective:** To simulate a string-building process. This problem can be solved with the two-pointer technique you know, but it has a beautifully simple solution using a `std::stack`.

**Problem:** Given two strings `s` and `t`, return `true` if they are equal when both are typed into empty text editors. `'#'` means a backspace character. Note that after backspacing an empty text, the text will continue empty.

- **Function Signature:** `bool backspaceCompare(const string& s, const string& t);`
- **Hint (Stack approach):** Write a helper function that takes a string and returns the "final" string. Inside this helper, iterate through the input string. If the character is not a `'#'`, `push` it onto a stack of characters. If it _is_ a `'#'` and the stack is not empty, `pop()` from the stack. Finally, build the result string from the stack. Compare the results of calling this helper on `s` and `t`.

**Example:**

- Input: `s = "ab#c"`, `t = "ad#c"` -> Output: `true` (Both become `"ac"`)
- Input: `s = "a##c"`, `t = "#a#c"` -> Output: `true` (Both become `"c"`)

### Task 5 – The Grand Finale: Number of Islands (`std::queue` for BFS)

**Objective:** To solve a classic grid traversal problem by combining your knowledge of 2D vectors (grids) with the power of a `std::queue` to implement a Breadth-First Search (BFS).

**Problem:** Given an `m x n` 2D grid of characters where `'1'`s are land and `'0'`s are water, return the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.

- **Function Signature:** `int numIslands(vector<vector<char>>& grid);`
- **Hint:** Iterate through every cell of the grid. If you find a `'1'`, you've found a new island. Increment your island count, and then start a BFS to find all connected parts of this island. For the BFS:
  1.  Create a `queue` of coordinates (`pair<int, int>`).
  2.  Push the starting coordinate onto the queue and change its value in the grid to `'0'` (to mark it as visited).
  3.  While the queue is not empty, `pop` a coordinate, and for each of its four neighbors (up, down, left, right), if the neighbor is within bounds and is a `'1'`, change it to `'0'` and `push` it onto the queue.
      This process "sinks" the entire island you just found, so you won't count it again.

**Example:**

- Input:
  ```
  { {'1','1','0','0','0'},
    {'1','1','0','0','0'},
    {'0','0','1','0','0'},
    {'0','0','0','1','1'} }
  ```
- Output: `3`
