// 1. Give the declaration for two variables called feet and inches. Both
// variables are of type int and both are to be initialized to zero in the
// declaration. Use both initialization alternatives.
#include <iostream>
using namespace std;
int main(){
  int feet = 0;
  int inches(0); //alteranate way

  return 0;
}

// 2. Give the declaration for two variables called count and distance. count
// is of type int and is initialized to zero. distance is of type double and is
// initialized to 1.5.
#include <iostream>
using namespace std;
int main(){
  int count = 0;
  double distance = 1.5;

  return 0;
}

// 3. Give a C++ statement that will change the value of the variable sum to the
// sum of the values in the variables n1 and n2. The variables are all of type int.
#include <iostream>
using namespace std;
int main(){
  int n1 , n2;
  int sum = 0;
  sum = n1 + n2;
  cout << "Sum = " << sum;

  return 0;
}


//4. Give a C++ statement that will increase the value of the variable length by
// 8.3. The variable length is of type double.
#include <iostream>
using namespace std;

int main() {
    double length = 5.0;  // existing variable
    length += 8.3;        // increase by 8.3
    cout << "Length = " << length << endl; // output: 13.3
    return 0;
}


// 5. Give a C++ statement that will change the value of the variable product to
// its old value multiplied by the value of the variable n. The variables are all
// of type int.
#include <iostream>
using namespace std;
int main(){
  int product = 2;
  int n1 = 3;
  product *= n1;
  
  cout << product << endl;

  return 0;

}

// 6. Write a program that contains statements that output the value of five or
// six variables that have been declared, but not initialized. Compile and run
// the program. What is the output? Explain.
#include <iostream> 
using namespace std;
int main(){
  int n1,n2,n3,n4,n5,n6;
  cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << " " << n6 << endl;

  return 0;
}
//In this program, the six variables n1 to n6 are declared but not initialized. Since they are local variables, C++ does not automatically set them to any value. When we print them, the output is unpredictable garbage values that were already present in the memory locations assigned to these variables. The exact numbers may differ each time the program runs. To avoid this, variables should always be initialized before use.




// 7. Give good variable names for each of the following:
// a. b. c. 
// A variable to hold the speed of an automobile
// A variable to hold the pay rate for an hourly employee
// A variable to hold the highest score in an exam
#include <iostream>
using namespace std;
int main(){

  int carSpeed;       // Speed of the automobile
  int hourlyPay;      // Pay rate for an hourly employee
  int highestScore;   // Highest score in an exam


  return 0;

}


// 8.
// Give an output statement that will produce the following message on the
// screen:
// The answer to the question of
// Life, the Universe, and Everything is 42.
#include <iostream>
using namespace std;

int main(){
 cout << "The answer to the question of\nLife, the Universe, and Everything is 42.";
 
 return 0;
}


//9. Give an input statement that will fill the variable the_number (of type
// int) with a number typed in at the keyboard. Precede the input statement
// with a prompt statement asking the user to enter a whole number.
#include <iostream>
using namespace std;

int main(){
  int the_number;
  cout << "Enter the whole number \n";
  cin >> the_number;
}


// 10. What statements should you include in your program to ensure that,
// when a number of type double is output, it will be output in ordinary
// notation with three digits after the decimal point?
 #include <iomanip>
 #include <iostream>
 using namespace std;
 int main(){
  double x;
  cout << "Enter values : \n";
  cin >> x;
  cout << fixed << setprecision(3) << x;

  return 0;
 }


//  11. Write a complete C++ program that writes the phrase Hello world to the
// screen. The program does nothing else.
#include <iostream>
using namespace std;

int main(){
  cout << "Hello world";

  return 0;
}

// 12. Write a complete C++ program that reads in two whole numbers and
// outputs their sum. Be sure to prompt for input, echo input, and label all
// output.
#include <iostream>
using namespace std;

int main(){
  int n1 , n2;
  cout << "Enter first number : ";
  cin >> n1;

  cout << "Enter second number : ";
  cin >> n2;

  cout << "First number is " << n1 << " and second number is " << n2 << endl;

  cout << "Total sum is : " << n1 + n2;

  return 0;
}



// 14. Write a short program that declares and initializes double variables one,
// two, three, four, and five to the values 1.000, 1.414, 1.732, 2.000, and
// 2.236, respectively. Then write output statements to generate the following
// legend and table. Use the tab escape sequence \t to line up the columns.
// If you are unfamiliar with the tab character, you should experiment with
// it while doing this exercise. A tab works like a mechanical stop on a
// typewriter. A tab causes output to begin in a next column, usually a
// multiple of eight spaces away. Many editors and most word processors will
// have adjustable tab stops. Our output does not.
// The output should be:
// N Square Root
// 1 1.000
// 2 1.414
// 3 1.732
// 4 2.000
// 5 2.236
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double one = 1.000;
    double two = 1.414;
    double three = 1.732;
    double four = 2.000;
    double five = 2.236;

    cout << "N\tSquare Root\n";
    cout << fixed << setprecision(3);

    cout << "1\t" << one << endl;
    cout << "2\t" << two << endl;
    cout << "3\t" << three << endl;
    cout << "4\t" << four << endl;
    cout << "5\t" << five << endl;

    return 0;
}
