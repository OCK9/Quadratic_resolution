#include <iostream>
#include <cmath>
#include <string>
#include "function.hpp"

using namespace std;

string Sign(int number)
{
    if(number < 0)
    {
        return "(" + to_string(number) + ")";
    }
    else
    {
        return to_string(number);
    }
}

void Complex(double d, int a, int b)
{
    double e = sqrt(abs(d));
    cout << "z1 = " << b/2*a << " + " << e/2*a << "i" << endl;
    cout << "z2 = " << b/2*a << " - " << e/2*a << "i" << endl;
}

void deltaCalcul(int a, int b, int c)
{
    double d = pow(b,2)-4*a*c;

    if(d==0)
    {
        cout << "Result: x1 = x2 = " << Sign(-b/2*a) << endl; 
    }
    else if(d>0)
    {
        double x1, x2;
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        
        cout << "Result: (x - " << Sign(x1) << ") " << "(x - " << Sign(x2) << ") " << endl;
        cout << "X1 = " << x1 << ", X2 = " << x2 << endl;
    }
    else 
    {
        Complex(d, a, b);
    }
}

void Simplify(int a, int b, int c)
{
    int x = a+b+c;

    if(x==0)
    {
        cout << " Result: (x - 1) (x - " << Sign(c/a) << endl;
        cout << "X1 = 1, X2 = " << c/a << endl;   
    }
    else if(x == 2*b)
    {
        cout << " Result: (x + 1) (x - " << Sign(-c/a) << endl;
        cout << "X1 = -1, X2 = " << -c/a << endl;  
    }
    else
    {
        deltaCalcul(a,b,c);
    }
}


