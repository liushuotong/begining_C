#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<windows.h>
int least_common_multiple(int,int);
int greatest_common_divisor(int,int);
double area_solution(double);
int size_ratio_3_elements(int);
int integer_test_palindromic(int);
int factorial_summation(long long);
int mian(void)
{
    std::cout<<"this is a scientific calculator"<<std::endl;

    
    system("cls");
    system("pause");
    return 0;
}

int least_common_multiple(int a, int b)
{
    int r;
    while (0 != (r = a % b))
    {
        a = b;
        b = r;
    }
    return b;
}

int greatest_common_divisor(int a, int b)
{
    return (a * b) / least_common_multiple( a, b);
}

double area_solution(double area,double x[3],double y[3])
{
    double d[3],temp[3],temp_1=0;
    int n=0,p=0,q=0;                        //定义未知量
    n=0;                                    //变量n初始化，防止影响后续运算
    for(q=0;q<3;q++)
    {
        p=q+1;
        for(;p<3;p++)
        {
            d[n]=pow((pow((x[q]-x[p]),2)+pow((y[q]-y[p]),2)),0.5);
            n+=1;
        }
    }                                       //for循环嵌套，计算三角形三条边的长度并打印在屏幕上
    n=0;                                    //变量n初始化，防止影响后续运算
    if(d[0]+d[1]>d[2] && d[0]+d[2]>d[1] && d[1]+d[2]>d[0])
    {                                       //判断和三角形是否成立
        for(n=0;n<3;n++)
        {
            temp_1=temp_1+d[n];
        }
        temp_1=0.5*temp_1;                  //求出海伦公式中的p
        n=0;                                //变量n初始化，防止影响后续运算求
        double area=1;                      //定义面积，由于海伦公式求面积用到乘法，故将初始值定义为1
        for(n=0;n<3;n++)                    //利用for循环，计算p-a，p-b，p-c,并累乘
        {
            temp[n]=temp_1-d[n];
            area=area*temp[n];
        }
        area=pow(area*temp_1,0.5);          //求出三角形面积
    }
    return area;
}

int size_ratio_3_elements(int n[3])
{
    int i,k,temp;                           //定义变量
    i=0;                                    //对i初始化
    for(i=0;i<3;i++)
    {
        k=i+1;
        for(;k<3,n[i]<n[k];k++)
        {
            temp=n[i];
            n[i]=n[k];
            n[k]=temp;
        }
    }
    return n[3];
}

int integer_test_palindromic(int integer)
{
    int integer,integer_palindromic,n,temp[n+1],p,q;
    for(n=0;integer!=0;n++)
    {
        temp[n]=integer%10;
        integer=(integer-temp[n])/10;
    }
    n=n-1;
    for(;n>=00;n-=1)
    {
        integer_palindromic=integer_palindromic+temp[n]*pow(10,q);
        q++;
        
    }
    return integer_palindromic,temp[n];
}

int factorial_summation(long long n)
{
    long long sum=1;                        //定义两个变量sum和sum_temp都初始化为1
    long long sum_temp=1;                   //这两个变量分别用来存储阶乘的和及每一个阶乘的结果
    int i=1;
    if(n==1)    return sum;
    while(i<n)                              // 如果输入的数大于1，则会进入第二个while循环，
    {
        i+=1;
        sum_temp=sum_temp*i;
        sum=sum+sum_temp;                   //在每次循环中，首先将i加1，然后计算i的阶乘，并累加到sum中
    }                                       //这个循环的目的是计算从2到n的所有自然数的阶乘的和
    return sum;                             //阶乘运算并没有直接使用函数库，而是通过循环和乘法运算来完成的
}