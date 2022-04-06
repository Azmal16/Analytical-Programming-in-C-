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
        else if (n % 6 == 0)
        {
            n = n / 6;
            m++;
        }
        else
        {
            n = n * 2;
            m++;
        }
    }
}