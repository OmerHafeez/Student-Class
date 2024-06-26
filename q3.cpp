#include <iostream>
#include <string>

class Student {
private:
    int stdID;
    std::string stdName;
    std::string dept;

public:
    
    Student() {
        stdID = id;
        stdName = name;
        dept = dept;
    }

    
    Student(int id, const std::string& name) {
        stdID = id;
        stdName = name;
        dept = dept;
    }

    // Overloaded Constructor2
    Student(int id, const std::string& name, const std::string& department) {
        stdID = id;
        stdName = name;
        dept = dept;
    }

    // Overloaded Constructor3
    Student(const std::string& name, const std::string& department) {
        stdID = id;
        stdName = name;
        dept = dept;
    }

    // Input data from the user for all members
    void inputData() {
        cout << "Enter student ID: ";
        cin >> stdID;

        cout << "Enter student name: ";
        cin >> stdName;

        cout << "Enter department: ";
        cin >> dept;
    }

    // Display data method
    void displayData() const {
        std::cout << "\nStudent Details:\n";
        std::cout << "ID: " << stdID << "\n";
        std::cout << "Name: " << stdName << "\n";
        std::cout << "Department: " << dept << "\n";
    }
};

int main() {

    Student obj1; // Default Constructor
    Student obj2(1966, "Omer"); // Overloaded Constructor1
    Student obj3(0123, "Omer", "Data Science"); // Overloaded Constructor2

 
    obj1.inputData();

 
    obj1.displayData();
    obj2.displayData();
    obj3.displayData();

    return 0;
}