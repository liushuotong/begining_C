#include<iostream>
#include<iomanip>
#include<cmath>
#include<windows.h>
int main(void)
{
    int i,n[i][i],temp,k;
    n[0][0]=1;
    n[1][0]=1;
    n[1][1]=1;
    std::cout<<std::setw(6);std::cout<<n[0][0];std::cout<<std::endl;
    std::cout<<std::setw(6);std::cout<<n[1][0]<<std::setw(6);
    std::cout<<n[1][0]<<std::setw(6);std::cout<<std::endl;
    for(i=3;i<=10;i++)
    {

        for(k=0;k<=i-1;k++)
        {   
            if(k==0)
            {
                n[i-1][0]=1;
                std::cout<<n[i-1][0]<<std::setw(6);
            }
            else if(k==i-1)
            {
                n[i-1][i-1]=1;
                std::cout<<n[i-1][i-1]<<std::setw(6);
            }
            else if(k!=0 &&k!=i-1)
            {
                n[i-1][k]=n[i-2][k]+n[i-2][k-1];
                std::cout<<n[i-1][k]<<std::setw(6);
            }
        }
        std::cout<<std::endl;
    }
    system("pause");
    return 0;
}
