
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    getline(cin, n);
    string con;
    int vt;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == ' ')
        {
            con = n.substr(0, i);

            break;
        }
    }

    for (int j = n.size() - 1; j >= 0; j--)
    {
        if (n[j] == ' ')
        {

            con += " ";
            con += n.substr(j + 1, n.size() - j);

            break;
        }
    }
    cout << con;
    return 0;
}