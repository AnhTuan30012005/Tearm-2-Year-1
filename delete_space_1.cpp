//xóa ký tự trắng bằng hàm erase
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);

    //xóa ký tự trắng đầu tiên
    for(int i =  0; i < name.length(); i ++)
    {
        if(name[i] == ' ')
        {
            name.erase(i);
        }
        else break;
    }
    cout << name <<endl;
    //xóa ký tự trắng thừa cuối cùng 
    for(int i = name.length() ; i > 0; i-- )
    {
        if(name[i] == ' ')
        {
            name.erase(i);
        }
        else break;
    }

    cout << name;

    return 0;
}