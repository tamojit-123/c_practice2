#include <iostream>

using namespace std;

int main()
{
    long dividend, divisor;
    char ch;
    do
    {
        cout << "enter dividend: ";
        cin >> dividend;
        cout << "enter divisor: ";
        cin >> divisor;
        if (divisor == 0 )
        {
            cout << "Illegal dividend\n";
            continue;
        }
        cout << "Quotient is " << dividend / divisor;
        cout << ", remainder is " << dividend % divisor;
        cout << "\nDo another? (y/n): ";
        cin >> ch;
    }
    while ( ch != 'n' );
    return 0;
}
