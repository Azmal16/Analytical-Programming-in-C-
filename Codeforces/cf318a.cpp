#include <iostream>
using namespace std;
int main()
{

    int n, k, l = 0;
    cin >> n >> k;
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            arr[l] = i;
            l++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[l] = i;
            l++;
        }
    }

    cout << arr[k - 1] << endl;

    return 0;
}