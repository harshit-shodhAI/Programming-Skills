Write a program that:

1. **Pointer Basics – Value Swap**

   - Take two integers as input.
   - Use pointers to swap their values (without using a third variable).
   - Print before and after swap.

2. **Double and Triple Pointer**

   - Take an integer as input.
   - Use a triple pointer to change its value to 100.
   - Print the original variable before and after modification.

3. **Dynamic Memory Allocation**

   - Ask the user for `n`.
   - Dynamically allocate memory for `n` integers.
   - Take input for all `n` integers, then print them.
   - Finally, free the allocated memory.

4. **Structure – Student Record**

   - Define a structure `Student` with fields: `name`, `roll`, and `marks`.
   - Read values for one student and print them.

5. **Union – API Response**

   - Define two structs:

     ```cpp
     struct Success { int code; char message[50]; };
     struct Error { int errorCode; char errorMessage[50]; };
     ```

   - Define a union `ApiResponse` that can hold either `Success` or `Error`.
   - Write a function `callApi(int x)` that returns:

     - `Success` if `x` is even (code = 200, message = "OK").
     - `Error` if `x` is odd (errorCode = 400, errorMessage = "Failed").

   - In `main`, call this function and print the appropriate response.
