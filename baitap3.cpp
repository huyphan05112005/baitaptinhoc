#include<iostream>
using namespace std;

int main()
{
	float dtb;
	cout<<"nhap vao diem trung binh"<<endl;
	cin>>dtb;
	if(dtb<5)
	{
		cout<<"hoc sinh yeu";
	}
	else if((dtb>=5)&&(dtb<6.5))
	{
		cout<<"hoc sinh trung binh";
	}
	else if((dtb>=6.5)&&(dtb<8))
	{
		cout<<"hoc sinh kha";
	}
	else
	{
		cout<<"hoc sinh gioi";	
	}
	return 0;
	
}
