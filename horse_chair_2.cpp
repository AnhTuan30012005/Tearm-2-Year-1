#include <bits/stdc++.h>
using namespace std;

void timPhanTuYenNgua(const vector<vector<int>>& mang) {
    vector<pair<int, int>> mangYenNgua;

    // Duyệt qua từng hàng
    for (int i = 0; i < mang.size(); i++) {
        // Tìm phần tử nhỏ nhất trong hàng
        int minHang = mang[i][0];
        int cotMinHang = 0;
        for (int j = 1; j < mang[i].size(); j++) {
            if (mang[i][j] < minHang) {
                minHang = mang[i][j];
                cotMinHang = j;
            }
        }

        // Kiểm tra xem phần tử nhỏ nhất có là phần tử lớn nhất trong cột không
        bool cotYenNgua = true;
        for (int k = 0; k < mang.size(); k++) {
            if (mang[k][cotMinHang] > minHang) {
                cotYenNgua = false;
                break;
            }
        }

        // Nếu phần tử nhỏ nhất là phần tử lớn nhất trong cột, thêm vào danh sách phần tử yên ngựa
        if (cotYenNgua) {
            mangYenNgua.push_back(make_pair(i, cotMinHang));
        }
    }

    // In các phần tử yên ngựa
    for (auto phantu : mangYenNgua) {
        cout << "Phan tu yen ngua tai hang " << phantu.first << ", cot " << phantu.second << ": " << mang[phantu.first][phantu.second] << endl;
    }
}

int main() {
    vector<vector<int>> mang = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    timPhanTuYenNgua(mang);

    return 0;
}