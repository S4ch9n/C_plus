#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

int main(){

  Node* head = NULL;
  Node* temp = NULL;

  for(int i = 0 ; i < 10 ; i++){
    Node* newNode = new Node();
    newNode -> data = i * 5;
    newNode -> next = NULL;

    if(head == NULL){
      head = newNode;
      temp = newNode;
    }else{
      temp -> next = newNode;
      temp = newNode;
    }
  }

    // Traverse to print list
    Node* current = head;
    current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    //delete from the begining
    Node* temp = head;
    if(head == NULL){
     cout << "list is empty \n";
     return;
    }
    head = head -> next; //move head to next node

    delete temp;

}