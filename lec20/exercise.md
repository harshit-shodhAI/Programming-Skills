Write a program for each of the following tasks:

1.  **Multiple Return Values with `std::tuple`:**

    - **Goal:** Write a function that returns multiple pieces of information and unpack it using structured bindings.
    - **Instructions:**
      1.  Write a function `tuple<int, double, int> calculateStats(const vector<int>& data);`.
      2.  This function should take a vector of integers and calculate the sum, the average, and the maximum value. It should return these three results in a `std::tuple`.
      3.  Handle the edge case of an empty input vector (you can return `{0, 0.0, 0}`).
      4.  In `main`, create a sample vector of integers.
      5.  Call your function and use C++17 **structured bindings** to unpack the returned tuple directly into three named variables: `int sum`, `double average`, `int max_val`.
      6.  Print the results.

2.  **Advanced Data Filtering with Lambdas:**
    - **Goal:** Use STL algorithms with lambda expressions to perform complex queries on a collection of data.
    - **Instructions:**
      1.  Define a `struct Product { string name; double price; int stock; };`.
      2.  Create a `vector<Product>` and populate it with several products.
      3.  **Part A:** Use `std::sort` with a lambda function to sort the products by price from most expensive to least expensive. Print the sorted list.
      4.  **Part B:** Use `std::count_if` with a lambda to count how many products are out of stock (i.e., `stock == 0`). Print the count.
      5.  **Part C:** Use `std::find_if` with a lambda to find the first product with a price greater than a certain value (e.g., 50.0). Capture this value in your lambda. If a product is found, print its name.
