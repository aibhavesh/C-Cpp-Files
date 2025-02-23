#include <iostream>
#include <string>
using namespace std;

class Birthday {
public:
    // Constructor to initialize the birthday
    Birthday(int cmonth, int cday, int cyear) {
        month = cmonth; // Corrected assignment
        day = cday;     // Corrected assignment
        year = cyear;   // Corrected assignment
    }

    // Method to print the date
    void printDate() {
        cout << month << "/" << day << "/" << year << endl;
    }

private:
    int month; // Month of birth
    int day;   // Day of birth
    int year;  // Year of birth
};

class People {
public:
    // Constructor to initialize the people object with name and birthday
    People(string cname, Birthday cdateOfBirth) : name(cname), dateOfBirth(cdateOfBirth) {
    }

    // Method to print the information
    void printInfo() {
        cout << name << " was born on: ";
        dateOfBirth.printDate();
    }

private:
    string name;        // Name of the person
    Birthday dateOfBirth; // Birthday of the person
};

int main() {
    // Create a Birthday object
    Birthday birthObject(29, 04, 2005);

    // Create a People object
    People infoObject("Shantilal", birthObject);

    // Print the information
    infoObject.printInfo();

    return 0;
}
 
