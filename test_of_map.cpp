// bài tập về map trong c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map < int , int > mp;

    //đềm tần suất xuất hiện của mảng 
    int n; cin >> n;
    int a[1000];
    for(int  i = 0 ; i < n ; i ++ )
    {
        // int x; cin >> x;    
        // mp[x]++;
            cin >> a[i];
            mp[a[i]]++;
    } 

    // for( auto it : mp ){
    //     cout << "Key: " << it.first << "Value: " << it.second << endl;
    // }
    
     cout << endl;
    for(int i = 0 ; i < n ; i ++) // cout << theo thứ tự xuất hiện 
    {
        if( mp[a[i]] != 0 ){ // tại vì không thêm khác 0 thì nó sẽ in ra lặp lại map đó
            cout << a[i] << " " << mp[a[i]] << endl; 
            mp[a[i]] = 0; // cho mp[a[i]] = 0; là để nó không lặp lại việc in nữa;
        }
    }

    return 0;
}