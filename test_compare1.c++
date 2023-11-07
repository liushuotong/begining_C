#include<iostream>
#include <vector>
#include <algorithm>
#include<windows.h>
#include<iomanip>
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
    double time2=0;
    LARGE_INTEGER nFreq;
    LARGE_INTEGER nBeginTime;
    LARGE_INTEGER nEndTime;
    std::cout<<"TimeCheck.begin"<<std::endl;
    //remind that the TimeCheck process just began
    QueryPerformanceFrequency(&nFreq);
    QueryPerformanceCounter(&nBeginTime);
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
    QueryPerformanceCounter(&nEndTime);
    time2=(double)(nEndTime.QuadPart-nBeginTime.QuadPart)/(double)nFreq.QuadPart;
    std::cout<<"TimeCheck.end"<<std::endl;
    std::cout<<"Time.check:"<<time2<<std::fixed<<std::setprecision(10)<<std::endl;
    std::cout<<"max"<<i+1<<"="<<num[i]<<std::endl;
    std::vector<int> nums;
    for(n = 0;n < m;n++){
        nums.push_back(num[n]);
    }
    double time1=0;
    std::cout<<"TimeCheck.begin"<<std::endl;
    //remind that the TimeCheck process just began
    QueryPerformanceFrequency(&nFreq);
    QueryPerformanceCounter(&nBeginTime);
    auto max_position = std::max_element(nums.begin(), nums.end());
    QueryPerformanceCounter(&nEndTime);
    time1=(double)(nEndTime.QuadPart-nBeginTime.QuadPart)/(double)nFreq.QuadPart;
    std::cout<<"TimeCheck.end"<<std::endl;
    std::cout<<"Time.check:"<<time1<<std::fixed<<std::setprecision(10)<<std::endl;
    std::cout << "Max position: " << std::distance(nums.begin(), max_position) + 1<< std::endl;
    std::cout<<"max"<< std::distance(nums.begin(), max_position) + 1<<"="<<num[std::distance(nums.begin(), max_position)]<<std::endl;
    return 0;
    system("pause");
    return 0;
}