#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nam;
	cout<<"nhap vao nam"<<endl;
	cin>>nam;
	if(((nam%4==0)||(nam%400==0))&&(nam%100!=0))
		cout<<"nam nay co 366 ngay";
	else
		cout<<"nam nay co 365 ngay";	
	return 0;
}


