#include <iostream>
#include <string>

using namespace std;

// Hàm chuyển hóa
string chuyenhoa(string chu)
{
    for (int i = 0; i < chu.length(); ++i)
    {
        chu[i] = tolower(chu[i]);
    }
    return chu;
}

// Hàm in ký tự đầu tiên sau khoảng trắng
void kytu(string tun)
{
    cout << tun[0];
    int so = 0;
    for(int i = 0 ; i < tun.length(); i++)
    {
        if(tun[i] == ' ') 
        {
            cout << tun[i+1];
            so = i+1;
        }
    }
    for(int j = so + 1; j < tun.length(); j++)
    {
        cout << tun[j];
    }
}

// Hàm xóa dấu cách thừa
string removeExtraSpaces(const string& str) {
    string result;
    bool spaceFound = false; // Biến để kiểm tra xem đã tìm thấy dấu cách thừa chưa
    for (char c : str) {
        if (c != ' ') {
            result += c;
            spaceFound = false;
        } else {
            // Nếu gặp dấu cách và chưa tìm thấy dấu cách trước đó, thêm vào kết quả
            if (!spaceFound) {
                result += c;
                spaceFound = true;
            }
        }
    }
    return result;
}

int main()
{
    string cha;
    getline(cin, cha);

    string charr = chuyenhoa(cha);
    string trimmedString = removeExtraSpaces(charr);
    kytu(trimmedString);
    
    cout << "@husc.edu.vn" << endl;
    return 0;
}
