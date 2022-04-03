#include <iostream>
#include <cstring>
using namespace std;

void convertOpposite(string &str)
{
    int ln = str.length();

    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
}

int main()
{
    string str1;
    int flag = 0;

    cin >> str1;
    if (str1.length() > 1)
    {
        if (isupper(str1[0]))
        {
            for (int i = 1; i < (str1.length()); i++)
            {
                if (islower(str1[i]))
                {
                    flag = 1;
                    break;
                }
            }
        }

        else if (islower(str1[0]))
        {
            // cout << "dhukse" << endl;
            for (int i = 1; i < (str1.length()); i++)
            {
                if (islower(str1[i]))
                {
                    flag = 1;

                    break;
                }
            }
        }

        if (flag == 0)
        {
            // call re func
            // convertOpposite(str1);
            // cout << "abr" << endl;
            convertOpposite(str1);
            cout
                << str1 << endl;
        }
        else
            // print str1
            cout << str1 << endl;
    }

    else
    {
        // call rev func
        // cout << "kire" << endl;
        convertOpposite(str1);
        cout << str1 << endl;
    }

    // else
    //     // print str1
    //     cout << str1 << endl;

    return 0;
}