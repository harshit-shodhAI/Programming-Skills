Write a program for each of the following tasks:

1.  **Recursive Array Sum:**

    - Write a recursive function `int sumArray(int arr[], int size)` that calculates the sum of elements in an integer array.
    - **Base Case:** If `size` is 0, the sum is 0.
    - **Recursive Step:** The sum is the last element (`arr[size - 1]`) plus the sum of the rest of the array (`sumArray(arr, size - 1)`).
    - Test it in `main` with a sample array.

2.  **Greatest Common Divisor (GCD) - Recursive:**

    - Write a recursive function `int gcd(int a, int b)` using the Euclidean algorithm.
    - **Logic:**
      - **Base Case:** If `b` is 0, the GCD is `a`.
      - **Recursive Step:** Otherwise, the GCD is `gcd(b, a % b)`.
    - In `main`, find the GCD of two numbers like `54` and `24` (the result should be 6).

3.  **Backtracking: Generate Parentheses:**
    - Write a function to generate all valid combinations of `n` pairs of parentheses. For `n=2`, the output should be `(())` and `()()`.
    - **Function Signature:** `void generate(int open, int close, string current_str);` where `open` is the count of remaining open parentheses to place, and `close` is the count of remaining close parentheses.
    - **Logic:**
      - **Base Case:** If `open` and `close` are both 0, you have a valid combination, so print `current_str`.
      - **Choice 1 (Add ')'):** If `close > open`, you can add a closing parenthesis. Recurse.
      - **Choice 2 (Add '('):** If `open > 0`, you can add an opening parenthesis. Recurse.
    - The initial call from `main` for `n=2` would be `generate(2, 2, "");`.
