//map trong c++
#include <bits/stdc++.h>
using namespace std;

//(key , value)
// insert
// count
// find
// erase


int main()
{
    map<int , int > mp ; // một cái là key một là giá trị
    mp[100] = 200;
    mp[200] = 300; 

    mp.insert({300 , 400});
    mp.insert({400 , 500});

// Lưu ý key không được giống nhau 

    for( pair< int , int > x: mp ){
        cout << x.first << " " << x.second << endl;
        // x.first là key -- x.second là value
    }
    cout << endl;

    for( auto it : mp)
    {
        cout << "Key: " << it.first <<" "<<" Value: "<<it.second << endl;
    }
    cout << endl;

//sử dụng iterator:

    for( map< int , int >::iterator it = mp.begin() ; it != mp.end() ; it ++) {
        cout <<"Key: " << (*it).first << " " <<" Value: " << (*it).second <<endl;
    }
// tìm kiếm trả về key find;
    if(mp.count(100) != 0)
    {
        cout << "Found" << endl;
    }
    else cout << "Not found" << endl;

// erase 
    mp.erase(100); // xóa key map 100 

    return 0;
}