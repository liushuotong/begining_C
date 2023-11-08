#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    double a,b,c,delta, x_1,x_2;
    cin>>a>>b>>c;
    delta=pow(b,2)-(4*a*c);
    cout<<"delta= "<<delta<<endl;
    if(delta>0)
    {
        x_1=(-b+pow(b*b-4*a*c,0.5))/(2*a);
        x_2=(-b-pow(b*b-4*a*c,0.5))/(2*a);
        cout<<"x_1= "<<x_1<<endl;
        cout<<"x_2= "<<x_2<<endl;
    }
    if(delta==0)
    {
        x_1=x_2=-b/(2*a);
        cout<<"x_1=x_2= "<<x_1<<endl;
    }
    if(delta<0)
    cout<<"error"<<endl;
    return 0;
}