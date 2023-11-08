#include<iostream>
#include<iomanip>
int main(void)
{
    int a[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            std::cout<<a[i][j]<<std::endl;
        }
    }
    return 0;
}