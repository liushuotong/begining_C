#include<iostream>
#include <vector>
#include <algorithm>
#include<windows.h>
#include<iomanip>
int main(void)
{
    int m,n,i,k;
    std::cout<<"input sizeof(nums):";
    std::cin>>m;
    int num[m];
    for(n = 0;n < m;n++){
        std::cin>>num[n];
    }//input num[n]
    
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
    //find the biggest one
    QueryPerformanceCounter(&nEndTime);//timer end
    
    time2=(double)(nEndTime.QuadPart-nBeginTime.QuadPart)/(double)nFreq.QuadPart;
    //calculate the time to make it possible to compare with time1
    std::cout<<"TimeCheck.end"<<std::endl;
    std::cout<<"Time.check:"<<time2<<std::fixed<<std::setprecision(10)<<std::endl;
    //output time.check to compare the different methods' time
    std::cout<<"max"<<i+1<<"="<<num[i]<<std::endl;
    //to check the answer
    std::vector<int> nums;
    
    for(n = 0;n < m;n++){
        nums.push_back(num[n]);
    }//include vector to use vector<int> to process the data
    //use for() to add element to vector<int> nums[m]
    
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
    //similar to the first method's annotation
    return 0;
    system("pause");
    //only accessible in windows environment
    return 0;
}
