#include<bits/stdc++.h>
using namespace std;

int tong(int n)
{
	if(n == 1) 
		return 1;
	else 
		return tong(n-1) + n;	
}


int main()
{
	int n; cin >> n;
	cout<< tong(n )<< endl;
	return 0;
}
