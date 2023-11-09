#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
int main(void)
{
    int i,k,n;//定义i，k用于for循环嵌套时使用
    std::cout<<"|a11... a1n|"<<std::endl;
    std::cout<<"|a21... a2n|"<<std::endl;
    std::cout<<"|..........|"<<std::endl;
    std::cout<<"|an1... ann|"<<std::endl;
    std::cout<<"n=";
    std::cin>>n;//对n行n列的n经行定义，并输入
    std::vector<std::vector<int>> nums(n, std::vector<int>(n));
    //使用vector容器实现没有范围要求的n行n列式
    for(i=0;i<=n-1;i++){
        for(k=0;k<=n-1;k++){
            std::cout<<"("<<i+1<<","<<k+1<<")=";
            std::cin>>nums[i][k];
        }
    }//for循环嵌套，实现将n行n列式中的全部元素输入
    int m,j[n];
    for(i=0;i<=n-1;i++){
        for(k=0;k<=n-2;k++){
            for(m=k+1;m<=n-1;m++){
                if(nums[i][k]<nums[i][m])j[i]++;
            }
        }
    }//寻找逆序数
    int ans=0,temp=1;
    for(i=0;i<=n-1;i++){
        for(k=0;k<=n-1;k++){
            temp*=nums[i][k];
        }
        ans = ans + temp*pow(-1,j[k]);
    }
    std::cout<<ans<<std::endl;
    system("pause");
    return 0;
}