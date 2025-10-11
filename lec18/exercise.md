Write a program for each of the following tasks:

1.  **Student Roster Management:**

    - **Goal:** Use STL algorithms and a custom lambda function to sort a `vector` of `structs`.
    - **Instructions:**
      1.  Define a simple `struct Student { string name; int score; };`.
      2.  Create a `vector<Student>` and populate it with at least four students with different names and scores.
      3.  First, use `std::sort` to sort the vector alphabetically by student name. You'll need to provide a **lambda function** as the third argument to `std::sort` to tell it how to compare two `Student` objects.
      4.  Print the roster to show it's sorted by name.
      5.  Next, use `std::sort` again, but this time sort the vector by score in **descending** order (highest score first). You will need a different lambda function for this.
      6.  Print the roster again to show it's sorted by score.

2.  **Vector Data Processing:**
    - **Goal:** Use multiple STL algorithms to find, remove, and calculate data in a `vector`.
    - **Instructions:**
      1.  Create a `vector<int>` and initialize it with some numbers, including duplicates (e.g., `{10, 25, 40, 55, 25, 30, 40}`).
      2.  **Part A (Sum):** Use `std::accumulate` to calculate and print the sum of all elements in the vector.
      3.  **Part B (Find and Erase):** Ask the user for a number to remove. Use `std::find` to get an iterator to the first occurrence of that number. If the number is found (i.e., the iterator is not `v.end()`), use that iterator to `erase` the element from the vector.
      4.  **Part C (Filter and Count):** Use `std::count_if` (a more advanced version of `find`) with a lambda function to count how many numbers in the vector are greater than 30. Print the count.
      5.  Print the final state of the vector.
