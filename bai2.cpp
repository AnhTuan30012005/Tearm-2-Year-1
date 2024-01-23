
/*bài toán nhập môn lập trình mà tôi đã không làm được trong giờ thi
-- bài toán là hoán đổi số đầu và số cuối của một số cho input vào số 
có giá trị bé hơn 10 mũ 9
-- sau đó chúng ta sẽ hoán đổi số đầu và số cuối */
//chương trình bắt đầu:
#include<iostream>
#include<string>
using namespace std;
int main()
{
//khai báo chuỗi và nhập chuỗi
	string chuoi;
	cin >> chuoi;
/*đầu tiên kiểm tra độ dài của chuỗi
nếu độ dài bằng 1 thì chương trình sẽ in ra số đó luôn*/
	if(chuoi.length() == 1 && chuoi[0] == '0') cout<<"0";
	else{
//tiếp theo là kiểm tra giá trị của số nhập vào 	
	if( chuoi[0] == '-')
	{
		cout<<"-";
//hoán đổi số đầu và số cuối	
		int dau = chuoi[1];
		chuoi[1] = chuoi[chuoi.length() -1];
		chuoi[chuoi.length() -1] = dau;
//vì là chuỗi âm nên, ta sẽ kiểm tra từ chuoi[1]
//tai vì đó là số đầu tiên, còn chuoi[0] là kí tự '-'
		if(chuoi[1] == '0' ) cout<<"";
		else cout<<chuoi[1];
//in ra các phần tử của chuỗi
		for(int i = 2; i <= chuoi.length()-1; i++)
		{	cout<< chuoi[i];   
			}}	
	else
	{
//hoán đổi số đầu và số cuối
		int dau = chuoi[0];
		chuoi[0] = chuoi[chuoi.length() -1];
		chuoi[chuoi.length() -1] = dau;
		if(chuoi[0] == '0' ) cout<<"";
		else cout<<chuoi[0];
//in ra các phần tử còn lại của chuỗi
		for(int i = 1; i <= chuoi.length()-1; i++)
		{	cout<< chuoi[i];   
			}	
	}
}
//trả về giá trị 0 và kết thúc chương trình 
	return 0;
}