# Lab – Advanced Class Design: Statics and Error Handling

### Task 1 – The Singleton Logger

**Objective:** To implement a simplified Singleton pattern using static members, ensuring only one instance of a "service" exists.

Create a `Logger` class that can only be instantiated once.

- **Static Members (private):**
  - `static Logger* instance;` - A static pointer to hold the single instance. Initialize it to `nullptr`.
- **Constructor (private):**
  - Make the default constructor `private`. This is the key step that prevents anyone from creating a `Logger` object directly.
- **Static Function (public):**
  - `static Logger* getInstance();` - This is the only way to get a `Logger` object. The first time it's called, it should `new` up a `Logger`, store it in the `instance` pointer, and return it. On all subsequent calls, it should simply return the existing `instance`.
- **Member Function (public):**
  - `void log(const string& message);` - Prints the message to the console, prefixed with "[LOG]: ".

**In `main`:**

1.  Get the logger instance twice: `Logger* logger1 = Logger::getInstance();` and `Logger* logger2 = Logger::getInstance();`.
2.  Check if `logger1` and `logger2` point to the same memory address. If they do, your Singleton works.
3.  Use both pointers to log messages and observe that they are using the same object.

### Task 2 – The "Safe" Math Library

**Objective:** To create a utility class with static functions that throws exceptions for invalid mathematical operations.

Create a class `SafeMath` that contains only static methods. You should never need to create an object of this class.

- **Static Functions (public):**
  - `static double divide(double a, double b);` - If `b` is `0`, this function must **`throw std::invalid_argument("Division by zero is not allowed.")`**. Otherwise, it returns the result.
  - `static double squareRoot(double a);` - If `a` is negative, this function must **`throw std::invalid_argument("Cannot calculate square root of a negative number.")`**. Otherwise, it returns the square root (`#include <cmath>`).

**In `main`:**

1.  Use a `try...catch` block.
2.  Inside the `try` block, call `SafeMath::divide()` with valid and invalid inputs.
3.  Then, call `SafeMath::squareRoot()` with valid and invalid inputs.
4.  The `catch` block should catch `const std::exception& e` and print the error message from `e.what()`.

### Task 3 – The Game Arena

**Objective:** To manage a roster of players using a combination of static data and instance data, enforcing game rules.

Create a `Player` class.

- **Static Members (private):**
  - `static const int MAX_PLAYERS = 10;` - The maximum number of players allowed in the game.
  - `static int current_player_count;` - A counter for players currently in the game.
- **Member Variables (private):**
  - `string username;`
- **Constructor / Destructor (public):**
  - The **constructor** should check `current_player_count`. If the game is full (`>= MAX_PLAYERS`), it must **`throw std::runtime_error("Game is full. Cannot add more players.")`**. Otherwise, it increments the counter.
  - The **destructor** should decrement `current_player_count`.
- **Static Function (public):**
  - `static int getPlayerCount();` - Returns the current player count.

**In `main`:**

1.  Use a `try...catch` block.
2.  Inside the `try` block, use a `vector` of `Player` pointers and a loop to dynamically create 11 players. The 11th attempt should trigger the exception.
3.  The `catch` block should handle the `std::runtime_error` and print a message.
4.  Print the final player count using the static method to confirm it is 10.
5.  **Crucial:** Remember to `delete` the players you successfully created.

### Task 4 – Custom Exception for a Vending Machine

**Objective:** To create and use a custom exception class for more descriptive error handling.

1.  First, create a custom exception class that inherits from `std::runtime_error`:
    ```cpp
    class OutOfStockException : public std::runtime_error {
    public:
        OutOfStockException(const string& item_name)
            : std::runtime_error("Item is out of stock: " + item_name) {}
    };
    ```
2.  Now, create a `VendingMachine` class.
    - It should have a `map<string, int> inventory;` to store item names and their quantities.
    - The constructor can populate the inventory (e.g., `"Cola", 5`, `"Chips", 3`).
    - A method `void vend(const string& item_name);` which:
      - Checks if the item exists and its quantity is `> 0`.
      - If so, it decrements the quantity and prints "Enjoy your [item_name]!".
      - If the item is in the map but its quantity is `0`, it must **`throw OutOfStockException(item_name);`**.
      - If the item is not in the map, `throw std::invalid_argument("Item not found.");`.

**In `main`:**

1.  Use a `try` block with two separate `catch` blocks.
2.  Attempt to vend a valid item, then an out-of-stock item, then an item that doesn't exist.
3.  The first `catch` block should handle `const OutOfStockException& e`.
4.  The second `catch` block should handle `const std::invalid_argument& e`.

### Task 5 – The Grand Finale: A Transaction System

**Objective:** To combine static state and exception handling to manage a system with finite, shared resources.

Create a simplified banking system.

1.  Create a `BankAccount` class.
    - **Static (private):** `static double total_bank_reserves;` (Initialize to a large number like 100000.0).
    - **Instance (private):** `double balance;`
    - **Constructor:** Initializes `balance`.
    - **`deposit(double amount)`:** Adds to `balance` and `total_bank_reserves`.
    - **`withdraw(double amount)`:** This is the critical method. It must check two conditions:
      1.  The instance `balance` must be sufficient. If not, `throw std::runtime_error("Insufficient personal funds.")`.
      2.  The bank's `total_bank_reserves` must be sufficient. If not, `throw std::runtime_error("Insufficient bank reserves for transaction.")`.
      - If both checks pass, it subtracts from both `balance` and `total_bank_reserves`.
    - **Static (public):** `static double getBankReserves();`.

**In `main`:**

1.  Create two `BankAccount` objects, `account1` (balance 1000) and `account2` (balance 500).
2.  Use a `try...catch` block.
3.  Perform a few valid transactions.
4.  Attempt a transaction that fails because of personal funds (e.g., `account2` tries to withdraw 600).
5.  Attempt a massive transaction that fails because of bank reserves (e.g., `account1` tries to withdraw 200000).
6.  The `catch` block should handle `const std::runtime_error& e`.
7.  After each transaction (or failed attempt), print the personal balances and the total bank reserves to see how the system state is changing.
