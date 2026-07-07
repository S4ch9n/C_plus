#include <iostream>
using namespace std;


class Node{
  public:
   int data;
   Node* next;

   Node(int value){
    data = value;
    next = nullptr;
   }
};
int main(){
  Node* head = new Node(5);
  head -> next = new Node(15);
  head -> next -> next = new Node(25);
  head -> next -> next -> next = new Node(35);

  return 0;
}