#include<iostream>
#include<cmath>
//if we don't use pointer, 
//foctions will define new values when we want to cite the fuctions in the main
void swap(int*,int*);//we don't need to define pointer value all the time
void swap_np(int*,int*);//pointer is a must when we are using fuctions
int main(void)
{
    int *pointer_1;
    int *pointer_2;//define pointer values
    int a,b,a_te,b_te;//define intgers values
    std::cin>>a>>b;
    a_te=a;b_te=b;//input values
    pointer_1 = &a;
    pointer_2 = &b;//connect addresses to pointers 
    if(a<b)//estimate whether conditions are met
    {
        swap(pointer_1,pointer_2);
        swap_np(&a_te,&b_te);//sometimes we can choose to cite the address to replace pointer
    }
    std::cout<<"max="<<a<<std::endl;
    std::cout<<"min="<<b<<std::endl;
    std::cout<<std::endl;
    std::cout<<"max="<<a_te<<std::endl;
    std::cout<<"min="<<b_te<<std::endl;
    system("pause");
    return 0;
}
void swap(int* p1,int* p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void swap_np(int* x,int* y)
{
    int tp;
    tp=*x;
    *x=*y;
    *y=tp;
}