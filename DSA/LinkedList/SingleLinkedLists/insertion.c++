#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    // Insert at beginning
    Node* newNode = new Node();
    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    // Insert at end
    Node* endNode = new Node();
    endNode->data = 6;
    endNode->next = NULL;

    // Traverse to last node and attach
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = endNode;

    // Traverse to print list
    current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Free memory
    current = head;
    while(current != NULL){
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}