// #include <iostream>
// using namespace std;

// class item
// {
//   int number; //vairables declaration
//   float cost; //private by defaul

// public:
//   /* data */
//     int z; //a variable declared as public can be accessed by other objects directly
//     // should be avoided

//   void getData(int a , float b); //function declaration
//   void putData(void){
//     cout << "Number : " << number << endl;
//     cout << "Cost : " << cost << endl; //definiton insid the class
//   } //using prototype

// }x , y , z; //ends with semi-colon

// // item x; //memory for x is created.   //the class varibales are known as objects
// //therefore x is called an object of item

// // item x , y , z; //can declare more than one object on one statement


// // member function can be only invoked only by using an object of same class.
// // so , getData(12,32.2) has no meaning
// // x.number = 100 is also wrong because the private member can be only accessed
// // only thorugh a member function and not by the object directly.


// //to access the member of the function
// // x.getData(100 , 98.5);
// // x.putData(); //would display the value of data members


// //outside the class definiton
// void item :: getData(int a , float b){
//   number = a;
//   cost = b;
// }

// void item :: putData(void){
//   cout << "Number : " << number << endl;
//   cout << "Cost : " << cost << endl;
// }



#include <iostream>
using namespace std;

class item{
  int number; //private by default
  int cost; //private by default
public:
  void getData(int a , float b); //prototpe declaration
  //to be defined

  //function defined inside the class
  void putData(void){ 
    cout << "Number : " << number << endl;
    cout << "Cost : " << cost << endl;
  }
};


//.........Member function definition..........

  // :: is called scope resolution header
void item :: getData(int a , float b){ //user membership labels
  number = a; //private variables
  cost = b; //directly used
}

//main function
int main(){
  item x; //create object x

  cout << "\nobject x " << "\n";

  x.getData(100 , 299.95);
  x.putData();

  item y;
  cout << "\nobject y " << "\n";
  y.getData(300, 109.8);
  y.putData();

  return 0;

}


//nesting of member function : a member function can be called by using its name inside another member function of the same class.This is known as nesting memeber function.
#include <iostream>
#include <cstdlib>
using namespace std;

class binary{
  string s;

public:
  void read(void){
    cout << "Enter a binary digit : ";
    cin >> s;
  }

  void chk_bin(void){
    for(int i = 0 ; i < s.length() ; i++){
      if(s.at(i) != '0' && s.at(i) != '1'){
        cout << "\nIncorrect number binary format ..... the program will quit";
        exit(0);
      }
    }
  }

  void one(void){
    chk_bin();
    for(int i = 0 ; i < s.length() ; i++){
      if(s.at(i) == '0') s.at(i) = '1';
      else s.at(i) = '0';
    }
  }

  void displayOnes(void){
    one();
    cout << "\nThe 1's complement of the above binary number is : " << s;
  }
};

int main(){
  binary b;
  b.read();
  b.displayOnes();

  return 0;
}


//private member function : a private memebr fuction can only be called by another fuction that is a member of its class.even an object cannot invoke a private function using dot operator
class sample{
  int m;
  void read(void); //private member functio
  public: 
    void update(void);
    void write(void);
};
//if s1 is an object of sample then
// s1.read(); //wont't work objective cannot access
//private member

//however the function read() ca be called by function update() to update the value of m.
void sample ::update (void){
  read(); // simple call , no object is used
}



