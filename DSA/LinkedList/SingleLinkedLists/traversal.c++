#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};


//diplay the nodes
void display(Node* head){
  Node* temp = head;
  while(temp != nullptr){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}

//count the node
int countNode(Node* head){
  int count = 0;

  Node* temp = head;

  while(temp != nullptr){
    count += 1;
    temp = temp -> next;
  }
  return count;
}

//search the traget
bool search(Node* head){
  int target = 1000;

  Node* temp = head;

  while(temp != nullptr){
    if(target == temp -> data) return true;
    temp = temp -> next;
  }
  return false;
}
 int main(){
  Node* head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next = new Node(30);

  //it will display the nodes
  display(head);


  //it will count the lenght of nodes 
  cout << countNode(head) << endl;


  //search the node
  cout << search(head);


  //insert at end

  
  return 0;
 };




 