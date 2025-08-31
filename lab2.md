# Lab – Control Flow, Loops, and Patterns

### Task 1 – Diamond Pattern

Write a program that takes an integer n and prints a diamond of stars.

Example (n = 3):

```
  *
 ***
*****
 ***
  *
```

---

### Task 2 – Pascal’s Triangle

Write a program to print Pascal’s Triangle up to n rows.

Example (n = 5):

```
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

(Hint: Use nested loops and relation: value = previous_row[i-1] + previous_row[i].)

---

### Task 3 – Prime Numbers in Range

Take two numbers, start and end, as input.  
Print all prime numbers between them.

Example:

```
Input: 10 30
Output: 11 13 17 19 23 29
```

(Hint: Use loops and break for checking factors.)

---

### Task 4 – Number Guessing Game (25 mins)

Generate a random number between 1 and 100.  
Ask the user to guess until they get it right.

- If guess is too high, print “Too High!”.
- If guess is too low, print “Too Low!”.
- Stop when correct using break.

---

### Task 5 – Student Report System

Write a program that:

1. Takes number of students n.
2. For each student, input name, roll number, and 3 subject marks.
3. Calculate total and average.
4. Print results in tabular form.

Example Run:

```
Enter number of students: 2
Enter name, roll, 3 marks for student 1: Rahul 101 90 85 92
Enter name, roll, 3 marks for student 2: Neha 102 78 88 80
```

Output:

```
Name   Roll   Total   Average
Rahul  101    267     89
Neha   102    246     82
```
