// bài toán chuyển từ in hoa thành in thường 
#include <bits/stdc++.h>
using namespace std;
// hàm chuyển in hoa thành in thường
void thuong(string &name)
{
    for(char &c : name)
    {
        c = tolower(c);
    }
    name[0] = toupper(name[0]);
    cout << name ; 
}



int main()
{
    string name; 
    getline(cin , name);
    thuong(name);
    return 0;
}    