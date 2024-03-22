// bài bạn trung nhờ làm kiểm tra hộ cho bạn trung 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string kytu;
    getline(cin, kytu);
    int Hoa = 0;
    int Thuong = 0;
    int So = 0;
    int Khac = 0;
    int tong = 0; 


    for(int i = 0; i < kytu.length(); i++)
    {
        if(kytu[i] >= 'A' and kytu[i] <= 'Z') Hoa++;
        if(kytu[i] >= 'a' and kytu[i] <= 'z' ) Thuong++;
        if(kytu[i]  >= '!' and kytu[i] <= '/' or kytu[i]  >= ':' and kytu[i] <= '@' ) Khac++ ;
        if(kytu[i] >= '0' and kytu[i] <= '9') So++;
        if(kytu[i] >= '0' and kytu[i] <= '9') tong += kytu[i] - '0';
        

    }
    cout << Hoa << endl;
    cout << Thuong << endl;
    cout << So << endl;
    cout << Khac << endl;
    if(So == 0) cout << "-1" <<endl;
    else cout << tong << endl;
    
    return 0;
}