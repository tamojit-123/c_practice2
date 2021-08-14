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
        cout << "quotient is: " << dividend / divisor;
        cout << ", remainder is : " << dividend % divisor;
        cout << "\nDO another? (y/n):";
        cin >> ch;
    }
    while (ch != 'n');
    return 0;
}
