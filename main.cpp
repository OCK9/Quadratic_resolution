#include "function.hpp"

int main()
{
    cout << "Quel type d'equation:\n 1)Premier degree\n 2)Second degree\n" ;
    int r;
    cin >> r;

    switch(r)
    {
        case 1:
        cout << "Ecriver les coefficient: " << endl;
        int x,y;
        cout << "a = ";
        cin >> x;
        cout << "b = ";
        cin >> y;

        cout << "l'equation est: " << Sign(x) << "x = " << Sign(y) << endl;
        Prmdegree(x,y);
        break;

        case 2:
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
            break;
        
            default:
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
            break;
    }


    return 0;
} 