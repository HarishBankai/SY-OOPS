#include <iostream>   // For input (cin) and output (cout)
using namespace std;

// Function declaration
// This function will calculate the factorial of a number
long long fact(int n);

int main() {
    int n;   // Variable to store the input number

    // Ask the user to enter a number
    cout << "Enter the number: ";
    cin >> n;

    // Check if the number is negative
    if (n < 0) {
        // Factorial is not defined for negative numbers
        cout << "Invalid number" << endl;
    } else {
        // Call the factorial function and display the result
        cout << "Factorial of the number: " << fact(n) << endl;
    }

    return 0;   // Program ends successfully
}

// Recursive function definition to calculate factorial
long long fact(int n) {
    // Base condition:
    // If n is 0 or 1, factorial is 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        // Recursive case:
        // n! = n × (n-1)!
        return n * fact(n - 1);
    }
}

