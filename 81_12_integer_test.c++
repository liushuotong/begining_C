#include<iostream>
#include<cmath>
int main(void)
{
    int integer,integer_palindromic,n,temp[n+1],p,q;
    std::cin>>integer;std::cout<<std::endl;
    for(n=0;integer!=0;n++)
    {
        temp[n]=integer%10;
        std::cout<<"the 10^"<<n<<" place:"<<temp[n]<<std::endl;
        integer=(integer-temp[n])/10;
    }
    std::cout<<std::endl;
    n=n-1;
    for(;n>=00;n-=1)
    {
        integer_palindromic=integer_palindromic+temp[n]*pow(10,q);
        q++;
        
    }
    std::cout<<"the integer's palindromic number is: "<<integer_palindromic<<std::endl;
    system("pause");
    return 0;
}