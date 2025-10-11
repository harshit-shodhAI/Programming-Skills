# Lab – Object-Oriented Design and Practice

### Task 1 – The `Player` State Machine

**Objective:** To create a simple class that manages its own internal state through methods.

Create a class named `Player`. A player has a health value and a score.

- **Member Variables (private):**
  - `string name;`
  - `int health;` (should be initialized to 100)
  - `int score;` (should be initialized to 0)
- **Member Functions (public):**
  - A **parameterized constructor** that takes the player's `name`.
  - `void takeDamage(int damage);` - Reduces the player's health. Health should **never go below 0**.
  - `void addScore(int points);` - Adds points to the player's score.
  - `void display();` - Prints the player's name, health, and score.

**In `main`:**

1.  Create a `Player` object.
2.  Call `takeDamage()` a few times, including once with a large amount (e.g., 150 damage) to test that health doesn't go below 0.
3.  Call `addScore()` a couple of times.
4.  Call `display()` to show the final state of the player.

### Task 2 – Encapsulation and Validation: The `InventoryItem`

**Objective:** To practice encapsulation by writing "setter" methods that protect the object's data from becoming invalid.

Create a class `InventoryItem`.

- **Member Variables (private):**
  - `string itemName;`
  - `int quantity;`
- **Member Functions (public):**
  - A **parameterized constructor** that initializes `itemName` and `quantity`. It should use the same validation as the setter for the initial quantity.
  - `void setName(string newName);`
  - `string getName();`
  - `void setQuantity(int newQuantity);` - This is the key method. It must ensure the quantity **is never set to a negative number**. If the input is negative, print an error and leave the quantity unchanged.
  - `int getQuantity();`

**In `main`:**

1.  Create an `InventoryItem` (e.g., "Health Potion", 10).
2.  Try to set the quantity to a valid number (e.g., 15).
3.  Try to set the quantity to an invalid number (e.g., -5).
4.  Print the final item name and quantity to verify the validation worked.

### Task 3 – Constructors and Logic: The `Triangle`

**Objective:** To use constructors to initialize an object and then use a member function to perform a logical check on that object's state.

Create a class `Triangle`.

- **Member Variables (private):**
  - `double side1, side2, side3;`
- **Member Functions (public):**
  - A **default constructor** that creates a valid equilateral triangle with sides of length 1.0.
  - A **parameterized constructor** that takes three `double` values for the sides.
  - `bool is_valid();` - Returns `true` if the three sides can form a valid triangle (the sum of any two sides must be greater than the third), otherwise `false`.
  - `string getType();` - If the triangle is not valid, return "Invalid". If it is valid, return "Equilateral", "Isosceles", or "Scalene".

**In `main`:**

1.  Create a `Triangle` using the default constructor and print its type.
2.  Create a `Triangle` with sides (3, 4, 5) and print its type.
3.  Create a `Triangle` with sides (5, 5, 5) and print its type.
4.  Create a `Triangle` with sides (1, 2, 4) and check if it's valid, then print its type.

### Task 4 – Object Composition: A `Team` of `Player`s

**Objective:** To create a class that contains and manages objects of another class you've built.

Create a class `Team` that uses your `Player` class from Task 1.

- **Member Variables (private):**
  - `string teamName;`
  - `vector<Player> players;` (A vector to hold `Player` objects)
- **Member Functions (public):**
  - A **parameterized constructor** that takes the `teamName`.
  - `void addPlayer(const Player& p);` - Adds a `Player` object to the `players` vector.
  - `int getTotalScore();` - Calculates and returns the sum of the scores of all players on the team.
  - `void displayTeam();` - Prints the team name, followed by the details of each player on the team.

**In `main`:**

1.  Create three `Player` objects with different names.
2.  Give some of them score and damage.
3.  Create a `Team`.
4.  Add the three players to the team.
5.  Call `displayTeam()` and print the team's total score.

### Task 5 – The Grand Finale: Dynamic Memory and The Copy Constructor

**Objective:** To understand the critical role of the destructor and copy constructor when a class manages dynamic memory.

Create a class `NumberList` that holds a dynamic array of integers.

- **Member Variables (private):**
  - `int* numbers;` (A pointer to the start of the dynamic array)
  - `int size;`
- **Constructors / Destructor (public):**
  - A **parameterized constructor** `NumberList(int s);` that allocates a new integer array of size `s` on the heap and initializes all its elements to 0.
  - A **destructor** `~NumberList();` that frees the dynamically allocated memory using `delete[]` and prints a message like "NumberList destroyed." to confirm it was called.
  - A **copy constructor** `NumberList(const NumberList& other);`. This is the most important part. You must perform a **deep copy**:
    1.  Allocate _new_ memory for the `numbers` array in the new object.
    2.  Copy each element from the `other` object's array into this new array.
    - **Think about it:** What would happen if you just did `numbers = other.numbers;` (a shallow copy)?
- **Member Functions (public):**
  - `void set(int index, int value);` - Sets a value in the array.
  - `void display();` - Prints all numbers in the list.

**In `main`:**

1.  Create a `NumberList list1(5);` and set a few of its values.
2.  Create `NumberList list2 = list1;` (this will trigger your copy constructor).
3.  Change a value in `list1`.
4.  Display both `list1` and `list2`. If your deep copy worked, `list2` should remain unchanged.
5.  Let the program finish and observe that the destructor message appears twice, without any crashes.
