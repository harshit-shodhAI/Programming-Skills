#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    // --- Stack Demo (LIFO - Last-In, First-Out) ---
    cout << "--- Stack Demo (LIFO) ---" << endl;
    stack<int> s;
    s.push(1); // Bottom
    s.push(2);
    s.push(3); // Top

    cout << "Top of stack: " << s.top() << endl;
    s.pop(); // Removes 3
    cout << "Top after pop: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    // --- Queue Demo (FIFO - First-In, First-Out) ---
    cout << "\n--- Queue Demo (FIFO) ---" << endl;
    queue<int> q;
    q.push(10); // Front
    q.push(20);
    q.push(30); // Back

    cout << "Front of queue: " << q.front() << endl;
    cout << "Back of queue: " << q.back() << endl;
    q.pop(); // Removes 10 (the front element)
    cout << "Front after pop: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    return 0;
}