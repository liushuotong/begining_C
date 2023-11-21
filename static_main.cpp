#include<iostream>
#include<iomanip>
#include<string>
void demo();
int main()
{
    std::cout<<"cppThingsStatic\n";
    for(int i = 1;i <= 5;i++){
        demo();
    }
    std::cout<<"\nPressure any key to continue...";
    std::cin.get();
    return 0;
}
void demo() 
{ 
	// static variable 
	static int count = 0; 
	std::cout << count << " ";
	// value is updated and 
	// will be carried to next 
	// function calls 
	count++; 
}
/*
Sun, Nov 19, 2023, 11:43 am
构造函数和析构函数是类中的特殊成员函数，它们有以下作用：

构造函数（Constructor）：

构造函数在对象创建时被调用，用于初始化对象的成员变量。
构造函数的名称与类名相同，没有返回类型。
构造函数可以有多个重载版本，根据参数的不同进行重载。
构造函数可以执行任意的初始化操作，例如为成员变量分配内存、设置默认值等。
构造函数在对象创建时自动调用，无需显式调用。
析构函数（Destructor）：

析构函数在对象销毁时被调用，用于清理对象的资源。
析构函数的名称与类名相同，前面加上一个波浪号（~）作为前缀，没有返回类型。
析构函数没有参数，不能被重载。
析构函数通常用于释放动态分配的内存、关闭文件、释放资源等清理操作。
析构函数在对象销毁时自动调用，无需显式调用。
构造函数和析构函数是类的重要组成部分，
它们确保了对象在创建和销毁时的正确初始化和清理。
通过正确使用构造函数和析构函数，可以提高代码的可读性和可维护性，并防止资源泄露和错误的发生。*/