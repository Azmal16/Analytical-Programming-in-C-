#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    int flag = 0;
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < strlen(str2); i++)
    {
        if (str1[i] != str2[strlen(str2) - 1 - i])
        {
            flag = 1;
            // break;
            //  cout << "str1"
            //       << "[" << i << "]" << endl;
            //  cout << "str2"
            //       << "[" << strlen(str2) -1 - i << "]" << endl;
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}