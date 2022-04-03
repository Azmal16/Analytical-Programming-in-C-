#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[1000];
    int n, t;
    cin >> n >> t;
    cin >> str;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'B')
            {
                if (str[j + 1] == 'G')
                {
                    str[j] = 'G';
                    str[j + 1] = 'B';
                    j += 1;
                }
            }
        }
    }
    cout << str << endl;
}