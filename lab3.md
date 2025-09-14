# Lab – Pointers, Memory, and Modern Data Structures

### Task 1 – Pointer Power: Min/Max Finder

Write a C++ function that finds both the minimum and maximum values in an integer array in a single pass. The function should not return a value (`void` return type). Instead, it should use **pointers** as output parameters to send the results back to `main`.

**Function Signature to Implement:**
`void findMinMax(int* arr, int size, int* outMin, int* outMax);`

**In `main`:**

1.  Create a sample integer array (e.g., `{5, 8, 3, 9, 4, 2, 7}`).
2.  Declare two integers, `minResult` and `maxResult`.
3.  Call your `findMinMax` function, passing it the array, its size, and the addresses of `minResult` and `maxResult`.
4.  Print the results.

**Example Run:**

```
Array: 5 8 3 9 4 2 7
Minimum: 2
Maximum: 9
```

(Hint: In the function, you will dereference `outMin` and `outMax` to assign the values you find.)

---

### Task 2 – `std::vector` Manipulation: Reverse in Place

Write a program that reverses the elements of a `std::vector` **"in-place"** (without creating a new vector).

1.  Create a `std::vector<int>` and initialize it with some values (e.g., `{1, 2, 3, 4, 5, 6}`).
2.  Write a loop that swaps the first element with the last, the second with the second-to-last, and so on, until the middle is reached.
3.  Print the vector before and after the reversal.

**Example Run:**

```
Before: 1 2 3 4 5 6
After:  6 5 4 3 2 1
```

(Hint: Use two indices, one starting from the beginning and one from the end, moving towards each other.) This logic is a warm-up for problems like "Rotate Array".

---

### Task 3 – 2D Array: Matrix Transposition

Write a program that computes the transpose of a 2x3 matrix. The transpose of a matrix is formed by turning its rows into columns.

1.  Declare a 2x3 integer matrix and initialize it with values.
2.  Declare a second 3x2 integer matrix to store the result.
3.  Using nested loops, copy the elements from the original matrix to the transposed matrix. The element at `original[i][j]` will be placed at `transposed[j][i]`.
4.  Print both the original and the transposed matrices.

**Example Run:**

**Original Matrix (2x3):**

```
1 2 3
4 5 6
```

**Transposed Matrix (3x2):**

```
1 4
2 5
3 6
```

---

### Task 4 – Dynamic Structs: Student Database

Create a simple student database that uses **dynamic memory allocation** for an array of `structs`.

1.  Define a `struct Student` with fields: `std::string name;` and `double gpa;`.
2.  Ask the user how many students they want to enter.
3.  Dynamically allocate an array of `Student` structs of that size using `new`.
4.  Loop through the array, asking for the name and GPA for each student.
5.  After collecting all the data, print a formatted list of all students.
6.  Finally, **free the allocated memory** using `delete[]`.

**Example Run:**

```
How many students? 3
Enter details for student 1:
Name: Priya
GPA: 8.9
Enter details for student 2:
Name: Rahul
GPA: 9.2
Enter details for student 3:
Name: Anjali
GPA: 8.5

Student Roster:
- Priya (GPA: 8.9)
- Rahul (GPA: 9.2)
- Anjali (GPA: 8.5)
```

---

### Task 5 – The Grand Finale: Inventory Search Function

This task combines pointers, structs, and functions to create a realistic search utility. You will build a system to manage a product inventory.

1.  Define a `struct Product` with fields: `int id;`, `std::string name;`, `double price;`.
2.  In `main`, create a **dynamic array** of `Product`s and fill it with at least 5 sample products.
3.  Write a search function with the following signature:
    `Product* findProductById(Product* inventory, int size, int searchId);`
4.  This function should:
    - Loop through the `inventory` array.
    - If a `Product` with a matching `searchId` is found, **return a pointer** to that `Product` struct in the array.
    - If no product is found after checking all of them, return `nullptr`.
5.  Back in `main`, call this function to search for a product ID that exists and one that doesn't.
6.  Check the returned pointer:
    - If it's not `nullptr`, dereference it and print the details of the found product.
    - If it is `nullptr`, print a "Product not found" message.
7.  Remember to `delete[]` the dynamic array at the end.

**Example Run:**

```
Searching for ID 102...
Found Product: ID=102, Name=Keyboard, Price=$75.5
Searching for ID 109...
Product not found.
```
