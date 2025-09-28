# Test 2

# Question 1

A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

## Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]

## Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]

## Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]

# Question 2

Seven different symbols represent Roman numerals with the following values:

| Symbol | Value |
| ------ | ----- |
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Roman numerals are formed by appending the conversions of decimal place values from highest to lowest.  
Converting a decimal place value into a Roman numeral has the following rules:

1. **General Rule:**  
   If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.

2. **Subtractive Rule:**  
   If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol.  
   Examples:

   - 4 → IV (1 less than 5)
   - 9 → IX (1 less than 10)
   - 40 → XL
   - 90 → XC
   - 400 → CD
   - 900 → CM

3. **Repetition Rule:**  
   Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10.  
   Symbols V (5), L (50), and D (500) cannot be repeated.  
   If you need to append a symbol 4 times, use the subtractive form.

---

### Given an integer, convert it to a Roman numeral.

#### Example 1:

**Input:**  
`num = 3749`

**Output:**  
`"MMMDCCXLIX"`

**Explanation:**

- 3000 = MMM → 1000 (M) + 1000 (M) + 1000 (M)
- 700 = DCC → 500 (D) + 100 (C) + 100 (C)
- 40 = XL → 10 (X) less than 50 (L)
- 9 = IX → 1 (I) less than 10 (X)

Note: 49 is not "IL" because the conversion is based on decimal places.

---

#### Example 2:

**Input:**  
`num = 58`

**Output:**  
`"LVIII"`

**Explanation:**

- 50 = L
- 8 = VIII

---

#### Example 3:

**Input:**  
`num = 1994`

**Output:**  
`"MCMXCIV"`

**Explanation:**

- 1000 = M
- 900 = CM
- 90 = XC
- 4 = IV
