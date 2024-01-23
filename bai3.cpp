//bài toán tìm ra số nguyên tố bé nhất
/*cho một dãy số nguyên tố có n là mảng động được nhập và0
- ta chỉ cần tìm ra số nguyên tố bé nhất trong dãy
-thuật toán sẽ là lọc ra số nguyên tố
- sử dụng hàm sort để sắp xếp và in ra mảng a[0];
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{//thuật toán đơn giản nhất và nó có nhiều cái nguyên sơ
//nhập vào số phần tử của mảng
	int n ;
	cin >> n;
//khai báo mảng có kiểu là số thực
	double a[n];
/*tạo một vector có kiểu dữ liệu là int*/	
	vector<int> so;
//tạo một biến đếm
	int count = 0;
	for(int i = 0; i < n; i++)
	{//nhập vào thành phần của mảng 
		cin>> a[i];
	}
//Điều kiện :
	for(int i =0; i< n; i++)
	{//số hai cx là một số nguyên tố, tránh bị nhẫm lẫn
	//số nguyên tố là các số chia hết cho 1 và chính nó	
		if(a[i] ==3 || a[i] ==5||a[i]== 7 || a[i] == 2)
		{
		so.push_back(a[i]);
		count++;
		}
	}
	if(count == 0) cout<<"Khong co";
	sort(so.begin(), so.end());
	if(count!=0) cout<< so[0];
	
	return 0;
}