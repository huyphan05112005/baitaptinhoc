#include<iostream>
using namespace std;

int main()
{
    int n = 0, sum = 0;
    while(true)
    {
        cout<<"input n\n";
        cin>>n;
        if(n<0)
            {
                cout<<"wrong input. end program\n";
                break;
            }
        sum += n;
        cout<<"sum is "<<sum<<endl;
    }

    return 0;
}