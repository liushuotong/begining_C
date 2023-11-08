#include<iostream>
int main(void)
{
    int n[3],i,k,temp;//定义变量
    for(i=0;i<3;i++){std::cout<<"n["<<i+1<<"]=";std::cin>>n[i];}//输入数组中的元素
    i=0;//对i初始化
    for(i=0;i<3;i++){k=i+1;for(;k<3,n[i]<n[k];k++){}
    temp=n[i];n[i]=n[k];n[k]=temp;}//for循环嵌套，将数组排序
    i=0;//对i初始化
    for(i=0;i<3;i++){std::cout<<n[i]<<std::endl;}//输出数组中的元素
    system("pause");
    return 0;
}//一遍过