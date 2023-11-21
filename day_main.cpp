#include<iostream>
#include<iomanip>
#include<string>
/**
 * The main function of the C++ program.
 *
 * @return int The exit status of the program.
 */
int main()
{
    /*This code snippet is a C++ program with a main() function. 
    It demonstrates the usage of pointers and constants in C++. 
    It creates a pointer s to a constant string, 
    assigns it to pointer p, and assigns the address of s to pointer q.
    It then prints the values of *s, *p, and **q. After that,
    it deletes the memory allocated for s and sets s to nullptr.
    Finally, it waits for user input before exiting.
    The code also includes some comments and additional output explaining certain aspects of the code.*/
    std::cout<<"testForConst"<<std::endl;
    const std::string * s = new std::string("hello");
    std::string const * p = s;
    const std::string ** q = &s;
    std::cout<<"if use \'std::string * const q = s;\', get error\n";
    std::cout<<"\'std::string * const q = s;\' means a constant pointer,\nwhich can not be changed\n";
    std::cout<<"const std::string * s = new std::string(\"hello\"); result: "<<*s<<"\n";
    std::cout<<"const std::string * p = s; result: "<<*p<<"\n";
    std::cout<<"const std::string ** q = &s; result: "<<**q<<"\n";
/*--------------------------------------------------------------------------------------------------------------------------------------------------------
ERROR:在C++中，"不能将 "const std::__cxx11::string **" 类型的值分配到 "const std::__cxx11::string *" 类型的实体"
问题出现在p = &s;这行代码上。
在这种情况下，编译器会报错，
因为它认为你试图将类型为"const std::__cxx11::string **"的值分配给类型为"const std::__cxx11::string *"的变量，
这是不允许的。
在这种情况下，s是一个指向常量字符串的指针（const std::string *），而p也是一个指向常量字符串的指针。
在这种情况下，&运算符用于获取变量的地址，所以&s是s变量的地址，它的类型是"const std::__cxx11::string **"（指向指向常量字符串的指针）。
--------------------------------------------------------------------------------------------------------------------------------------------------------*/

    delete s;
    s = nullptr;
    std::cout<<"after delete s, s = "<<s<<"\n";
    std::cout<<"press any key to continue...";
    std::cin.get();
    return 0;
}