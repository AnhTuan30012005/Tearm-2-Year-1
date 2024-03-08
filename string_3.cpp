#include <bits/stdc++.h>
using namespace std;
int main()
{
    // khai báo chuỗi st
    string st;
    // nhập vào chuỗi st
    getline(cin, st);
    // tự động xuống hàng khi mình nhập
    
    int length = 0;

    for(int i = 0; i < st.length() ; i++ )
    {
        if(st[i] != ' ')
        {
            length++;
        }
    }
    cout << "Độ dài của chuỗi là: " << length << endl;
    return 0;
}