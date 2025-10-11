Write a program for each of the following tasks:

1.  **Word Frequency Counter:**

    - **Goal:** Use a `std::map` to count the occurrences of each word in a piece of text.
    - **Instructions:**
      1.  Create a `map<string, int>` to store words (the key) and their counts (the value).
      2.  Create a `vector<string>` or use a simple string literal to hold some sample text (e.g., `"the quick brown fox jumps over the lazy brown dog"`).
      3.  Iterate through your text word by word. For each word, increment its count in the map. (Remember, `myMap[word]++` will automatically insert the word with a value of 0 if it's not there, and then increment it).
      4.  After counting, iterate through the map and print each word along with its frequency.

2.  **Help Desk Ticket System:**
    - **Goal:** Simulate a simple First-In, First-Out (FIFO) ticketing system using a `std::queue`.
    - **Instructions:**
      1.  Create a `queue<string>` to hold support ticket descriptions.
      2.  Write a loop that presents a simple menu to the user:
          - Enter `1` to "Add a new ticket". (Prompts the user for a description and `push`es it onto the queue).
          - Enter `2` to "Process the next ticket". (If the queue is not empty, it should print the `front()` element and then `pop()` it. If it's empty, it should say "No tickets to process.").
          - Enter `3` to "Quit".
      3.  The loop should continue until the user chooses to quit.
