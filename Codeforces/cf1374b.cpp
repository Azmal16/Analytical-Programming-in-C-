#include <iostream>
using namespace std;
long long int n, t, m;
int conj()
{
    m = 0;
    cin >> n;
    while (n != 1)
    {
        // if (n == 1)
        // {
        //     //cout << m << endl;
        //     break;
        // }
        if (n % 6 == 0)
        {
            n = n / 6;
            m++;
            // cout << 'div';
        }
        else if ((n * 2) % 6 == 0)
        {
            n = n * 2;
            n = n / 6;
            m += 2;
        }
        else
        {
            // cout << "-1" << endl;
            m = -1;
            break;
        }
    }
    // cout << m << endl;
    return m;
}

int main()
{

    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        arr[i] = conj();
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }
}