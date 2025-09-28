# Lab – Applied Recursion and Algorithmic Thinking

### Task 1 – Recursive Max Element Finder

Finding the maximum element in a collection is a classic "divide and conquer" task. Implementing it recursively helps build the mindset for problems like `Pow(x, n)`.

- **Function Signature:** `int findMax(const vector<int>& nums, int index);`
- **Logic:**
  1.  **Base Case:** If you are at the last element (`index == nums.size() - 1`), that element is the maximum of the "sub-vector" you're looking at, so return it.
  2.  **Recursive Step:** Find the maximum of the _rest_ of the vector by making a recursive call: `int maxOfRest = findMax(nums, index + 1);`.
  3.  Compare the current element `nums[index]` with `maxOfRest` and return the larger of the two.
- **In `main`:** Test your function on a sample vector like `{3, 8, 2, 9, 5}`. The initial call should be `findMax(myVector, 0)`.

### Task 2 – Partition Array In-Place

Many fast array algorithms rely on partitioning. This task teaches the two-pointer technique used in algorithms like Quicksort and is helpful for thinking about `4sum`.

- **Function Signature:** `void partition(vector<int>& nums, int pivot);`
- **Goal:** Rearrange the vector `nums` such that all elements less than `pivot` come before all elements greater than or equal to `pivot`. The internal order doesn't matter.
- **Logic:** Use two pointers, `left` starting at the beginning and `right` at the end. Move them towards each other, swapping when `nums[left] >= pivot` and `nums[right] < pivot`.
- **In `main`:** Create a vector `{5, 2, 9, 1, 7, 3, 8}` and partition it around `pivot = 5`. The result could be `{3, 2, 1, 5, 7, 9, 8}`.

### Task 3 – Simplified `stringToInt`

This is a direct, focused warm-up for the `string to integer (atoi)` assignment problem, stripping away the hardest edge cases so you can focus on the core conversion logic.

- **Function Signature:** `int simpleAtoi(const string& str);`
- **Requirements:**
  1.  Handle an optional leading `'-'` sign.
  2.  Iterate through the string, converting digit characters to integer values.
  3.  Build the final integer. Stop as soon as you hit a non-digit character.
  4.  You **do not** need to handle whitespace or overflow.
- **In `main`:** Test with `"54"`, `"-102"`, and `"392ab1"`. The last one should return `392`.

### Task 4 – Backtracking: Generate All Subsets (Powerset)

This is the quintessential backtracking problem. Mastering this "include/exclude" pattern is the key to solving harder combinatorial problems like `4sum`.

- **Function Signature:** `void generateSubsets(const vector<int>& nums, int index, vector<int>& current_subset);`
- **Goal:** Given a vector like `{1, 2, 3}`, print all possible subsets: `{}`, `{1}`, `{2}`, `{3}`, `{1, 2}`, `{1, 3}`, `{2, 3}`, `{1, 2, 3}`.
- **Logic:** For the element at `nums[index]`:
  1.  **Exclude it:** Make a recursive call for the rest of the numbers: `generateSubsets(nums, index + 1, current_subset);`.
  2.  **Include it:** Add `nums[index]` to `current_subset`, then make a recursive call: `generateSubsets(nums, index + 1, current_subset);`.
  3.  **Backtrack:** Remove `nums[index]` from `current_subset` after the "include" path returns.
- **Base Case:** When `index` reaches the end of `nums`, print the `current_subset`.

### Task 5 – The Grand Finale: Combination Sum

This problem builds directly on Task 4 and is the perfect preparation for `4sum`. Given a set of numbers and a target, you must find all unique combinations that sum up to that target.

- **Function Signature:** `void findCombinations(const vector<int>& candidates, int target, vector<int>& current_combo, int start_index);`
- **Goal:** Given a vector of unique candidates and a target, print all unique combinations that sum to the target. Each number can be used only once.
- **Logic:**
  1.  **Base Case 1:** If `target == 0`, you have found a valid combination. Print it and return.
  2.  **Base Case 2:** If `target < 0`, this path is invalid, so return.
  3.  **Recursive Step (Loop):** Loop from `start_index` to the end of the `candidates` vector. For each number:
      a. **Choose:** Add the number to `current_combo`.
      b. **Explore:** Recurse with the updated target (`target - number`) and the next index (`i + 1`).
      c. **Backtrack:** Remove the number from `current_combo` to explore other possibilities.
- **In `main`:** For `candidates = {2, 3, 5, 7}` and `target = 8`, your program should find and print the combination `{3, 5}`.
