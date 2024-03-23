// xóa ký tự trắng đầu và cuối và giữa ( nếu thừa ký tự trắng )
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // KHAI BÁO string:
    string name;
    getline(cin, name);

    int dem = 0;
    int cuoi = 0;
    int i = 0;
    // xóa ký tự trắng ở đầu
    while (isspace(name[i]))
    {
        dem++;
        // name.erase(name.begin());
    }
    name.erase(0, dem);
    // xóa ký tự trắng ở cuối
    for (int j = name.length() - 1; j >= 0; j--)
    {
        if (!isspace(name[j]))
            break;
        cuoi++;
    }
    name.erase(name.length() - cuoi, cuoi);
    // xóa ký tự trắng ở giữa
    for (int k = 1; k < name.length(); k++)
    {   
        if (isspace(name[k]) && isspace(name[k - 1]))
        {   cout << k << endl;
            name.erase(k, 1);
            k--;
            cout << k << endl;
        }
    }
    // cout << "Số khoảng trắng là: " << dem << "  "
    //      << "Và đây là kết quả: " << name << endl;
    // cout << "Số khoảng trắng ở cuối là: " << cuoi << " "
    //      << "Và đây là kết quả: "
    //      << "'" << name << "'" << endl;
    // cout << "Chuối thuần hóa là: "
    //      << "'" << name << "'" << endl;
    return 0;
}