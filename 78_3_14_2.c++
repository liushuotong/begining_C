#include<iostream>
using namespace std;
int main(void)
{
    int k=1,i=2,n=0,m;
    for(m=101;m<=200;m+=2)
    {
        while(k*k<=m)
        {
            k++;
        }
        while(m%i!=0 && i<k)
        {     
            i++;
        }
        if(i==k)
        {
            n=n+1;
            cout<<n<<">"<<m<<endl;
        }
        k=1;
        i=2;
    }
    system("pause");
    return 0;
}