#include "function.hpp"

int main()
{
    cout << "Enter your coefficient in order: " << endl;

    int a,b,c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << "Your function is: " << Sign(a) << "x^2 + " << Sign(b) << "x + " << Sign(c) << "." << endl;

    Simplify(a,b,c);

    return 0;
} 