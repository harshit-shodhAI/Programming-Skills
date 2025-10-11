Write a program for each of the following tasks:

1.  **"Safe" Array Wrapper:**

    - Create a simple class `IntArray` that "wraps" a built-in C-style array.
    - It should have a **private** member: `int data[10];`.
    - Write a **public** member function `void setValue(int index, int value);`.
      - This function should check if the `index` is valid (i.e., between 0 and 9).
      - If the `index` is valid, it sets the value.
      - If the `index` is out of bounds, it should **`throw`** an integer representing the invalid index.
    - In `main`, create an `IntArray` object. Use a `try...catch` block.
      - Inside the `try` block, attempt to set a value at a valid index and then at an invalid index (e.g., index 15).
      - The `catch` block should be written to catch an `int` and print an error message that includes the invalid index it caught.

2.  **User Profile Validation:**
    - Create a `UserProfile` class.
    - Write a **public** member function `void setUsername(string name);`.
      - This function should check if the `name` is at least 4 characters long.
      - If it is, set a private member variable.
      - If it's too short, **`throw std::invalid_argument("Username is too short.");`**.
    - Write another **public** member function `void setAge(int age);`.
      - This function should check if the `age` is 18 or older.
      - If it is, set a private member variable.
      - If the user is too young, **`throw std::out_of_range("User must be 18 or older.");`**.
    - In `main`, use a `try...catch` block.
      - Inside the `try` block, create a `UserProfile` object and try setting a valid username, then an invalid age, and then an invalid username.
      - The `catch` block should be written to catch `const std::exception& e`. Inside the block, print the message from the exception by calling `e.what()`. This single `catch` block should be able to handle both types of errors.
