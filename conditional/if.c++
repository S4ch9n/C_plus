//Case 1 : Age Category Identification
#include <iostream>  // Include the input-output stream library
using namespace std;  // Use the standard namespace to avoid using 'std::' repeatedly

int main() {
    int age;  // Declare an integer variable to store the user's age
    cout << "Enter your age: ";  // Prompt the user to enter their age
    cin >> age;  // Take input from the user and store it in the 'age' variable

    // Check for invalid age input (negative age)
    if (age < 0) {
        cout << "Invalid age. Please enter a non-negative number." << endl;  // Output error message
    } 
    // Check if the user is an adult (18 or older)
    else if (age >= 18) {
        cout << age << endl << "You are an adult." << endl;  // Output age and message for adults
    } 
    // Check if the user is a kid (6 or younger)
    else if (age <= 6) {
        cout << age << endl << "You are a kid." << endl;  // Output age and message for kids
    } 
    // If the user is neither a kid nor an adult, they are between 7 and 17 years old
    else {
        cout << age << endl << "You are not an adult yet." << endl;  // Output age and message for those not yet adults
    }

    return 0;  // Return 0 to indicate the program executed successfully
}



// Case 2 : School Grading System
#include<iostream>  // Include the input-output stream library
using namespace std;  // Use the standard namespace to avoid using 'std::' repeatedly

int main() {
  int marks; // Declare an integer variable to store the marks
  char grade; // Declare a character variable to store the grade
  cin >> marks;  // Take the marks input from the user

  // Check if the marks are outside the valid range (0-100)
  if (marks > 100 || marks < 0) {
    cout << "Not a valid number";  // Output error message for invalid marks
  } 
  // Check if the marks are 80 or above (Grade A)
  else if (marks >= 80) {
    grade = 'A';  // Assign grade 'A'
    cout << "The grade is - " << grade;  // Output the grade
  } 
  // Check if the marks are between 60 and 79 (Grade B)
  else if (marks >= 60) {
    grade = 'B';  // Assign grade 'B'
    cout << "The grade is - " << grade;  // Output the grade
  } 
  // Check if the marks are between 50 and 59 (Grade C)
  else if (marks >= 50) {
    grade = 'C';  // Assign grade 'C'
    cout << "The grade is - " << grade;  // Output the grade
  } 
  // Check if the marks are between 45 and 49 (Grade D)
  else if (marks >= 45) {
    grade = 'D';  // Assign grade 'D'
    cout << "The grade is - " << grade;  // Output the grade
  } 
  // Check if the marks are between 25 and 44 (Grade E)
  else if (marks >= 25) {
    grade = 'E';  // Assign grade 'E'
    cout << "The grade is - " << grade;  // Output the grade
  } 
  // If marks are below 25 (Grade F)
  else {
    grade = 'F';  // Assign grade 'F'
    cout << "The grade is - " << grade;  // Output the grade
  }

  return 0;  // Return 0 to indicate the program executed successfully
}


// Case 3 : Job Eligibility Based on Age
#include <iostream>  // Include the input-output stream library
using namespace std;  // Use the standard namespace to avoid using 'std::' repeatedly

int main() {
  int age;  // Declare an integer variable to store the user's age
  cin >> age;  // Take the user's age as input

  // Check if the user is under 18 (not eligible for a job)
  if (age < 18) {
    cout << "Not eligible for job.";  // Output message for ineligible users
  } 
  // Check if the user is between 18 and 54 (eligible for a job)
  else if (age <= 54) {
    cout << "Person is eligible for job.";  // Output message for eligible users
  } 
  // Check if the user is between 55 and 57 (eligible but close to retirement)
  else if (age >= 55 && age <= 57) {
    cout << "Eligible for job, but retirement soon.";  // Output message for near-retirement users
  } 
  // If the user is 58 or older (retirement time)
  else {
    cout << "Retirement time.";  // Output message for retirement time
  }

  return 0;  // Return 0 to indicate the program executed successfully
}


// case 3 : find which number is greater
#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >>a >>b >>c;
  if(a > b){
    if(a > c){
     cout << "a is greatest number.";
    }else{
      cout << "c is greatest number.";
    }
  }else if(b > c){
    cout << "b is greatest number";
  }else{
    cout << "c is the greatest number";
  }
  return 0;
}

//another way to check the possibility if numbers are equal 
#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  if(a > b && a > c) {
    cout << "a is the greatest number." << endl;
  } else if(b > a && b > c) {
    cout << "b is the greatest number." << endl;
  } else if(c > a && c > b) {
    cout << "c is the greatest number." << endl;
  } else {
    cout << "There is a tie among the greatest numbers." << endl;
  }

  return 0;
}
