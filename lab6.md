# Lab – Inheritance and Polymorphic Game Characters

### Task 1 – The Base `Character` Class

**Objective:** Create a foundation for all characters using a base class.

1.  Create a class named `Character`.
2.  It should have the following **protected** members:
    - `string name;`
    - `int health;`
3.  It should have the following **public** members:
    - A **parameterized constructor** that initializes `name` and `health`.
    - A method `void takeDamage(int damage);` which subtracts from `health` but ensures it never goes below 0.
    - A method `void display();` which prints the character's name and current health.

### Task 2 – Specialization with Inheritance: The `Warrior`

**Objective:** Create a specialized class that inherits and extends the base class.

1.  Create a class named `Warrior` that **publicly inherits** from `Character`.
2.  Add a **private** member: `int armor;`.
3.  Add a **public parameterized constructor** for the `Warrior`. It should take a name, health, and armor value.
    - **Crucial:** You must call the `Character` base class's constructor from the `Warrior` constructor's initializer list to set the name and health.
4.  Override the `takeDamage` method. The `Warrior`'s `takeDamage` should first reduce the incoming damage by their `armor` value. The net damage should then be applied to the health (by calling the base class's `takeDamage` method or by directly manipulating health). Net damage cannot be negative.
5.  In `main`, create a `Warrior` object, have it take damage, and display its status to prove both its own and the inherited functionality works.

### Task 3 – The Core of Polymorphism: The `attack()` Method

**Objective:** Introduce a `virtual` function that all character types will implement differently.

1.  Modify the base `Character` class:
    - Add a new **virtual** function: `virtual void attack(Character& target);`. In the base class, this function can just print a generic message like `"[name] performs a basic attack on [target.name]!"`.
2.  Modify the `Warrior` class:
    - **Override** the `attack()` method. The `Warrior`'s attack should print a message like `"[name] swings a greatsword at [target.name]!"` and then call the `target.takeDamage()` method with a fixed amount of damage (e.g., 20).
    - **Hint:** To access the target's name, you'll need a public `getName()` getter in the `Character` class.

### Task 4 – Creating a New Character Type: The `Mage`

**Objective:** Reinforce the process and demonstrate the flexibility of your hierarchy.

1.  Create a new class `Mage` that also **publicly inherits** from `Character`.
2.  Add a **private** member: `int mana;`.
3.  Add a **public parameterized constructor** that calls the base class constructor.
4.  **Override** the `attack()` method. The `Mage`'s attack should be different:
    - If the `Mage` has enough mana (e.g., `mana >= 25`), it should print `"[name] casts a fireball at [target.name]!"`, deal a large amount of damage (e.g., 40), and reduce its own mana.
    - If the `Mage` has insufficient mana, it should print `"[name] tries to cast a spell but has no mana!"` and do no damage.

### Task 5 – The Grand Finale: The Power of a Single Loop

**Objective:** Use a collection of base class pointers to control different object types uniformly, proving the power of polymorphism.

**In `main`:**

1.  Create a `vector` that holds `Character` pointers: `vector<Character*> character_list;`.
2.  Dynamically create at least one `Warrior` and one `Mage` using `new` and add their pointers to the `character_list`.
3.  Create a final "boss" character (can be a `Warrior` or `Mage` with high health).
4.  Write a **single `for` loop** that iterates through the `character_list`. Inside the loop, each character in the list should `attack` the boss.
    ```cpp
    // Example loop structure
    for (Character* hero : character_list) {
        hero->attack(boss); // This one line will call either the Warrior or Mage attack!
    }
    ```
5.  After the loop, display the final health of the boss to see the combined damage.
6.  **Crucial Cleanup:** Loop through your `character_list` one last time and `delete` each dynamically allocated character to prevent memory leaks.
