Write a program for each of the following tasks:

1.  **`Instrument` Sounds:**

    - Create a base class `Instrument` with a `virtual` function `void makeSound()`. This function should print `"An instrument makes a sound."`.
    - Create two derived classes: `Guitar` and `Piano`.
    - In both `Guitar` and `Piano`, **override** the `makeSound()` function.
      - The `Guitar` version should print `"The guitar strums."`.
      - The `Piano` version should print `"The piano plays a melody."`.
    - In `main`:
      1.  Create an `Instrument` pointer named `instr_ptr`.
      2.  Create a `Guitar` object and a `Piano` object.
      3.  Point `instr_ptr` to the `Guitar` object and call `makeSound()`.
      4.  Point `instr_ptr` to the `Piano` object and call `makeSound()`.
      - Observe how the same line of code (`instr_ptr->makeSound();`) produces different results based on the object the pointer is pointing to.

2.  **The Polymorphic `Renderer`:**
    - This exercise demonstrates the true power of polymorphism.
    - Create a base class `Shape` with a `virtual void draw()` that prints `"Drawing a generic shape."`.
    - Create three derived classes: `Circle`, `Square`, and `Triangle`.
    - Each derived class should `override` the `draw()` method to print a message specific to that shape (e.g., `"Drawing a circle: O"`).
    - In `main`:
      1.  Create a `vector` that can hold `Shape` pointers: `vector<Shape*> shapes;`.
      2.  Dynamically create a `new Circle()`, a `new Square()`, and a `new Triangle()` and `push_back` their pointers into the `shapes` vector.
      3.  Write a single `for` loop that iterates through the vector and calls the `draw()` method on each `Shape` pointer.
      4.  **Important:** After the loop, remember to `delete` the dynamically allocated objects to prevent memory leaks.
