#include<iostream>
#include<iomanip>
namespace Solution
{
    void swap(int*,int*);
};

void swap(int *a,int *b)
{
    *a = *a^*b;
    *b = *b^*a;
    *a = *a^*b;
}

int main(void)
{
    
    int a,b;
    std::cin>>a>>b;
    Solution::swap(&a,&b);
    return 0;
}
