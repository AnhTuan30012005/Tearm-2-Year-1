/*bài toán tìm số chính phương
- nếu có thì in ra YES
- nếu không thì in ra NO và in ra số chính phương gần đó nhất
*/
//code:
#include<bits/stdc++.h>
using namespace std;
//khai báo hàm ngoài main()
bool soCP(int n)
{
//hàm kiểm tra số chính phươ
	int sqr = sqrt(n);
	if(sqr*sqr == n)
	{	return true;}
	else return false;
}

int main()
{
// nhập vào một số
	int m; cin >>m;
	if(soCP(m)) cout<<"YES";
	else
/*nếu không phải là số chính phương ta chạy đến số gần nhất và bé 
nhất để tìm ra số chính phương gần nhất*/
	for(int i = m - 1; i >= 0; i--)
	{
		if(soCP(i)	) {cout<<"NO "<<i;
		break;	//khi tìm ra được rồi thì dừng chương trình này lại
	}	
	}
	return 0;
 }