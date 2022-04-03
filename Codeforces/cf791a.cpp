

#include <iostream>
using namespace std;
int main()
{
    int a, b, i = 0;
    cin >> a >> b;
    while (1)
    {
        a = 3 * a;
        b = 2 * b;
        i++;
        if (a > b)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    cout << i << endl;
}