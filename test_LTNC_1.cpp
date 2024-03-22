//Lập trình nâng cao Đoàn Thị Hồng Phước 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int so  = 0;
    string n;
    getline(cin, n);
//int i = 0; i < n.length() ; i ++
    for(char c : n)
    {
        if( c != ' ') 
        {
            so++;
        }
    }

    cout << so;
    return 0;
}