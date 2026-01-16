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