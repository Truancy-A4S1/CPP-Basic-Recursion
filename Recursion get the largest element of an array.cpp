/*

Write a program in C to get the largest element of an array using recursion.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :

Largest element of an array is: 25

*/

#include <iostream>
using namespace std;

int getMax(int arr[], int i, int maxx, int len)
{
    if(arr[i] > maxx)
    {
        maxx = arr[i];
    }

    if(i == len)
    {
        return maxx;

    }else{
        i++;
        return getMax(arr, i, maxx, len);
    }

}

int main()
{
    cout << "Enter array size: ";
    int sz;
    cin >> sz;
    int arrr[sz];

    for(int i=0; i<sz; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arrr[i];
    }
    cout << "/nLargest element: " << getMax(arrr, 0, 0, sz-1);
}
