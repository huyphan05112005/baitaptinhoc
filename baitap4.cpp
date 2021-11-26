#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b,c,delta,x1,x2;
	cout<<"nhap vao co so a"<<endl;
	cin>>a;
	cout<<"nhap vao co so b"<<endl;
	cin>>b;
	cout<<"nhap vao co so c"<<endl;
	cin>>c;
	delta = b*b-4*a*c;
	if (delta<0)
	{
		cout<<"phuong trinh khong co nghiem";
	}
	else if(delta==0)
	{
		x1=x2=-b/(2*a);
		cout<<"phuong trinh co 2 nghiem bang nhau la "<<x1;
	}
	else if(delta>0)
	{
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout<<"phuong trinh co 2 nghiem phan biet la "<<x1<<" va "<<x2;	
	} 
	return 0;
}
