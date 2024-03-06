#include <bits/stdc++.h>
using namespace std;

struct CON_NGUOI
{
    CON_NGUOI(string ten, int t, float v1, float cc)
    {
        name = ten;
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
        con_zin = true;
    }

    string choi_xep_hinh()
    {
        return "Kiểu truyền thống";
    }
    string name;
    int tuoi;
    float vong_mot;
    float chieu_cao;
    bool con_zin;
};
void pha_zin(CON_NGUOI *nguoi)
{
    cout << "Thực hiện phá zin em tên " << (*nguoi).name
         << " theo kiểu " << (*nguoi).choi_xep_hinh() << endl;
    (*nguoi).con_zin = false;
}
int main()
{
    // bản chất ALL_OF_LOVE và bo_nhi là hai biến con trỏ nên chúng ta có thể cho hai cái đó bằng nhau ;
    CON_NGUOI ALL_OF_LOVE[5] =
        {
            CON_NGUOI("thao", 12, 3.64, 4.4),
            CON_NGUOI("lan", 15, 4.6, 5.5),
            CON_NGUOI("huong", 22, 6.4, 63.4),
            CON_NGUOI("nhung", 23, 5.4, 34.4),
            CON_NGUOI("tuyet", 21, .8, 22.5),
        };

    CON_NGUOI *bo_nhi = nullptr;

    int i = 1;
    for (bo_nhi = ALL_OF_LOVE; bo_nhi < ALL_OF_LOVE + 5; bo_nhi++)
    {
        cout << i << ". " << (*bo_nhi).name << endl;
        i++;
    }

    cout << "Trước khi phá, em " << ALL_OF_LOVE[3].name << (ALL_OF_LOVE[3].con_zin ? " Còn ZIN" : " Mất Zin")
         << endl;
    pha_zin(&ALL_OF_LOVE[3]);

    cout << "Sau khi phá, em " << ALL_OF_LOVE[3].name << (ALL_OF_LOVE[3].con_zin ? " Còn ZIN" : " Mất Zin")
         << endl;

    for (int i = 0; i < 5; i++)
    {
        pha_zin(&ALL_OF_LOVE[i]);
    }

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