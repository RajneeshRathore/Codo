/*Imagine a tollbooth with a class called TollBooth. The two data items are of type
unsigned int and double to hold the total number of cars and total amount of money
collected. A constructor initializes both of these data members to 0. A member
function called payingCar( )increments the car total and adds 0.5 to the cash total.
Another function called nonPayCar( ) increments the car total but adds nothing to
the cash total. Finally a member function called display( )shows the two totals.
Include a program to test this class. This program should allow the user to push one
key to count a paying car and another to count a non paying car. Pushing the ESC
key should cause the program to print out the total number of cars and total cash
and then exit.
*/
#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    // Constructor to initialize data members
    TollBooth() : totalCars(0), totalCash(0.0) {}

    // Function to count a paying car
    void payingCar() {
        totalCars++;
        totalCash += 0.5;
    }

    // Function to count a non-paying car
    void nonPayCar() {
        totalCars++;
    }

    // Function to display the totals
    void display() const {
        cout << "Total number of cars: " << totalCars << endl;
        cout << "Total cash collected: $" << totalCash << endl;
    }
};

int main() {
    TollBooth booth;
    char ch;

    cout << "Press 'p' for paying car, 'n' for non-paying car, and 'ESC' to exit and display totals.\n";

    while (true) {
        ch = cin.get();
        if (ch == 27) { // ESC key ASCII code
            booth.display();
            break;
        } else if (ch == 'p' || ch == 'P') {
            booth.payingCar();
        } else if (ch == 'n' || ch == 'N') {
            booth.nonPayCar();
        }
    }

    return 0;
}
