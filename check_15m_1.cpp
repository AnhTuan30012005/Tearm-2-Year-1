// bài toán thứ nhất
// so sánh hai số nguyên dương có kích thước là 2 <= n   10 ^100
// nếu = thì cout ra EQUAL
// nếu < thì cout ra LESS
// nếu > thì cout ra GREATER

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // khai báo và nhập vào chuỗi a, b;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    // kiểm tra độ dài của hai chuỗi có bằng nhau hay không
    if (a.length() != b.length())
    {
        if (a.length() < b.length())
            cout << "LESS";
        else if (a.length() > b.length())
            cout << "GREATER";
    }
    else if (a.length() == b.length()) // kiểm tra từng phần tử
    {
        int so = 0;
        for (int i = 0; i < a.length(); i++)
        {

            if (a[i] != b[i])
            {
                if (a[i] > b[i])
                {
                    cout << "GREATER";
                    break;
                }
                else if (a[i] < b[i])
                {
                    cout << "LESS";
                    break;
                }
            }
            else
            {
                so++;
            }
            if (so == a.length())
            {
                cout << "EQUAL";
            }
        }
    }

    return 0;
}