#include<iostream>
#include<cstdio>
#include<windows.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main(void)
{
    int a=0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;
    while(a==c||a==d||a==b||b==c||b==d||c==d){cout<<"error"<<endl;cin>>a>>b>>c>>d;}
    int temp;
    if(a>b) {temp=a;a=b;b=temp;}
    if(a>c) {temp=a;a=c;c=temp;}
    if(b>c) {temp=b;b=c;c=temp;}
    if(d<a) {temp=d;d=a;a=temp;}
    if(d<b) {temp=d;d=b;b=temp;}
    if(d<c) {temp=d;d=c;c=temp;}
    cout<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<d<<endl;
    cout<<'\n'<<"success"<<endl;
    system("pause");
    return 0;
}
/*这段代码的初始目的应该是接受四个整数输入，然后对这四个数字进行排序。
采用的方法是通过连续比较交换来实现的。

首先我想提几点修改建议：

1. 在一开始的while循环中，你要求用户输入的四个数字不能相等：
如果任何两数字相等，就会向用户输出错误信息，并请求他们重新输入。
但是，这把禁止了一些可能的有效输入（比如两个或更多的数相同）。除非逻辑需要，否则我们应该允许这类输入。

2. 这段代码中的排序算法并不高效。
对四个数字排序，最多需要三次比较就可以完成，但这段代码做了六次比较。
这在处理四个数字时问题不大，但如果数字更多，这个效率问题就会体现出来。
为此，我推荐使用一个经过优化的排序算法，如冒泡排序、插入排序或选择排序。

3. 你的代码有一些无效的"else;"语句，这不会造成任何问题，但也没有必要，可以去掉。

4. "system("pause");" 这样的语句是不推荐的，因为这是平台相关的。
这在Windows系统中可行，但在Linux或MacOS系统中可能就无法正常工作了。
为了使你的代码更具有可移植性，建议删除这行代码。

修改后的代码（使用冒泡排序）如下：*/
/*
#include<iostream>
using namespace std;
int main(void)
{
    int nums[4], temp;
    cin>>nums[0]>>nums[1]>>nums[2]>>nums[3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3-i; j++)
        {
            if(nums[j] > nums[j+1]) 
            { 
                temp = nums[j]; 
                nums[j] = nums[j+1]; 
                nums[j+1] = temp; 
            }
        }    
    }
    for(int i=0;i<4;i++)
    {
        cout<<nums[i]<<endl;
    }
    return 0;
}
*/

/*此代码会接受四个整数作为输入，并使用冒泡排序算法对它们进行排序。
这样的代码更简洁，效率也更高，并且移除了原本代码中可能出现的问题。*/