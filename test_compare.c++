#include<iostream>
int main(void)
{
    int m,n,i,k;//std::cout<<""与c语言中的printf类似
    std::cout<<"input sizeof(nums):";
    std::cin>>m;
    int num[m];
    for(n = 0;n < m;n++){
        std::cin>>num[n];
    }//通过该循环实现输入n
    //将std::cin>>代换为scanf即可改成c语言
    for(i = 0;i < n-1;i++){
        for(k = i+1;k < n;k++){
            if(num[i]<num[k]) break;
            else continue;
        }
        if(k == n) break;
        else{
            i = k;
            continue;
        }
    }
    std::cout<<"max"<<i+1<<"="<<num[i]<<std::endl;
    return 0;
}