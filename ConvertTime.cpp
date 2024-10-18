#include <iostream>

using namespace std;

// Function to convert seconds to hours, minutes, and seconds
void convert_seconds(int total_seconds) {
    int hours = total_seconds / 3600;  // Calculate hours
    int remaining_seconds = total_seconds % 3600;  // Remaining seconds after hours
    int minutes = remaining_seconds / 60;  // Calculate minutes
    int seconds = remaining_seconds % 60;  // Remaining seconds after minutes

    // Display the result
    cout << "************************************************" << endl;
    cout << "           Welcome to my first program           " << endl;
    cout << "Convert a large number of seconds into hours, minutes, and seconds." << endl;
    cout << "************************************************" << endl;
    cout << "\nPlease enter a large number of seconds: " << total_seconds << endl;
    cout << "The number of hours in the number is: " << hours << endl;
    cout << "The number of minutes in the number is: " << minutes << endl;
    cout << "The number of seconds in the number is: " << seconds << endl;
    cout << "\nPress any key to continue..." << endl;
}

int main() {
    int total_seconds = 3663;  // Example input
    convert_seconds(total_seconds);
    return 0;
}
