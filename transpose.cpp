#include <bits/stdc++.h>
using namespace std;
int main()
{ // khai báo hàng và cột của ma trận
    long n,m;
    // nhập vào hàng và cột 
    cin >> n >> m;
    // khai báo mảng
    long mang[n][m];
    // nhập vào hàng và cột của ma trận
    for (long i = 0; i < n; i++)
    {
        for (long j = 0; j < m; j++)
        {
            cin >> mang[i][j];
        }
    }
    // in cột trước sau đó đến hàng : nó được gọi là ma trận chuyển vị (transpose)
    for (long i = 0; i < m; i++)
    {
        for (long j = 0; j < n; j++)
        {
            cout << mang[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
