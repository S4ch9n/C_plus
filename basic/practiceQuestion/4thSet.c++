// 21. Write an if-else statement that outputs the word High if the value of the
// variable score is greater than 100 and Low if the value of score is at most
// 100. The variable score is of type int.
#include <iostream>
using namespace std;

int main(){
  int score;
  cout << "Enter score : " << endl;
  cin >> score;
  if(score > 100) cout << "High";
  else cout << "Low";

  return 0;
}



// 22. Suppose savings and expenses are variables of type double that have
// been given values. Write an if-else statement that outputs the word
// Solvent, decreases the value of savings by the value of expenses, and
// sets the value of expenses to 0, provided that savings is at least as large
// as expenses. If, however, savings is less than expenses, the if-else
// statement simply outputs the word Bankrupt and does not change the
// value of any variables.
#include <iostream>
using namespace std;

int main() {
    double savings = 0;
    double expenses = 0;

    if (savings >= expenses) {
        cout << "Solvent" << endl;
        savings -= expenses;
        expenses = 0;
    } else {
        cout << "Bankrupt" << endl;
    }

    return 0;
}


//23. Write an if-else statement that outputs the word Passed provided the
// value of the variable exam is greater than or equal to 60 and the value
// of the variable programs_done is greater than or equal to 10. Otherwise,
// the if-else statement outputs the word Failed. The variables exam and
// programs_done are both of type int.
#include <iostream>
using namespace std;
int main(){
  int exam , programs_done;
  cin >> exam >> programs_done;
  if((exam >= 60) && (programs_done >= 10)) cout << "Passed";
  else cout << "Failed";

  return 0;
}

//24. Write an if-else statement that outputs the word Warning provided
// that either the value of the variable temperature is greater than or equal
// to 100, or the value of the variable pressure is greater than or equal to
// 200, or both. Otherwise, the if-else statement outputs the word OK. The
// variables temperature and pressure are both of type int.
#include <iostream>
using namespace std;

int main(){
  int temperature , pressure;
  cin >> temperature >> pressure;

  if((temperature >= 100) || (pressure >= 200)) cout << "Warning";
  else cout << "OK";

  return 0;
}


// 25. Consider a quadratic expression, say
// x2 − x − 2
// Describing where this quadratic is positive (that is, greater than 0), involves
// describing a set of numbers that are either less than the smaller root
// (which is −1) or greater than the larger root (which is +2). Write a C++
// Boolean expression that is true when this formula has positive values.
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter value of x: ";
    cin >> x;

    if ((x < -1) || (x > 2)) {
        cout << "The expression x^2 - x - 2 is positive.";
    } else {
        cout << "The expression x^2 - x - 2 is not positive.";
    }

    return 0;
}


// 27. What is the output of the following cout statements embedded in these
// if-else statements? You are to assume that these are embedded in a
// complete correct program. Explain your answer.
// a. if (0)
// cout << "0 is true";
// else
// cout << "0 is false";
// cout << endl;
// b. if (1)
// cout << "1 is true";
// else
// cout << "1 is false";
// cout << endl;
// c. if (−1)
// cout << "−1 is true";
// else
// cout << "−1 is false";
// cout << endl;
#include <iostream>
using namespace std;

int main(){
  if(0) cout << "0 is true";
  else cout << "0 is false";
  //output : 0 is false

  if(1) cout << "1 is true";
  else cout << "1 is false";
  //output : 1 is true

  if(-1) cout << "−1 is true";
  else cout << "−1 is false";
  //output : -1 is true
  cout << endl;

  return 0;
}

//The following if-else statement will compile and run without any
// problems. However, it is not laid out in a way that is consistent with the
// other if-else statements we have used in our programs. Rewrite it so that
// the layout (indenting and line breaks) matches the style we used in this
// chapter.
// if (x < 0) {x = 7; cout << "x is now positive."
//else {x = − 7; cout << "x is now negative.";}
#include <iostream>
using namespace std;

int main(){
  int x;
  cin >> x;
  if(x < 0){
    x = 7;
    cout << "x is positve";
  }else{
    x = -7;
    cout << "x is negative";
  }


  return 0;
}


//  Write a complete C++ program that asks the user for a number of gallons
// and then outputs the equivalent number of liters. There are 3.78533 liters
// in a gallon. Use a declared constant. Since this is just an exercise, you need
// not have any comments in your program.

