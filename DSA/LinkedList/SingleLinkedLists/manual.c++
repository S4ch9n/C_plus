//manually creating 5 nodes


#include <iostream>
using namespace std;
struct Node2 {
  int data;
  Node2* next;
};
int main(){
  Node2* head = new Node2();
  Node2* second = new Node2();
  Node2* third = new Node2();
  Node2* fourth = new Node2();
  Node2* fifth = new Node2();

  head -> data = 1;
  head -> next = second;
  
  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = fourth;

  fourth -> data = 4;
  fourth -> next = fifth;

  fifth -> data = 5;
  fifth -> next = NULL; //last element pointing to the null 

  //printing list
  Node2* temp = head;
  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  return 0;
}