# Lab - A Miniature Command-Line File System

### Project Overview

You will create a C++ program that simulates a simple in-memory file system. Users will interact with it via a command-line interface, using commands like `ls`, `mkdir`, `touch`, `cd`, and `find`. The file system will be hierarchical, composed of directories and files.

This project is broken down into five major tasks. It is highly recommended to complete them in order.

---

### Task 1: The Abstract Foundation (OOP and Inheritance)

**Objective:** Design the core class hierarchy using abstract classes and inheritance.

1.  Create an **abstract base class** named `FileSystemNode`. It represents anything that can exist in the file system.
    - **Protected Members:**
      - `string name;`
      - `Directory* parent;` (A raw pointer to the parent, can be `nullptr` for the root).
    - **Static Members:**
      - A **private static int** `node_count` to track how many nodes have been created.
      - A **public static function** `int getNodeCount()` to return this value.
    - **Public Members:**
      - A **constructor** that takes a name and parent. It should increment `node_count`.
      - A **virtual destructor** that decrements `node_count`.
      - **Pure Virtual Functions (Abstract Methods):**
        - `virtual int getSize() const = 0;` (Files will have a size, directories will calculate it).
      - **Regular Virtual Functions:**
        - `virtual void display() const;` (Prints the node's name).

---

### Task 2: Concrete Nodes (Derived Classes, Smart Pointers, and STL)

**Objective:** Implement the specific types of nodes (Files and Directories) and manage their relationships using smart pointers and STL containers.

1.  **Create the `File` Class:**

    - It should inherit publicly from `FileSystemNode`.
    - **Private Members:**
      - `string content;`
    - **Public Members:**
      - A constructor that calls the base constructor and initializes content.
      - **Override** the `getSize()` method to return `content.length()`.
      - **Override** the `display()` method to print the filename and its size.
      - A method `string getContent()` to return the file's content.

2.  **Create the `Directory` Class:**
    - It should inherit publicly from `FileSystemNode`.
    - **Private Members:**
      - A `map<string, unique_ptr<FileSystemNode>> children;` This is the core of the directory. It maps a name to a **smart pointer** that owns the child node. This prevents memory leaks automatically.
    - **Public Members:**
      - A constructor that calls the base constructor.
      - **Override** the `getSize()` method. It should recursively calculate the total size of all its children. Use a range-based for loop.
      - **Override** the `display()` method to print the directory name followed by `(DIR)`.
      - A method `void addChild(unique_ptr<FileSystemNode> child);` that moves ownership of a new node into the `children` map.
      - A method to get a child node by name.

---

### Task 3: The Shell and Command Parser (Control Flow and String Manipulation)

**Objective:** Build the user-facing part of the application that reads and parses commands.

1.  Create a `FileSystem` class that will manage the entire simulation.
    - **Private Members:**
      - `unique_ptr<Directory> root;` (The root of the entire file system).
      - `Directory* current_directory;` (A raw pointer to the directory the user is currently in).
    - **Public Members:**
      - A **constructor** that creates the `root` directory and sets `current_directory` to point to it.
      - A `void run();` method. This will contain the main application loop.
2.  **Implement the `run()` method:**
    - It should contain a `while(true)` loop.
    - Inside the loop, print a prompt (e.g., `"> "`).
    - Use `getline(cin, line)` to read a full line of user input.
    - Parse the input line into a command and its arguments. A simple way is to use a `stringstream`.
    - Use an `if-else if` chain or a `map` of function pointers/lambdas to execute the correct command based on the parsed input. The loop should break if the command is "exit".

---

### Task 4: Implementing Core Commands (STL Algorithms, Lambdas, and Exceptions)

**Objective:** Add functionality to your shell, using STL algorithms and exception handling for robustness.

Implement the following methods within your `FileSystem` class. These will be called by your `run()` loop.

1.  **`ls()` (List):**

    - Print the contents of the `current_directory`.
    - **Challenge:** Before printing, copy the names of the children into a `vector<string>`, then use `std::sort` with a **lambda function** to sort them alphabetically. Iterate through the sorted vector to print the names.

2.  **`mkdir(const string& dirname)`:**

    - Creates a new `Directory`.
    - Check if a node with that name already exists in the `current_directory`. If so, **`throw std::invalid_argument("Node with that name already exists.");`**.
    - Use `make_unique` to create the new directory and `addChild` to add it to the `current_directory`.

3.  **`touch(const string& filename, const string& content)`:**

    - Creates a new `File`.
    - Perform the same error check as `mkdir`.
    - Create and add the new file.

4.  **Integrate with `run()`:** Your main loop's `try...catch` block should be able to catch the `std::invalid_argument` from these functions and print a user-friendly error message without crashing the program.

---

### Task 5: Advanced Commands and State Management (Putting It All Together)

**Objective:** Implement complex commands that require traversing the file system tree and managing the shell's state.

1.  **`cd(const string& path)` (Change Directory):**

    - This is one of the hardest commands. It needs to parse a path.
    - Handle `cd ..` to go to the parent directory.
    - Handle changing to a child directory (e.g., `cd documents`).
    - If the path is invalid or leads to a file (not a directory), **`throw std::runtime_error("Path is not a valid directory.");`**.
    - On success, update the `current_directory` pointer.

2.  **`find(const string& name)` (Find):**

    - This requires a **recursive helper function** that starts from the `current_directory` and traverses down the tree.
    - It should search for any file or directory matching `name` and print the full path to each match.
    - This demonstrates your ability to write recursive functions that operate on your OOP structure.

3.  **`rm(const string& name)` (Remove):**
    - Find the child with the given `name` in the `current_directory`.
    - If it doesn't exist, throw an exception.
    - If it exists, remove it from the `children` map of the `current_directory`.
    - **The Magic Moment:** When the `unique_ptr` is removed from the map, its destructor is called. If it points to a `Directory`, that directory's destructor will be called, which in turn destroys its `map` of children, causing a beautiful cascade of `unique_ptr` destructions. This demonstrates the power of RAII and smart pointers for automatic, recursive cleanup.
