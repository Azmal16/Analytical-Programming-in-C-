#include <iostream>
#include <cstring>
using namespace std;
int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int firstDigit(int n)
{
    // Remove last digit from number
    // till only one digit is left
    while (n >= 10)
        n /= 10;

    // return the first digit
    return n;
}
int task()
{
    int a;
    int out;
    cin >> a;
    int numOfDigits = countDigit(a);
    int firsDigit = firstDigit(a);
    out = 10 * (firsDigit - 1);
    for (int i = 1; i <= numOfDigits; i++)
    {
        out = out + i;
    }
    return out;
}
int main()
{
    int testCases;
    cin >> testCases;
    int arr[testCases];
    for (int i = 0; i < testCases; i++)
    {
        arr[i] = task();
    }
    for (int i = 0; i < testCases; i++)
    {
        cout << arr[i] << endl;
    }
}