/*
    Write a program in C to check a number is a prime number or not using recursion.

*/

#include <iostream>
using namespace std;

int isPrime(int n, int i);

int main()
{
    cout << "This program will use recursion to identify if the number in range is PRIME or NOT PROME\n\n";
    cout << "Enter the minimum value: ";
    int minn;
    cin >> minn;

    cout << "Enter the maximum value: ";
    int maxx;
    cin >> maxx;

    cout << "\n";

    for(int i=minn; i<=maxx; i++)
    {
        if(isPrime(i, 2)== 1)
        {
            cout << i << " = PRIME\n";
        }else
        {
            cout << i << " = NOT PRIME\n";
        }
    }
}

int isPrime(int n, int i)   //return 0 if NOT PRIME, 1 if PRIME
{
    // special case if n is 1
    if(n == 1)
    {
        return 0;   //return NOT PRIME
    }

    // loop until i is half of n
    if(i <= n/2 )
    {
        if(n % i == 0)  // if n % i == 0, then i is also a factor of n besides 1 and n, therefore n is not prime.
        {
            return 0;   //return NOT PRIME
        }


        i++;
        return isPrime(n, i);   // call isPrime after adding 1 to the divisor i;

    }else   //if i < n, then there's no other factor of n except 1 and n
    {
        return 1; //return PRIME
    }
}
