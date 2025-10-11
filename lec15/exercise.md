Write a program for each of the following tasks:

1.  **Unique ID Generator:**

    - Create a class named `File`.
    - It should have a **private static int** named `next_id` initialized to `1`.
    - It should have two **private** member variables: `string filename;` and `int id;`.
    - Write a **public parameterized constructor** that accepts a filename. This constructor should assign the current value of `next_id` to the object's `id` and then increment `next_id`.
    - Add a `public` member function `void display()` that prints the file's unique ID and its filename.
    - In `main`, create three `File` objects with different names and call `display()` on each to prove that each one gets a unique, sequential ID.

2.  **Configuration Manager (Static Functions):**
    - Create a class named `AppConfig`. This class will not be instantiated; it will only contain static members.
    - Add a **private static string** named `theme` initialized to `"Light"`.
    - Add a **private static int** named `fontSize` initialized to `12`.
    - Write a **public static function** `void setTheme(string newTheme);` that changes the value of the `theme`.
    - Write a **public static function** `void setFontSize(int newSize);` that changes the `fontSize`.
    - Write a **public static function** `void displayConfig();` that prints the current theme and font size.
    - In `main`, call `AppConfig::displayConfig()` to show the initial settings. Then, call the static setter functions to change the theme and font size. Finally, call `AppConfig::displayConfig()` again to confirm the changes. Note that you never create an object of type `AppConfig`.
