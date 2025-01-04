#include<iostream>
using namespace std;

int main() {
    int i = 12; // Step 1: Initialization of the loop control variable
    
    // Step 2: The do-while loop starts with the "do" block
    do {
        cout << "hello this is nick fury" << endl; // Print the message at least once
        i++; // Step 3: Increment the loop control variable
    } while (i <= 10); // Step 4: Check the condition after executing the block

    // Step 5: Print the value of i after exiting the loop
    cout << "The value of i is: " << i; 

    return 0; // End of the program
}
 