// In C++, a queue is a container in the Standard Template Library (STL) that implements a first-in, first-out (FIFO) data structure. Elements are added to the back (tail) of the queue and removed from the front (head).

// Key Features of Queue
// FIFO Principle: The first element inserted is the first one to be removed.
// Restricted Access: Elements can only be accessed from the front and the back.
// Efficient Operations:
// O(1) insertion at the back (push).
// O(1) removal from the front (pop).
// Underlying Container: Typically implemented using deque or list.
// Common Queue Operations
// push(value): Adds an element to the back of the queue.
// pop(): Removes the front element of the queue.
// front(): Returns a reference to the front element.
// back(): Returns a reference to the back element.
// size(): Returns the number of elements in the queue.
// empty(): Checks if the queue is empty.

#include <iostream>
#include <queue>
using namespace std;

void defineQueue() {
    // Create a queue of integers
    queue<int> myQueue;

    // Adding elements to the queue (push operation)
    myQueue.push(10); // Queue: [10]
    myQueue.push(20); // Queue: [10, 20]
    myQueue.push(30); // Queue: [10, 20, 30]

    // Display the front and back elements
    cout << "Front element: " << myQueue.front() << endl; // Output: 10
    cout << "Back element: " << myQueue.back() << endl;   // Output: 30

    // Removing the front element (pop operation)
    myQueue.pop(); // Queue: [20, 30]

    // Display the front element after pop
    cout << "Front element after pop: " << myQueue.front() << endl; // Output: 20

    // Adding another element
    myQueue.push(40); // Queue: [20, 30, 40]

    // Display all elements in the queue
    cout << "Queue elements (from front to back): ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " "; // Display the front element
        myQueue.pop();                  // Remove the front element
    }
    cout << endl;

    // Check if the queue is empty
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl; // Output: Yes
}

int main() {
    defineQueue();
    return 0;
}
