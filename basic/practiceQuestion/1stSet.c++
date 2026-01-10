// Write a C++ program that reads in two integers and then outputs both their sum and their product.
#include <iostream>
using namespace std;
int main(){
  int num1 , num2;
  cout << "Enter two integer : ";
  cin >> num1 >> num2;
  cout << "Sum = " << num1 + num2 << endl;
  cout << "Product = " << num1 * num2 << endl;
  

  return 0;
}


// Write a program that allows the user to enter a number of quarters, dimes,
// and nickels and then outputs the monetary value of the coins in cents. For
// example, if the user enters 2 for the number of quarters, 3 for the number
// of dimes, and 1 for the number of nickels, then the program should
// output that the coins are worth 85 cents.
#include <iostream>
using namespace std;
int main(){
  int quarters , dimes , nickels;
  cout << "enter the values : ";
  cin >> quarters >> dimes >> nickels;
  int total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5);
 cout << "The monetary value of the coins in cents: " << total_cents << "\n";
 
 return 0;

}



//Write a program that allows the user to enter a time in seconds and then
// outputs how far an object would drop if it is in freefall for that length of
// time. Assume that the object starts at rest, there is no friction or resistance
// from air, and there is a constant acceleration of 32 feet per second due to
// gravity.
//You should first compute the product and then divide the result by 2.
#include <iostream>
using namespace std;
int main(){
 int time;
 cout << "enter the time in seconds : ";
 cin >> time;
 double time;
 double acceleration = 32.0;
 double actualTime = time * time;
 double product = acceleration * actualTime;
 double distance = product / 2;

 cout << "The object would drop " << distance << " feet.\n";

 return 0;
}