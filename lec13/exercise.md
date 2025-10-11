Write a program for each of the following tasks:

1.  **`Person` and `Student` Hierarchy:**

    - Create a base class named `Person` with:
      - `protected` member variables: `string name;` and `int age;`.
      - A `public` parameterized constructor to initialize `name` and `age`.
      - A `public` method `void display_person()` that prints the name and age.
    - Create a derived class named `Student` that inherits publicly from `Person`.
    - The `Student` class should have:
      - A `private` member variable: `int studentID;`.
      - A `public` parameterized constructor that takes a name, age, and student ID. It should call the base class constructor to initialize the `name` and `age` members.
      - A `public` method `void display_student()` that prints the student's ID, and then calls the base class's `display_person()` method to print the name and age.
    - In `main`, create a `Student` object and call its `display_student()` method to show that it has access to both its own and the base class's functionality.

2.  **`Vehicle`, `Car`, and `Motorcycle`:**
    - Create a base class `Vehicle` with:
      - `public` members: `string brand;` and `int year;`.
      - A `public` method `void display_info()` that prints the brand and year.
    - Derive two classes from `Vehicle`: `Car` and `Motorcycle`.
    - The `Car` class should add a `private` member `int num_doors;` and a `public` method `void display_car_info()` that prints the number of doors.
    - The `Motorcycle` class should add a `private` member `bool has_sidecar;` and a `public` method `void display_motorcycle_info()` that prints whether it has a sidecar.
    - In `main`, create a `Car` object and a `Motorcycle` object. Set their properties (both inherited and unique) and call their respective display methods to demonstrate code reuse from the `Vehicle` class.
