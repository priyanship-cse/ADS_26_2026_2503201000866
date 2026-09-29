#include <iostream>
#include <string>
using namespace std;

class StudentNumber {
private:
    string name;
    long long rollNo;
    int number;

public:
    StudentNumber(string n, long long r) {
        name = n;
        rollNo = r;
        number = r % 1000;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    void displayOriginal() {
        cout << "Original Number: " << number << endl;
    }

    void displayReverse() {
        int n = number, rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        cout << "Reverse: " << rev << endl;
    }

    void displaySquare() {
        cout << "Square: " << number * number << endl;
    }

    void displayDigitSum() {
        int n = number, sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        cout << "Sum of Digits: " << sum << endl;
    }
};

int main() {
    string name;
    long long rollNo;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your roll number: ";
    cin >> rollNo;

    StudentNumber s(name, rollNo);

    s.displayDetails();
    s.displayOriginal();
    s.displayReverse();
    s.displaySquare();
    s.displayDigitSum();

    return 0;
}