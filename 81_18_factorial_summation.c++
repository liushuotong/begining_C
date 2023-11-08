#include<iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
int main(void)
{
    long long n=0;
//1.0 int n=0;
    double n_temp=0;                    //首先，程序通过cin语句读取用户输入的一个数n_temp
    cout<<"SOLUTION FOR 1!+2!+3!+...+n!"<<endl;
    cout<<"Please enter apositive integer."<<endl;
    cout<<"n=";
    cin>>n_temp;                        //此处假设用户可能输入一个不是正整数的数，所以使用了double类型来接收
    while(n_temp<=0 || n_temp-(int)n_temp!=0)
    {
        Beep(523,1200);
        Beep(523,1200);
        Beep(523,1200);
        cout<<"error"<<endl;
        cout<<"Please enter a positive integer."<<endl;
        cin>>n_temp;                    //如果用户输入的n_temp小于等于0，或者n_temp减去它的整数部分不等于它本身（表示它不是整数），那么就会进入循环
    }                                   //在循环中，首先会输出"error"提示错误，然后提示用户重新输入一个正整数，然后通过cin语句重新读取用户输入的数
    n=(int)n_temp;                      //程序会将n_temp转换为整数并赋值给n，因为后续的计算只需要用到正整数          
    long long sum=1;                    //定义两个变量sum和sum_temp都初始化为1
    long long sum_temp=1;               //这两个变量分别用来存储阶乘的和及每一个阶乘的结果
//1.0  int sum=1;
    int i=1;
    if(n==1)    cout<<"1!=1"<<endl;    //判断如果输入的数是1，则直接输出"Σn!=1"
    while(i<n)                          // 如果输入的数大于1，则会进入第二个while循环，
    {
        i+=1;
        sum_temp=sum_temp*i;
        sum=sum+sum_temp;               //在每次循环中，首先将i加1，然后计算i的阶乘，并累加到sum中
    }                                   //这个循环的目的是计算从2到n的所有自然数的阶乘的和
    cout<<"1!+...+n!="<<sum<<endl;
    return 0;                           //阶乘运算并没有直接使用函数库，而是通过循环和乘法运算来完成的
}                                       
//根据chatGPT4.0给出意见修改
//1.对用户输入的验证方法不够严谨，应该在用户输入非正整数时进行提示并重新输入。
//2.在程序中，用了int类型来存储阶乘和，当阶乘值比较大时，有可能会导致溢出。
//3.如果输入的n值很大，阶乘将变得非常大，超过int或者long long的范围，需要考虑怎样处理。
//4.您在代码中重复使用了“sum_temp=sum_temp*i; sum=sum+sum_temp;”，这两行代码其实可以合并为一行。
//注意：
//你需要预料到该程序对于大的输入可能会遇到的问题（例如，阶乘值可能会非常快地增长到超过long long的范围）。
//您可以向用户明确说明这个程序的限制，或者寻找一个替代的方法来处理大的输入。
/*
#include<iostream>
using namespace std;
int main(void)
{
    long long n=0;
    double n_temp=0;
    cin>>n_temp;
    while(n_temp<=0||n_temp-int(n_temp)!=0)
    {
        cout<<"错误"<<endl;
        cout<<"请输入一个正整数。"<<endl;
        cin>>n_temp;
    }
    n=(int)n_temp;
    long long sum=0;
    long long factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
        sum+=factorial;
    }
    cout<<"1!+...+n!="<<sum<<endl;
    return 0;
}
*/