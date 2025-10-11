Write a program for each of the following tasks:

1.  **`Dog` Class:**

    - Create a class named `Dog`.
    - It should have three `public` member variables: `string name;`, `string breed;`, and `int age;`.
    - It should have one `public` member function: `void bark()` which prints `"Woof!"` to the console.
    - In `main`, create two `Dog` objects. Set their properties (name, breed, age) and call the `bark()` method for each.

2.  **`Circle` Class with Encapsulation:**

    - Create a class named `Circle`.
    - It should have one `private` member variable: `double radius;`.
    - It should have `public` member functions:
      - `void setRadius(double r);` - This "setter" should only set the `radius` if the provided value `r` is positive. If `r` is zero or negative, print an error message.
      - `double getRadius();` - This "getter" returns the current radius.
      - `double getArea();` - This function calculates and returns the area of the circle (`π * r^2`). You can use `3.14159` for π.
    - In `main`, create a `Circle` object. Try to set a valid radius and then an invalid one. Finally, get the radius and print the circle's area.

3.  **`Product` Class - Access Specifiers:**
    - Create a class named `Product`.
    - It should have the following members:
      - **public:** `string name;`
      - **private:** `double price;`
      - **protected:** `int sku;` (stock-keeping unit)
    - Add a `public` member function `void setPrice(double p)` that sets the private `price`.
    - In `main`, create a `Product` object.
      - Demonstrate that you can directly access and modify the `name`.
      - Demonstrate that you **cannot** directly access `price` or `sku` (these lines will cause a compile error if you uncomment them).
      - Use the `setPrice` method to change the product's price.
