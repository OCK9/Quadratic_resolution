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
    //This function display the sign of a number 
}

void Complex(double d, int a, int b)
{
    double e = sqrt(abs(d));
    cout << "z1 = " << b/2*a << " + " << e/2*a << "i" << endl;
    cout << "z2 = " << b/2*a << " - " << e/2*a << "i" << endl;

    //This function display the complex response. 

}

void deltaCalcul(int a, int b, int c)
{
    double d = pow(b,2)-4*a*c; //declaration of Delta. 

    if(d==0)
    {
        //if delta equal to 0
        cout << "Result: x1 = x2 = " << Sign(-b/2*a) << endl; 
    }
    else if(d>0)
    {
        //if delta > 0 and display the 2 roots.
        double x1, x2;
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        
        cout << "Result: (x - " << Sign(x1) << ") " << "(x - " << Sign(x2) << ") " << endl;
        cout << "X1 = " << x1 << ", X2 = " << x2 << endl;
    }
    else 
    {
        //if delta < 0.
        Complex(d, a, b);
    }
}

void Simplify(int a, int b, int c)
{
    int x = a+b+c;

    //this function do the simple simplification of a function.

    if(x==0)
    {
        //if a+b+c=0.
        cout << " Result: (x - 1) (x - " << Sign(c/a) << endl;
        cout << "X1 = 1, X2 = " << c/a << endl;   
    }
    else if(x == 2*b)
    {
        //if b= a+c.
        cout << " Result: (x + 1) (x - " << Sign(-c/a) << endl;
        cout << "X1 = -1, X2 = " << -c/a << endl;  
    }
    else
    {
        //if we have to calcul delta.
        deltaCalcul(a,b,c);
    }
}

void Prmdegree(int a, int b)
{
    float x = b/a;
    cout << "Result: x = " << x << endl;
}


