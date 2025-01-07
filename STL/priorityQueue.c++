// In C++, a priority queue is a container in the Standard Template Library (STL) that implements a priority-based queue. Unlike a regular queue, where elements are processed in a first-in, first-out (FIFO) manner, a priority queue processes elements based on their priority.

// Key Features of Priority Queue
// Priority-Based Processing:
// By default, the largest element has the highest priority (max-heap).
// Custom comparators can be used to create a min-heap or define other priority orders.
// Efficient Operations:
// O(log n) for insertion and deletion.
// O(1) for accessing the top-priority element.
// Underlying Structure: Typically implemented using a binary heap.
// Common Priority Queue Operations
// push(value): Inserts an element into the priority queue.
// pop(): Removes the element with the highest priority.
// top(): Returns the element with the highest priority.
// empty(): Checks if the priority queue is empty.
// size(): Returns the number of elements in the priority queue.

#include <iostream>
#include <queue>
using namespace std;

void demonstrateMaxHeap() {
    // Create a max-heap priority queue
    priority_queue<int> pq;

    // Adding elements to the priority queue
    pq.push(10); // Queue: [10]
    pq.push(20); // Queue: [20, 10]
    pq.push(5);  // Queue: [20, 10, 5]

    // Display the top element
    cout << "Top element (highest priority): " << pq.top() << endl; // Output: 20

    // Remove the top element
    pq.pop(); // Queue: [10, 5]

    // Display the top element after pop
    cout << "Top element after pop: " << pq.top() << endl; // Output: 10

    // Add more elements
    pq.push(15); // Queue: [15, 10, 5]

    // Display all elements (note: no direct iteration is supported)
    cout << "Priority queue elements (in decreasing order): ";
    while (!pq.empty()) {
        cout << pq.top() << " "; // Display the top element
        pq.pop();                // Remove the top element
    }
    cout << endl;
}

int main() {
    demonstrateMaxHeap();
    return 0;
}

