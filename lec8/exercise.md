Write a program for each of the following tasks:

1.  **C-Array – Find the Second Largest Element**

    - Declare and initialize an integer array of size `n` (e.g., `n=10`) with some values, including duplicates.
    - Write code to find the _second largest_ unique value in the array.
    - For example, in `{10, 5, 8, 20, 15, 20, 8}`, the largest is `20` and the second largest is `15`.
    - Print the second largest value. (Hint: You will likely need to keep track of both the largest and second-largest values as you loop through the array).

2.  **`std::vector` – Filter Out Odd Numbers**

    - Create an empty `std::vector` of integers.
    - Ask the user to enter numbers until they input `-1`, and `push_back` each number into the vector.
    - Now, iterate through the vector and **remove** all odd numbers from it.
    - Finally, print the contents of the modified vector.
    - **Challenge:** Removing elements from a vector while iterating through it with a standard `for (int i=0; ...)` loop can cause you to skip elements. Think carefully about how you handle the loop counter or consider iterating in a different way (e.g., backwards).

3.  **2D C-Array – Sum of the Main Diagonal**

    - Create a 3x3 integer matrix with some initial values.
    - Calculate and print the sum of the elements on its "main diagonal" (the elements from the top-left to the bottom-right).
    - For the matrix below, the diagonal elements are 1, 5, and 9. The sum would be 15.
      ````
      { {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9} }
      ```    *   (Hint: What do you notice about the row and column index for every element on the main diagonal?)
      ````

4.  **C-style String – Reverse a String In-Place**

    - Create a C-style string (a `char` array) initialized with a word, e.g., `char my_string[] = "turtle";`.
    - Write code to reverse this string **"in-place"**, meaning you modify the original array directly without creating a second array.
    - The reversed string should be `"eltrut"`.
    - Print the string after reversal.
    - (Hint: Think about swapping the first character with the last, the second with the second-to-last, and so on. You'll need to know the length of the string and be careful where you stop swapping).

5.  **`std::string` – Count Words in a Sentence**
    - Ask the user to enter a full sentence (which may have multiple spaces between words) and store it in a `std::string`.
    - Write a program that counts how many "words" are in the sentence. A word is any sequence of non-space characters.
    - For example, `"  C++   is    fun!  "` should result in 3 words.
    - Print the final word count.
    - (Hint: You'll need to loop through the string and keep track of whether you are currently "inside" a word or in a block of spaces).
