

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default Constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2(101, "Priyanshi");
    s2.display();

    Student s3 = s2;
    s3.display();

    return 0;
}