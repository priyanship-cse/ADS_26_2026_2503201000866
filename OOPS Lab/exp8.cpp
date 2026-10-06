#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void display() {
        cout << "Sum = " << a << endl;
        cout << "Product = " << b << endl;
    }

    Number add(Number n) {
        Number temp;
        temp.a = a + n.a;
        temp.b = b + n.b;
        return temp;
    }
};

int main() {
    Number n1, n2, n3;

    n1.input();
    n2.input();

    n3 = n1.add(n2);

    n3.display();

    return 0;
}