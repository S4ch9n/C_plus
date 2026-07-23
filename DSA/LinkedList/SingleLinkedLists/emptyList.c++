#include <iostream>
using namespace std;

// Define the structure of a Linked List Node
class Node
{
  public:
  int data;
  Node *next;

  // Constructor to easily create a new node
  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};

// Function to insert a new node at the very end of the list
void insertAtEnd(Node *&head, int value)
{
  Node *newNode = new Node(value);

  // Edge Case: Handle the empty list separately
  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  // Traverse to the last node
  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }

  // Link the last node to the new node
  temp->next = newNode;
}

// Utility function to print the list
void printList(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "nullptr\n";
}

int main()
{
  // Initialize an empty list (head points to nullptr)
  Node *head = nullptr;

  cout << "Inserting into empty list...\n";
  insertAtEnd(head, 10); // Triggers the edge case code path
  printList(head);

  cout << "\nInserting more elements...\n";
  insertAtEnd(head, 20); // Traverses past 10 to append 20
  insertAtEnd(head, 30); // Traverses past 10 and 20 to append 30
  printList(head);

  return 0;
}
