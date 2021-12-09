#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int s1,s2,s4,n1,n2,n3,n4,n5;
	float s3,s5;
	//bai1
	cout<<"nhap vao n1"<<endl;
	cin>>n1;
	s1 = 0;
	for (int i1=1;i1<=n1;i1++)
	{
		s1=s1+i1;
	}
	cout<<"s1 la "<<s1<<endl;
	//bai2
	cout<<"nhap vao n2"<<endl;
	cin>>n2;
	s2 = 1;
	for(int i2 = 1;i2<=n2;i2++)
	{
		s2 = s2*i2;
	}
	cout<<"s2 la "<<s2<<endl;
	//bai3
	cout<<"nhap vao n3"<<endl;
	cin>>n3;
	s3 = 0;
	for (int i3 = 1;i3<=n3;i3++)
	{
		s3 = s3+sqrt(i3);
	}
	cout<<"s3 la "<<s3<<endl;
	//bai4
	cout<<"nhap vao n4"<<endl;
	cin>>n4;
	s4 = 0;
	for (int i4 = 1;i4<=n4;i4++)
	{
		s4 = s4+i4*i4;
	}
	cout<<"s4 la "<<s4<<endl;
	//bai5
	cout<<"nhap vao n5"<<endl;
	cin>>n5;
	s5 = 0;
	for (int i5 = 1;i5<=n5;i5++)
	{
		s5 = s5 +1.0/i5;
	}
	cout<<"s5 la "<<s5<<endl;
	return 0;
}


