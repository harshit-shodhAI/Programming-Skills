Write a program for each of the following tasks:

1.  **`Box` Class with Constructors:**

    - Create a class `Box` with three `private` double members: `width`, `height`, and `depth`.
    - Write a **default constructor** that initializes all three members to `1.0`.
    - Write a **parameterized constructor** that accepts three doubles and initializes the members with those values.
    - Add a `public` member function `double getVolume()` that returns the volume of the box.
    - In `main`, create one `Box` using the default constructor and another using the parameterized constructor. Print the volume of each box.

2.  **`Resource` Class Lifecycle:**

    - Create a class named `Resource` with a `private` string member `name`.
    - Write a **parameterized constructor** that takes a string to initialize `name` and prints a message like `"Resource '[name]' is being acquired."`.
    - Write a **destructor** that prints a message like `"Resource '[name]' is being released."`.
    - In your `main` function, create a `Resource` object. Then, create a new scope using `{}` and create a second `Resource` object inside it. Observe the order in which the constructor and destructor messages are printed.

3.  **`Character` Class and Copying:**
    - Create a class `Character` with `private` members `string name;` and `int level;`.
    - Write a **parameterized constructor** to initialize these members.
    - Write a **copy constructor**. It should copy the `name` and `level`, but it must also print the message `"A clone of [name] has been created!"`.
    - Write a `public` function `void display()` that prints the character's name and level.
    - In `main`:
      1.  Create a `Character` named `hero` ("Aragorn", 10).
      2.  Create a second `Character` named `clone` by initializing it from `hero` (`Character clone = hero;`).
      3.  Verify that your copy constructor message was printed and that both characters have the same data by calling `display()` on both.
