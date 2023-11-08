#include<iostream>
#include<cmath>
int main(void)
{
    double x[3],y[3],d[3],temp[3],temp_1=0;
    int n=0,p=0,q=0;//定义未知量
    std::cout<<"Three side aregiven to solve the area of the triangle"<<std::endl;
    for(n=0;n<3;n++)
    {
        std::cout<<"x["<<n+1<<"]=";std::cin>>x[n];
        std::cout<<"y["<<n+1<<"]=";std::cin>>y[n];
        std::cout<<std::endl;
    }//输入三个坐标
    n=0;//变量n初始化，防止影响后续运算
    for(q=0;q<3;q++)
    {
        p=q+1;
        for(;p<3;p++)
        {
            d[n]=pow((pow((x[q]-x[p]),2)+pow((y[q]-y[p]),2)),0.5);
            std::cout<<"d["<<n+1<<"]="<<d[n]<<std::endl;
            n+=1;
        }
    }//for循环嵌套，计算三角形三条边的长度并打印在屏幕上
    n=0;//变量n初始化，防止影响后续运算
    if(d[0]+d[1]>d[2] && d[0]+d[2]>d[1] && d[1]+d[2]>d[0])//判断和三角形是否成立
    {
        for(n=0;n<3;n++){temp_1=temp_1+d[n];}
        temp_1=0.5*temp_1;//求出海伦公式中的p
        n=0;//变量n初始化，防止影响后续运算求
        double area=1;//定义面积，由于海伦公式求面积用到乘法，故将初始值定义为1
        for(n=0;n<3;n++)//利用for循环，计算p-a，p-b，p-c,并累乘
        {
            temp[n]=temp_1-d[n];
            area=area*temp[n];
        }
        area=pow(area*temp_1,0.5);//求出三角形面积
        std::cout<<"area="<<area<<std::endl;
    }
    else{std::cout<<"error"<<std::endl;}
    system("pause");
    return 0;
}