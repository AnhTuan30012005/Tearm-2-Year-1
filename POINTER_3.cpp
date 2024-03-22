//Bài học về lập trình con trỏ 
#include<bits/stdc++.h>
using namespace std;

void chang(int *x)
{
    x *=2;
}
int main()
{
    int n; cin >> n;
    chang(&n);
    cout << endl;
    cout <<"Đây là giá trị của N: "<<n;

    return 0;
    }