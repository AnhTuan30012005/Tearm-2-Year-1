#include <bits/stdc++.h>
using namespace std;

struct CON_NGUOI
{
    CON_NGUOI(int t, float v1, float cc)
    {
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
    }
    int tuoi;
    float vong_mot;
    float chieu_cao;
};
int main()
{
    CON_NGUOI linh(12, 3.64, 4.4);
    CON_NGUOI thuy(15, 4.6, 5.5);
    CON_NGUOI huyen(22, 6.4, 63.4);

    CON_NGUOI *bo_nhi = nullptr; // con trỏ rỗng
    cout << "Đây là địa chỉ rỗng của bồ nhí: " << bo_nhi << endl;

    // thứ 2
    bo_nhi = &thuy;

    cout << "Đây là số tuổi của bồ nhí: " << (*bo_nhi).tuoi << endl;
    (*bo_nhi).tuoi = 25;
    cout << "Độ tuổi của bồ nhí sau khi được thay đổi là: " << (*bo_nhi).tuoi << endl;

    // thứ 3
    bo_nhi = &thuy;

    cout << "Đây là số đo vòng 1 của em nó: " << (*bo_nhi).vong_mot << endl;

    // thứ 4
    bo_nhi = nullptr;
    cout << "Địa chỉ của bồ nhí là: " << &bo_nhi << endl;
    cout << "Giá trị của bồ nhí là " << bo_nhi << endl;
    // thứ 5 TĂNG GIẢM ĐỊA CHỈ

    bo_nhi = &linh;
    cout << "CHiều cao của em Linh là: " << (*bo_nhi).chieu_cao << endl;

    return 0;
}

/*
    Con trỏ là một biến đặc biệt, ám chỉ một biến 'x' nào đấy thông qua địa chỉ của biến x đó (&x) ;

    Con trỏ là biến mà giá trị của nó là địa chỉ của biến khác;

    Vì khai báo ba biến tuần tự nên là khi bạn làm phép toán <bo_nhi = bo_nhi + 1> thì nó sẽ tự nhảy 
    sang địa chỉ của các em tiếp theo;
    ==> Chúng ta có thể thực hiện các phép toán cộng  trừ trên địa chỉ 

    !!! Khuyến cáo: Không được khuyến khích khi làm việc trên biến "Tự do" vì nó có thể xảy ra nhiều lỗi không mong muốn
*/