Write a program for each of the following tasks:

1.  **`unique_ptr` Factory:**

    - **Goal:** Practice creating and transferring ownership of a resource using `std::unique_ptr`.
    - **Instructions:**
      1.  Create a simple `struct Gadget { int id; Gadget(int i) : id(i) { cout << "Gadget " << id << " created\n"; } ~Gadget() { cout << "Gadget " << id << " destroyed\n"; } };`.
      2.  Write a factory function `unique_ptr<Gadget> createGadget(int id);`. Inside this function, use `std::make_unique` to create a `Gadget` and return the `unique_ptr`.
      3.  In `main`, call `createGadget()` to create two different gadgets and store them in `unique_ptr` variables.
      4.  Create a `vector<unique_ptr<Gadget>>`. Use `std::move()` to transfer ownership of your two gadgets from the local variables into the vector.
      5.  Observe the constructor/destructor messages to see that the gadgets are only destroyed when the `main` function (and thus the vector) ends.

2.  **`shared_ptr` for a Team Roster:**

    - **Goal:** Understand how `std::shared_ptr` can manage a resource that is co-owned by multiple objects.
    - **Instructions:**
      1.  Create a `struct Team { string name; ... };`.
      2.  Create a `class Player { ... };` that has a private member `shared_ptr<Team> team;`.
      3.  In `main`, create a single `Team` object using `std::make_shared`.
      4.  Create three different `Player` objects. In their constructors, pass a copy of the `shared_ptr` to the `Team`.
      5.  After creating each player, print the `use_count()` of the team's `shared_ptr` to see how the reference count increases.
      6.  Let the `Player` objects be destroyed (e.g., by letting them go out of scope) and observe how the `use_count()` decreases. The `Team` object should only be destroyed after the last `Player` object is gone.

3.  **Data Transformation with Range-based `for` loops:**
    - **Goal:** Use range-based `for` loops for both reading and modifying a container.
    - **Instructions:**
      1.  Create a `vector<string>` with several lowercase words.
      2.  Write a range-based `for` loop that iterates over the vector using `const auto&` to print each word.
      3.  Write a second range-based `for` loop that iterates over the vector using `auto&` (a non-const reference). Inside this loop, transform each word to be all uppercase. (You can use `std::toupper` on each character).
      4.  Write a final range-based `for` loop to print the modified, uppercase words.
