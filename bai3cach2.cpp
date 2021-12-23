#include<iostream>
using namespace std;

int main()
{
    //gia su lai suat la x%/1 thang
	double tienlai = 0;
	do{
		double tiengui = 0,  laisuat = 0, thoigian = 0;
		cout<<"nhap vao tien gui\n";
    	cin>>tiengui;
    	cout<<"nhap vao lai suat\n";
    	cin>>laisuat;
    	cout<<"nhap vao thoi gian\n";
    	cin>>thoigian;
		tienlai = tiengui*laisuat*thoigian;
		if(tienlai >= 0)
			cout<<"cam on ban da nhap\n";
		else
			cout<<"du lieu phai duong moi ban nhap lai\n";
	}while(tienlai<0);
	
	cout<<tienlai;
    return 0;
}
    