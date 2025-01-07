// In C++, a stack is a container in the Standard Template Library (STL) that implements a last-in, first-out (LIFO) data structure. This means elements are inserted and removed only from the top of the stack.

// Key Features of Stack
// LIFO Principle: The last element added is the first one to be removed.
// Restricted Operations: Only operations on the top element are allowed (push, pop, top).
// Underlying Container: The stack is implemented as an adapter container, typically using vector, deque, or list.
// Efficient Access: Operations like push, pop, and top are O(1).
// Common Stack Operations
// push(value): Adds an element to the top of the stack.
// pop(): Removes the top element from the stack.
// top(): Returns a reference to the top element without removing it.
// size(): Returns the number of elements in the stack.
// empty(): Checks if the stack is empty.


#include <iostream>
#include <stack>
using namespace std;

void demonstrateStack() {
    // Create a stack of integers
    stack<int> myStack;

    // Adding elements to the stack (push operation)
    myStack.push(10); // Stack: [10]
    myStack.push(20); // Stack: [10, 20]
    myStack.push(30); // Stack: [10, 20, 30]

    // Display the top element
    cout << "Top element: " << myStack.top() << endl; // Output: 30

    // Removing the top element (pop operation)
    myStack.pop(); // Stack: [10, 20]

    // Display the top element after pop
    cout << "Top element after pop: " << myStack.top() << endl; // Output: 20

    // Adding another element
    myStack.push(40); // Stack: [10, 20, 40]

    // Display all elements in the stack
    cout << "Stack elements (from top to bottom): ";
    while (!myStack.empty()) {
        cout << myStack.top() << " "; // Display the top element
        myStack.pop();                // Remove the top element
    }
    cout << endl;

    // Check if the stack is empty
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl; // Output: Yes
}

int main() {
    demonstrateStack();
    return 0;
}
