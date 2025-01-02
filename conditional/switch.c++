#include<iostream>  // Include the input-output stream library
using namespace std;  // Use the standard namespace to avoid using 'std::' repeatedly

int main() {  // Main function where the execution of the program begins
  int day;  // Declare an integer variable to store the day input by the user
  cin >> day;  // Take input from the user and store it in the 'day' variable

  // Switch statement to print the day of the week based on the input value
  switch(day) {
    case 1:  // If the input is 1
      cout << "Monday";  // Output "Monday"
      break;  // Exit the switch block
    case 2:  // If the input is 2
      cout << "Tuesday";  // Output "Tuesday"
      break;  // Exit the switch block
    case 3:  // If the input is 3
      cout << "Wednesday";  // Output "Wednesday"
      break;  // Exit the switch block
    case 4:  // If the input is 4
      cout << "Thursday";  // Output "Thursday"
      break;  // Exit the switch block
    case 5:  // If the input is 5
      cout << "Friday";  // Output "Friday"
      break;  // Exit the switch block
    case 6:  // If the input is 6
      cout << "Saturday";  // Output "Saturday"
      break;  // Exit the switch block
    case 7:  // If the input is 7
      cout << "Sunday";  // Output "Sunday"
      break;  // Exit the switch block
    default:  // If the input doesn't match any case (not between 1 and 7)
      cout << "Enter a valid number";  // Output an error message
  }

  return 0;  // Return 0 to indicate the program executed successfully
}


// case 2 :
#include <iostream>
using namespace std;

int main(){
  char gender;
  cout << "Enter 'M' for male or 'F' for female: ";
  cin >> gender;

  switch(gender){
    case 'M': // For male
    case 'm': // For male (lowercase)
      cout << "Entered person is male." << endl;
      break;

    case 'F': // For female
    case 'f': // For female (lowercase)
      cout << "Entered person is female." << endl;
      break;

    default:
      cout << "Invalid input" << endl;
  }
  return 0;
}
