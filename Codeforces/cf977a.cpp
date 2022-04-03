

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; ++i)
    {
        if (n > 0 && n % 10 == 0)
        {
            n = n / 10;
        }
        else if (n > 0 && n % 10 != 0)
        {
            n--;
        }
        else
        {
            break;
        }
    }
    cout << n << endl;
}