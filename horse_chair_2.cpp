#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Khai báo số hàng và số cột
    int n, m;
    cin >> n >> m;
    
    // Khai báo mảng
    int mang[n][m];
    
    // Nhập vào mảng
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mang[i][j];
        }
    }
    
    // Vector để lưu các phần tử yên ngựa
    vector<pair<int, int>> saddlePoints;

    // Bắt đầu điều kiện
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int current_element = mang[i][j];
            bool is_saddle_point = true;

            // Kiểm tra xem current_element có là phần tử nhỏ nhất trong hàng không
            for (int k = 0; k < m; k++)
            {
                if (mang[i][k] < current_element)
                {
                    is_saddle_point = false;
                    break;
                }
            }

            // Kiểm tra xem current_element có là phần tử lớn nhất trong cột không
            if (is_saddle_point)
            {
                for (int k = 0; k < n; k++)
                {
                    if (mang[k][j] > current_element)
                    {
                        is_saddle_point = false;
                        break;
                    }
                }
            }

            // Nếu current_element là phần tử yên ngựa, thêm vào vector
            if (is_saddle_point)
            {
                saddlePoints.push_back(make_pair(i, j));
            }
        }
    }

    // In ra tọa độ của các phần tử yên ngựa
    cout << "Cac phan tu yen ngua la:" << endl;
    for (auto &point : saddlePoints)
    {
        cout << "(" << point.first + 1 << "," << point.second + 1 << "); ";
    }
    cout << endl;

    return 0;
}
