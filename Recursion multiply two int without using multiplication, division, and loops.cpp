/*

Write a C++ program to multiply two integers without using multiplication, division, bitwise operators, and loops. Go to the editor
Sample Input: 8, 9
Sample Output: 72

Input: -11, 19
Output: -209

*/
#include <iostream>
#include <cmath>
using namespace std;

bool isNeg(int num1, int num2)
{
    bool res = false;

    if(num1 < 0 && num2 < 0)
    {
        res = false;
    }

    if((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0))
    {
        res = true;
    }

    return res;
}


int multiplyInt(int num1, int num2, int res, bool neg)
{

    if(num2 == 0)
    {
        if(neg == true)
        {
            return res * -1;
        }

        return res;
    }
    num2--;
    res = res + num1;
    return multiplyInt(num1, num2, res, neg);
}


int main()
{
    cout << "Enter num1: ";
    int n1;
    cin >> n1;
    cout << "Enter num2: ";
    int n2;
    cin >> n2;
    cout << n1 << " * " << n2 << " = " << multiplyInt(abs(n1), abs(n2), 0, isNeg(n1 , n2));
}
