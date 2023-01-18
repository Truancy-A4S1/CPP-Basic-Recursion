/*

Write a program in C to find the Factorial of a number using recursion. Go to the editor
Test Data :
Input a number : 5
Expected Output:

The Factorial of 5 is : 120


*/

#include <iostream>
using namespace std;

int getFact(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * getFact(n-1);
}

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << num << "! is equal: " << getFact(num);
    cout << endl;
}