#include <iostream>
using namespace std;

int main() {
    int gallons;
    const double LITERS_PER_GALLON = 3.78533;

    cout << "Enter the number of gallons: ";
    cin >> gallons;

    cout << "The equivalent number of liters: "
         << gallons * LITERS_PER_GALLON << endl;

    return 0;
}


//A metric ton is 35,273.92 ounces. Write a program that will read the weight
// of a package of breakfast cereal in ounces and output the weight in metric
// tons as well as the number of boxes needed to yield 1 metric ton of cereal.
// Your program should allow the user to repeat this calculation as often as
// the user wishes.
#include <iostream>
using namespace std;

int main() {
    const double OUNCES_PER_METRIC_TON = 35273.92;

    double cereal_box_weight_in_ounces;
    cout << "Enter the weight of the cereal box in ounces: ";
    cin >> cereal_box_weight_in_ounces;

    double metric_tons = cereal_box_weight_in_ounces / OUNCES_PER_METRIC_TON;
    cout << "Weight in metric tons: " << metric_tons << endl;

    double number_of_boxes = OUNCES_PER_METRIC_TON / cereal_box_weight_in_ounces;
    cout << "Number of boxes needed for one metric ton: "
         << number_of_boxes << endl;

    return 0;
}


//Powers of numbers can be calculated by multiplying the number by itself
// for as many times as the value of the exponent. For example, 2 raised to
// the power 4 can be calculated by multiplying 2 by itself 4 times to get 16.
// Write a program that:
// 1. inputs a double as the base number and an int as the exponent;
// 2. multiplies the base number by itself using a loop that repeats for the
// number of times in the int;
// 3. outputs the exponential value calculated.
// Use an if statement for the special case where the output is 1 if the int
// value is 0. For a more challenging version, deal with the case where the
// exponent is negative.
#include <iostream>
using namespace std;

int main() {
    double number;
    int exponent;
    double result = 1.0;

    cout << "Enter base number: ";
    cin >> number;

    cout << "Enter exponent: ";
    cin >> exponent;

    // Special case: exponent = 0
    if (exponent == 0) {
        result = 1.0;
    }
    // Positive exponent
    else if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= number;
        }
    }
    // Negative exponent
    else {
        for (int i = 0; i < -exponent; i++) {
            result *= number;
        }
        result = 1.0 / result;
    }

    cout << "Result: " << result << endl;

    return 0;
}


// Many treadmills output the speed of the treadmill in miles per hour
// (mph) on the console, but most runners think of speed in terms of a
// pace. A common pace is the number of minutes and seconds per mile
// instead of mph.
// Write a program that starts with a quantity in mph and converts the
// quantity into minutes and seconds per mile. As an example, the proper
// output for an input of 6.5 mph should be 9 minutes and 13.8 seconds per
// mile. If you need to convert a double to an int, which will discard any value
// after the decimal point, then you may use
// intValue = static_cast<int>(dblVal);
#include <iostream>
using namespace std;

int main() {
    double mph;

    cout << "Enter speed in miles per hour: ";
    cin >> mph;

    // Total minutes per mile
    double totalMinutes = 60 / mph;

    // Extract whole minutes
    int minutes = static_cast<int>(totalMinutes);

    // Convert remaining fraction to seconds
    double seconds = (totalMinutes - minutes) * 60;

    cout << "Pace: " << minutes << " minutes and "
         << seconds << " seconds per mile" << endl;

    return 0;
}


// 4. Write a very simple conversational dialog program. Your program should
// do the following:
// ■■ Say “Hello” to the user.
// ■■ Ask them if they are having a good day, and record their input.
// ■■ If their response is anything other than a ‘y’ for yes or an ‘n’ for no,
// repeat the question.
// ■■ If they respond with a ‘y’, output “I’m glad to hear that”, and if they
// answer with an ‘n’, then output “I hope your day gets better soon.”
// You may need to use a do-while loop to repeat the questions to the user.

#include <iostream>
using namespace std;

int main() {
    char user;

    cout << "Hello!" << endl;

    do {
        cout << "Are you having a good day? (y/n): ";
        cin >> user;
    } while (user != 'y' && user != 'n');

    if (user == 'y') {
        cout << "I'm glad to hear that." << endl;
    } else {
        cout << "I hope your day gets better soon." << endl;
    }

    return 0;
}
