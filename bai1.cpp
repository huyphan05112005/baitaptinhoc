#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b;
	char c;
	cout<<"nhap a,b,c"<<endl;
	cin>>a>>b>>c;
	//bai 1
	if(a>0)
		cout<<"a la so duong"<<endl;
	else
		cout<<"a khong la so duong"<<endl;
	//bai 2
	if(b%2==0)
		cout<<"b la so chan"<<endl;
	else 
		cout<<"b la so le"<<endl;
	//bai 3
	if((b!=0)&&(a%b==0))
		cout<<"a la boi cua b va b la uoc cua a";
}
