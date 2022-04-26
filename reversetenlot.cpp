#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a{0},b{0},i{0};
    string ten;
    cout<<"Nhap ho ten vao:"<<endl;
    getline(cin,ten);

    //tim a
    for(i = 0; i <= ten.size()-1;i++)
    {
        if(ten[i] == ' ')
        {
            a = i;
            break;
        }
    }
    //tim b
    for(i = ten.size()-1;i >= 0;i--)
    {
        if(ten[i] == ' ')
        {
            b = i;
            break;
        }
    }

    for(i = 0; i <= a;i++)
    {
        cout<<ten[i];
    }

    for(i = b-1; i >= a+1;i--)
    {
        cout<<ten[i];
    }

    for(int i = b;i <= ten.size();i++)
    {
        cout<<ten[i];
    }
    return 0;
}
