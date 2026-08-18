#include <iostream>
using namespace std;

// 1. Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call By Value: " << x << endl;
}

// 2. Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call By Reference: " << x << endl;
}

// 3. Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call By Address: " << *x << endl;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Initial Values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // Call by Value
    callByValue(a);
    cout << "After Call By Value: a = " << a << endl;

    // Call by Reference
    callByReference(b);
    cout << "After Call By Reference: b = " << b << endl;

    // Call by Address
    callByAddress(&c);
    cout << "After Call By Address: c = " << c << endl;

    return 0;
}
