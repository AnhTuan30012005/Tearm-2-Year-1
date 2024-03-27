#include <bits/stdc++.h>
using namespace std;
int main()
{
    // khai báo map
    map < int , int > mp;

    mp[100] = 100;
    mp[200] = 200;

    mp.insert({ 300 , 300 });
    mp.insert({ 400 , 400 });

    cout << "Cách cout thứ nhất: " << endl;
    for( pair< int , int > c : mp){
        cout << "Key: " << c.first <<" " << "Value: "<< c.second << endl;
    } cout << endl;

    cout << "Cách cout thứ hai: " << endl;
    for( auto c : mp)
    {
        cout << "Key: " << c.first <<" " << "Value: "<< c.second << endl;
    }cout << endl;
    
    cout << "Cách cout bằng iterator" << endl;
    for( map< int , int >::iterator pp = mp.begin() ; pp != mp.end() ; pp++ )
    {
        cout <<"Key: "<< (*pp).first << " " << "Value: " << (*pp).second << endl;
    }
    // thử tìm kiếm coi có key 100 xuất hiện trong map không 
    if( mp.count(100) != 0){
        cout << "Found " << endl;
    }
    else cout << "Not Found" << endl;

    // xóa một map 
    mp.erase(100);

    for( map<int , int >::iterator it = mp.begin() ; it != mp.end() ; it++){
        cout << "Key: " << (*it).first << " " << "Value: " << (*it).second << endl;
    }


    return 0;
}