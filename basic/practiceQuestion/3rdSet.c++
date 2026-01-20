// 15. Convert each of the following mathematical formulas to a C++ expression:
// 3x 
// 3x +  y 
// x + y / 7
//3x + y / z + 2
#include <iostream>
using namespace std;

int main() {
    int x = 6;
    int y = 3;
    int z = 2;

    // 1. 3x
    cout << "3x = " << 3 * x << endl;

    // 2. 3x + y
    cout << "3x + y = " << 3 * x + y << endl;

    // 3. x + y / 7
    cout << "x + y / 7 = " << x + y / 7 << endl;

    // 4. (3x + y) / z + 2
    cout << "(3x + y) / z + 2 = " << (3 * x + y) / z + 2 << endl;

    return 0;
}


// 6. What is the output of the following program lines when embedded in a
// correct program that declares all variables to be of type char?
// a = 'b';
// b = 'c';
// c = a;
// cout << a << b << c << 'c';
#include <iostream>
using namespace std;

int main(){
  char a = 'b';
  char b = 'c';
  char c = a;
  cout << a << b << c << 'c';

   return 0;
}
//output : b c b c



//17. What is the output of the following program lines when embedded in a
// correct program that declares number to be of type int?
// number = (1/3) * 3;
// cout << "(1/3) * 3 is equal to " << number;
#include <iostream>
using namespace std;

int main(){
  int number = (1/3) *3;
  cout << "(1/3) * 3 is equal to " << number;
}
//(1/3) * 3 is equal to 0




// 18.Write a complete C++ program that reads two whole numbers into two
// variables of type int and then outputs both the whole-number part and
// the remainder when the first number is divided by the second. This can be
// done using the operators / and %.
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter two whole numbers: ";
    cin >> n1 >> n2;

    cout << "First number: " << n1 << endl;
    cout << "Second number: " << n2 << endl;

    cout << "Whole-number part of division: " << n1 / n2 << endl;
    cout << "Remainder: " << n1 % n2 << endl;

    return 0;
}


// 19. Given the following fragment that purports to convert from degrees
// Celsius to degrees Fahrenheit, answer the following questions:
// double c = 20;
// double f;
// f = (9/5) * c + 32.0;
// a. b. What value is assigned to f?
// Explain what is actually happening, and what the programmer likely
// wanted.
// c. Rewrite the code as the programmer intended.
#include <iostream>
using namespace std;

int main() {
    // Celsius temperature
    double c = 20;

    // Fahrenheit temperature
    double f;

    // PROBLEM:
    // 9 and 5 are integers, so (9 / 5) uses integer division.
    // Integer division gives 1 instead of 1.8
    // So this actually becomes: f = 1 * c + 32
    // which is incorrect for temperature conversion.
    f = (9 / 5) * c + 32.0;

    cout << "Incorrect Fahrenheit value: " << f << endl;

    // CORRECT VERSION:
    // Using 9.0 or 5.0 forces floating-point division
    // 9.0 / 5.0 = 1.8
    // This correctly implements the Celsius to Fahrenheit formula
    f = (9.0 / 5.0) * c + 32.0;

    cout << "Correct Fahrenheit value: " << f << endl;

    return 0;
}



// 20. What is the output of the following program lines when embedded in
// a correct program that declares month, day, year, and date to be of type
// string?
// month = "03";
// day = "04";
// year = "06";
// date = month + day + year;
// cout << date << endl;
#include <iostream>
using namespace std;
int main(){
  string month = "03";
  string day = "04";
  string year = "06";
  string date = month + "/" + day + "/" + year;

  cout << date << endl;

  return 0;
}
// output : 03/04/06


