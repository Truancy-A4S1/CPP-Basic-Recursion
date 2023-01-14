/*

    Write a program in C to find the LCM of two numbers using recursion. Go to the editor
    Test Data :
    Input 1st number for LCM : 4
    Input 2nd number for LCM : 6
    Expected Output :

    The LCM of 4 and 6 :  12

*/

#include <iostream>
using namespace std;

int getLCM(int num1, int num2, int init1, int init2)
{
    if(num1 == num2)
        return num1;

    if(num1 < num2)
        num1 += init1;

    if(num1 > num2)
        num2 += init2;

    getLCM(num1, num2, init1, init2);
}


int main()
{

    cout << "Input 1st number for LCM : ";
    int n1;
    cin >> n1;
    cout << "Input 2nd number for LCM : ";
    int n2;
    cin >> n2;

    cout << "\nThe LCM of " << n1 << " and " << n2 << " :  " << getLCM(n1, n2, n1, n2) << endl;

}
