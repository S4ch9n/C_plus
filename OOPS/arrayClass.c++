//the array can be used as member variable in a class
// const int size = 10;
// class array{
//   int a[size]; //a is int type array
//   public:
//     void setval(void);
//     void display(void);
// };



//let us consider a shopping list of items for which place an order with a delivery every month

#include <iostream>
using namespace std;


const int m = 50;

class ITEMS{
  int itemCode[m];
  float itemPrice[m];
  int count;
public:
  void CNT(void){
    count = 0; //inline function  : function defined inside the class, initialize count = 0
  }  
  void getItem(void); //prototype declaration
  void displaySum(void);
  void remove(void);
  void displayItems(void);
};

//outside class definition
// :: is called scope resolution header
void ITEMS :: getItem(void){ //use membership label 
  //assign value to data
  //member of item
  cout << "enter item code : ";
  cin >> itemCode[count];
  cout << "enter item cost :";
  cin >> itemPrice[count];
  count++;
} 

void ITEMS :: displaySum(void){
  //display total value of all items
  float sum = 0;
  for(int i = 0 ; i < count ; i++){
    sum += itemPrice[i];
  }
  cout << "\nTotal value : " << sum << "\n";

}

void ITEMS :: remove(void){
  int a;
  cout << "enter item code : ";
  cin >> a;

  for(int i = 0 ; i < count ; i++){
    if(itemCode[i] == a){
      itemCode[i] = 0;
      itemPrice[i] = 0;
    }
  }
}

void ITEMS :: displayItems(void){
  cout << "\ncode Price\n";

  for(int i = 0 ; i < count ; i++){
    cout << "\n" << itemCode[i];
    cout << " " << itemPrice[i];
  }
  cout << "\n";
}

int main(){
  ITEMS order;
  order.CNT();
  int x;
  do{
    cout << "\nYou can do the following;"  << "enter appropriate number\n";
    cout << "\n1 : Add an item ";
    cout << "\n2 : Display total value";
    cout << "\n3 : Display an item";
    cout << "\n4 : Display all item";
    cout << "\n5 : Quit";
    cout << "\n\nWhat is your option?";

    cin >> x;
    
    switch(x){
      case 1 : order.getItem() ;break;
      case 2 : order.displaySum() ;break;
      case 3 : order.remove() ;break;
      case 4 : order.displayItems() ;break;
      case 5 : break;
      default : cout << "error in input ; try again\n";
    }
  }while( x!= 5);

  return 0;
}