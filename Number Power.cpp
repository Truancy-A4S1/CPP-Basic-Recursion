#include <iostream>
using namespace std;

int numberPower(int base, int power)
{
    if(power != 0)
    {
        return base * numberPower(base, power-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int base, pow;
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> pow;
    cout << base << "^" << pow << " = " << numberPower(base, pow) << endl;
}
