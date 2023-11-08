#include<iostream>
#include<cmath>
int main(void)
{
    int n=20,k;
    double p,q,nums1[n],nums2[n],temp,sum;
    nums1[0]=1;
    nums1[1]=2;
    nums2[0]=2;
    nums2[1]=3;
    sum=sum+temp;
    temp=nums2[0]/nums1[0];
    std::cout<<"nums1[1]= "<<nums1[0]<<std::endl;
    std::cout<<"nums2[1]= "<<nums2[0]<<std::endl;
    std::cout<<"temp[1]= "<<temp<<std::endl;
    std::cout<<std::endl;
    sum=sum+temp;
    temp=nums2[1]/nums1[1];
    std::cout<<"nums1[2]= "<<nums1[1]<<std::endl;
    std::cout<<"nums2[2]= "<<nums2[1]<<std::endl;
    std::cout<<"temp[2]= "<<temp<<std::endl;
    std::cout<<std::endl;
    for(k=2;k<=19;k++)
    {
        nums1[k]=nums1[k-1]+nums1[k-2];
        nums2[k]=nums2[k-1]+nums2[k-2];
        temp=nums2[k]/nums1[k];
        sum=sum+temp;
        std::cout<<"nums1["<<k+1<<"]= "<<nums1[k]<<std::endl;
        std::cout<<"nums2["<<k+1<<"]= "<<nums2[k]<<std::endl;
        std::cout<<"temp["<<k+1<<"]= "<<temp<<std::endl;
        std::cout<<std::endl;
    }
    std::cout<<"sum= "<<sum<<std::endl;
    system("pause");
    return 0;
}