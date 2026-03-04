#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;   // global head pointer

// 🔹 Display List
void display() {
    Node* temp = head;
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// 🔹 Insert at Beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// 🔹 Insert at End
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// 🔹 Insert at Position
void insertAtPosition(int value, int pos) {
    if(pos == 1) {
        insertAtBeginning(value);
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// 🔹 Delete from Beginning
void deleteFromBeginning() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// 🔹 Delete from End
void deleteFromEnd() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

// 🔹 Delete from Position
void deleteFromPosition(int pos) {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if(pos == 1) {
        deleteFromBeginning();
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if(temp->next == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// 🔹 Search
void search(int key) {
    Node* temp = head;
    int position = 1;

    while(temp != NULL) {
        if(temp->data == key) {
            cout << "Found at position " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Not Found\n";
}

// 🔹 Main Menu
int main() {
    int choice, value, pos;

    while(true) {
        cout << "\n1.Insert Beginning\n";
        cout << "2.Insert End\n";
        cout << "3.Insert Position\n";
        cout << "4.Delete Beginning\n";
        cout << "5.Delete End\n";
        cout << "6.Delete Position\n";
        cout << "7.Search\n";
        cout << "8.Display\n";
        cout << "9.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 3:
                cout << "Enter value and position: ";
                cin >> value >> pos;
                insertAtPosition(value, pos);
                break;

            case 4:
                deleteFromBeginning();
                break;

            case 5:
                deleteFromEnd();
                break;

            case 6:
                cout << "Enter position: ";
                cin >> pos;
                deleteFromPosition(pos);
                break;

            case 7:
                cout << "Enter value to search: ";
                cin >> value;
                search(value);
                break;

            case 8:
                display();
                break;

            case 9:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}