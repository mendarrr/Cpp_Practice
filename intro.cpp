// This is a basic C++ program that calculates sum of numbers

// Include the input/output stream library - needed for cout and cin operations
#include<iostream>

// Using the standard namespace - allows us to use cout, cin without std:: prefix
using namespace std;

// Main function - entry point of every C++ program
int main() {
    // Declare two integer variables: n for count of numbers, sum initialized to 0
    int n, sum = 0;
    
    // cout prints text to console, << is the output operator
    cout << "Enter the number of elements: ";
    
    // cin reads input from user, >> is the input operator
    cin >> n;

    // Prompt user to enter n numbers
    cout << "Enter " << n << " integers: ";
    
    // For loop that runs n times:
    // i starts at 0, runs while i < n, increments i by 1 each time
    for (int i = 0; i < n; i++) {
        // Temporary variable to store each number
        int num;
        // Read each number from user
        cin >> num;
        // Add each number to sum
        sum += num;
    }

    // Print the final sum, endl adds a new line
    cout << "Sum of the entered numbers: " << sum << endl;

    // Return 0 indicates successful program completion
    return 0;
}

// To run the program, compile it using a C++ compiler (e.g., g++) and then execute the compiled binary.
// For example:
// g++ intro.cpp -o intro
// ./intro
// This will prompt you to enter the number of elements and then the elements themselves.

