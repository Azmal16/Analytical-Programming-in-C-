#include <iostream>
using namespace std;
int main()
{
    long long int n, m = 0;
    cin >> n;
    while (1)
    {
        if (n == 1)
        {
            cout << m << endl;
            break;
        }
        if (n % 6 == 0)
        {
            n = n / 6;
            m++;
            cout << 'div';
        }
        else if ((n * 2) % 6 == 0)
        {
            n = n * 2;
            n = n / 6;
            m += 2;
        }
        else
        {
            cout << "-1" << endl;
            break;
        }
    }
}