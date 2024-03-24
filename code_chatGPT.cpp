#include <bits/stdc++.h>
using namespace std;
//hàm xóa ký tự trắng đầu - thừa - cuối 
void delete_char(string &name)
{
    // biến đem số ký tự cần xóa
    int dem = 0;
    int cuoi = 0;
    int i = 0;
    // xóa ký tự trắng ở đầu
    for (char c : name)
    {
        if (c == ' ')
        {
            dem++;
        }
        else
            break;
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
        {
            name.erase(k, 1);
            k--;
        }
    }
    cout << "Số khoảng trắng là: " << dem << "  "
         << "Và đây là kết quả: " << name << endl;
    cout << "Số khoảng trắng ở cuối là: " << cuoi << " "
         << "Và đây là kết quả: "
         << "'" << name << "'" << endl;
    cout << "Chuối thuần hóa là: "
         << "'" << name << "'" << endl;
}
int main()
{
    string kytu;
    getline(cin , kytu);
    delete_char(kytu);
    
    cout << "Và đây là ký tự được thay dổi: "<< kytu << endl;
}