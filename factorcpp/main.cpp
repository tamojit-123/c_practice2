#include <iostream>

using namespace std;

int main()
{
    unsigned int  numb;
    unsigned long fact=1;
    cout << "enter a number: ";
    cin >> numb;
    for(int j=numb; j>0; j--)
        fact *= j;
    cout << "factorial is " << fact << endl;
    return 0;
}
