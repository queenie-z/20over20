// This is this first program in the 20over20 series.
// This program takes in an array and calculates the average of those numbers.
// October 27th, 2023.
// By Queenie Zhao.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create vector for storage.
    vector<int> vec;
    // Storing temporary entered value.
    int val;
    // Create variable to store average number.
    int avg;
    // Stores answer to if user wants to input again.
    char again;
    // Stores the sum of all numbers in the vector.
    int sum;
    // Stores the size of the vector. 
    // This is necessary since the size of the vector changes dynamically.
    int vecSize;

    // Create a do while loop for the content below.

    // Message to prompt user to enter a list of numbers each separated by a space.
    cout << "Enter a list of numbers separated by a space: ";

    // Takes in numbers entered and store in vector dynamically.
    while (cin >> val) {
        vec.push_back(val);
    }

    // Checks if vector is empty. Ask user to input again if so.
    if (vec.empty()) {
        cout << "It seems that you didn't enter anything, would you like to try again?" << endl;
        cin >> again;

        // If again is 'N'/'n', break.
        // If again is 'Y'/'y', go back to beginning of loop.
    }

    // Adds all numbers in vectors and divide by size of vector.
    vecSize = vec.size(); // Getting size of vector;
    for (int i = 0; i < vecSize; ++i) {
        sum += vec.back();
        vec.pop_back();
    }
    avg = sum / vecSize;

    // Outputs average number. Ask user if they want to input again.
    cout << "The average number of your list is: " << avg << ".\n";

    // Ask user to input again. Could be more efficient if called as a function.

    // It's not much but it's honest work.
    return 0;
}