#include<iostream>
using namespace std;

int main()
{
    //gia su lai suat la x%/1 thang
Start:
    double tiengui = 0, tienlai = 0,  laisuat = 0, thoigian = 0;
    cout<<"nhap vao tien gui\n";
    cin>>tiengui;
    cout<<"nhap vao lai suat\n";
    cin>>laisuat;
    cout<<"nhap vao thoi gian\n";
    cin>>thoigian;
    if(tiengui < 0 || laisuat< 0 || thoigian < 0)
    {
        cout<<"input is wrong. vui long nhap lai\n";
        goto Start;
    }
    else 
    {
        tienlai = tiengui*laisuat/100*thoigian;
        cout<<"tien lai la "<<tienlai<<" dong";
    }
    
    return 0;
}
    