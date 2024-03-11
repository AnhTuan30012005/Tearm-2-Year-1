#include <iostream>
using namespace std;

void horse(int **a, int row, int col)
{
    // Các thao tác khác không thay đổi
}

int main()
{
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    // Cấp phát động cho mảng hai chiều
    int **mang = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        mang[i] = new int[m];
    }

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mang[i][j];
        }
    }

    horse(mang, n, m);

    // Giải phóng bộ nhớ sau khi sử dụng xong
    for (int i = 0; i < n; ++i)
    {
        delete[] mang[i];
    }
    delete[] mang;

    return 0;
}
