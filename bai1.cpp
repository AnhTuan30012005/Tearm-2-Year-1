/*
1. Đây là bài toán về cục xúc sắc;
2. nó được gieo hai lần, mỗi lần ra mỗi mặt và 
chỉ cần in từ Hán của mỗi mặt ra là được
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[2];
	for(int i =0; i < 2; i++)
		cin >> arr[i];
	for(int i = 0; i < 2; i++)
	{
		if(arr[i] == 1) cout << "nhat"<<" ";
		if(arr[i] == 2) cout << "nhi"<<" ";
		if(arr[i] == 3) cout << "tam"<<" ";
		if(arr[i] == 4) cout << "tu"<<" ";
		if(arr[i] == 5) cout << "ngu"<<" ";
		if(arr[i] == 6) cout << "luc"<<" ";	
		}	
	return 0;
}