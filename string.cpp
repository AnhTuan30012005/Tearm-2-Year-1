#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    
    //hoặc cin.get(st)
    //cin.ignore();

    // độ dài của chuỗi: st.length() = số byte hoặc st.style()
    int dai = st.length() - 1;
    // truy cập chuỗi st.at(3)
    // so sánh bằng các toán tử 
    // tìm kiếm chuỗi: dùng find() 
    // if(index == -1 ) cout << "không tìm thấy";
    
    cout << st.front() <<endl;
    cout << st << endl;
    cout << dai << endl;

    return 0;
}