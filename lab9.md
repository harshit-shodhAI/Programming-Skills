# Lab – Modern C++: A Smart Game Engine

### Task 1 – The Entity Factory (`std::unique_ptr`)

**Objective:** To manage the lifecycle of game objects automatically using `std::unique_ptr`, preventing memory leaks.

1.  Create a base class `Entity` with a `virtual` destructor that prints a message like `"Entity destroyed."`. Also, give it a `virtual void update() = 0;` pure virtual function.
2.  Create two derived classes, `Player` and `Enemy`, which inherit from `Entity`. Implement the `update()` method in each to print a class-specific message (e.g., `"Player is updating..."`).
3.  Write a factory function: `unique_ptr<Entity> createEntity(const string& type);`. This function should:
    - If `type` is `"player"`, return `make_unique<Player>()`.
    - If `type` is `"enemy"`, return `make_unique<Enemy>()`.
    - Otherwise, return `nullptr`.
4.  In `main`, create a `vector<unique_ptr<Entity>>`. Use a loop to call your factory function several times to create a mix of players and enemies.
    - **Challenge:** You cannot copy `unique_ptr`. How do you get the pointer from the factory into the vector? You must use `std::move`.
5.  Finally, use a range-based `for` loop to call the `update()` method on every entity in your vector. Observe that when `main` finishes, all entity destructor messages are printed automatically.

### Task 2 – The Guild System (`std::shared_ptr`)

**Objective:** To manage a resource that is co-owned by multiple objects using `std::shared_ptr`.

1.  Create a `class Guild { public: string name; ... };`.
2.  Create a `class Character { ... };` that holds a `shared_ptr<Guild>` as a member variable to represent the guild it belongs to.
3.  In `main`:
    - Create a single `Guild` called "The Silver Hand" using `make_shared`.
    - Create a `vector` of `Character` objects.
    - Create three characters, passing the same `shared_ptr` to the guild to each one. After creating each character, print the `use_count()` of the `shared_ptr` to see the reference count increase.
    - Simulate one character leaving the guild by clearing their `shared_ptr` (`myCharacter.guild.reset();`). Check the `use_count()` again.
    - Clear the entire vector of characters. The `use_count()` should drop, and the `Guild` object should be automatically destroyed only when the last reference is gone.

### Task 3 – High Score Board (`std::pair` and Lambdas)

**Objective:** To sort a collection of complex data using `std::sort` and a custom lambda function.

1.  Create a `vector` of `pair<string, int>` to represent a high score list (Player Name, Score). Populate it with at least five entries in a random order.
2.  Your task is to sort this high score board. The primary sorting key is the **score in descending order** (highest first). The secondary sorting key is the **player name in alphabetical order** (for players with the same score).
3.  Use `std::sort` with a single, powerful lambda function to implement this custom sorting logic.
    - **Hint:** Inside your lambda, first check if the scores (`a.second` and `b.second`) are different. If they are, return the result of that comparison. If they are the same, _then_ return the result of comparing the names (`a.first` and `b.first`).
4.  Use a range-based `for` loop and C++17 structured bindings (`for (const auto& [name, score] : high_scores)`) to print the final, sorted high score board.

### Task 4 – Inventory Filtering (`std::tuple` and Lambdas)

**Objective:** To store and filter complex data using modern utilities.

1.  Define a type alias for your inventory item: `using Item = tuple<string, string, int>;` (Name, Type, Value).
2.  Create a `vector<Item>` representing a player's inventory. Populate it with several items (e.g., `{"Iron Sword", "Weapon", 50}`, `{"Health Potion", "Potion", 20}`, `{"Iron Shield", "Armor", 40}`).
3.  **Part A:** Use `std::for_each` and a lambda with structured bindings to print the details of every item in the inventory in a formatted way.
4.  **Part B:** The player wants to find all their "Weapon" items. Create a new `vector<Item>` called `weapons`. Use a range-based `for` loop and `std::get` inside an `if` statement to iterate through the main inventory and copy only the items of type "Weapon" into your new vector.
5.  **Part C (Challenge):** Calculate the total value of all items of type "Potion". Use `std::accumulate` (`#include <numeric>`) and a lambda function to achieve this. The lambda will need to capture the current sum and add the value of the current item if it's a "Potion".

### Task 5 – The Grand Finale: A Smart Targeting System

**Objective:** To combine smart pointers, modern utilities, and algorithms to solve a complex logical problem.

1.  Reuse the `Entity` class hierarchy from Task 1. Add a `pair<int, int>` member to the base `Entity` class to store its `(x, y)` position.
2.  In `main`, create a `vector<unique_ptr<Entity>>` representing all entities on a battlefield. Give each one a different position.
3.  Create a `Player` entity separately, representing the player's character, at a specific position (e.g., `(0, 0)`).
4.  **Your task is to find the enemy closest to the player.**
    - You cannot use a simple `for` loop. You must use the `std::min_element` algorithm (`#include <algorithm>`).
    - `min_element` requires a custom comparison function. You must provide a **lambda function** as its third argument.
    - This lambda must **capture** the player's position.
    - Inside the lambda, it will take two `const unique_ptr<Entity>&` as arguments. It must calculate the squared Euclidean distance from the player to each of these two entities and return `true` if the first is closer than the second.
5.  The `min_element` algorithm will return an iterator. Dereference the iterator to get a reference to the `unique_ptr` of the closest enemy and print a message confirming you found it.
