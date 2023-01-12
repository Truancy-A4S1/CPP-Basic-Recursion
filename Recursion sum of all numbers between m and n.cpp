#include <iostream>
using namespace std;

int sumMtoN(int m, int n, int low)
{
    if(n==low)
    {
        return n;
    }
    else
    {
        return n + sumMtoN(m, n-1, low);
    }
}

int main()
{

    cout << "Enter Start Number: ";
    int minimum;
    cin >> minimum;
    cout << "Enter End Number: ";
    int maximum;
    cin >> maximum;
    cout << endl << "Sum of all numbers from " << minimum << "-" << maximum << ": " << sumMtoN(minimum, maximum, minimum) << endl;

}
