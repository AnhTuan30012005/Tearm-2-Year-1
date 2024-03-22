
#include <bits/stdc++.h>
using namespace std;
// hàm chuyển hóa chữ thường thành chữ hoa
string chuyenhoa( string **chu) // truyền vào là biến khác 
{
    for(int i = 0; i < chu.length() ; i++)
    {
        (*chu[i]) = toupper(*chu[i]);
    }
    return (*chu);
}
int main()
{  //khai báo các tring; anh
    string first;
    getline(cin, first);
    string second; 
    // biến đếm số ký tự và số chữ 
    int kytu = 0;
    int sochu = 0;
    // nếu đầu tiên là chữ thì in ra, nếu không phải thì tiếp tục
    if(isalpha(first[0])) second += first[0];
    
    for(int i = 0 ; i < first.length() ; i++ )
    {   
        // nếu i = khoảng trắng và tiếp theo là ký tự thì mới in ra 
        if( first[i]  == ' ' && isalpha(first[i+1]) )
        {
            second +=   first[i+1] ;
            sochu ++;
        }
        if(isalpha(first[i]))
        {
            kytu++;
        }
    }
    chuyenhoa(&second); // hàm chuyển hóa 
    cout << second << sochu << kytu;
    return 0;

 }