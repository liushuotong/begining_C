#include<iostream>
#include<cmath>
int main(void)

{
    int i,fac,k;
    std::cin>>k;
    fac=1;
    for(i=1;i<=k;i++)
    {fac=fac*i;}
    std::cout<<fac<<std::endl;
    system("pause");
    return 0;
}
