#include<iostream>
using namespace std;
int main(void)
{
    double x,y;
    cin>>x;
    if(x<1)cout<<"y="<<x<<endl;
    if(x>=1)
    {
        if(x<10)cout<<"y="<<2*x-1<<endl;
        if(x>=10)cout<<"y="<<3*x-11<<endl;
    }
    return 0;
}