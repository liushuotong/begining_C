//const的用法

/*
    1.可以定义常量
    2.防止修改，起保护作用，增加程序健壮性
    3.类型检查
    4.可以节省空间，避免不必要的内存分配
*/

// file1.cpp
int ext;

// file2.cpp
#include<iostream>
extern int ext;

/*
    extern int 是一个变量声明
    它告诉编译器在其他地方有一个 int 类型的变量
    但是该变量并没有在当前的代码文件中定义
    这通常在多个文件之间共享变量时使用
    通过使用 extern int
    可以在当前文件中引用其他文件中定义的全局变量
*/

int main()
{
    std::cout<<(ext+10)<<std::endl;
}


#include<string>
int test()
{
    const int b = 10;
    //b = 0; // error: assignment of read-only variable ‘b’
    const std::string s = "helloworld";
    //const int i,j=0
    // error: uninitialized const ‘i’
    //上述有两个错误
    //b 为常量，不可更改！
    //i 为常量，必须进行初始化！(因为常量在定义后就不能被修改，所以定义时必须初始化。)
}

/*
    指针与const
    与指针相关的const有四种：
*/

const char * a; 

// 指向const对象的指针或者说指向常量的指针

/* 
    声明了一个指向常量对象的指针
    在这种情况下，a 是一个指针
    它指向一个 
*/

const char ;

/*
    类型的对象
    这意味着 a 指向的对象是不可修改的
    即不能通过 a 来修改该对象的值
    可以通过其他方式修改指针 a 本身来指向不同的对象
*/

char const * a;
// 同上

char * const a;
/*声明了一个指向类型对象的*/

const
/*指针也可以称为常指针或者*/

const
/*
    指针在这种情况下
    a 是一个指针
    它指向一个 char 类型的对象
    这个指针是常量
    意味着它的值不能被修改
    即不能通过改变 a 的值来指向其他对象
    可以通过 a 来修改指向对象的值
    a 是一个指向 char 类型对象的常指针
    可以修改对象的值
    但不能修改指针本身的值
*/

// 指向类型对象的const指针或者说常指针
// const指针

const char * const a; 
// 指向const对象的const指针

const int * const ptr;// 指向常量的指针

/*
    const int *ptr;
    int *ptr = 10;// error
*/

//ptr是一个指向int类型const对象的指针
//const定义的是int类型
//也就是ptr所指向的对象类型
//而不是ptr本身
//所以ptr可以不用赋初始值
//但是不能通过ptr去修改所指对象的值
//除此之外
//也不能使用void*指针保存const对象的地址
//必须使用const void*类型的指针保存const对象的地址。

/*
    const int p = 10;
    const void * vp = &p;
    void *vp = &p; // error
*/

//另外一个重点是：
//允许把非const对象的地址赋给指向const对象的指针
//允许把指向const对象的指针将非const对象的地址赋给const对象的指针:

int test()
{
    const int *ptr;
    int val = 3;
    ptr = &val; // ok
    return 0;
}

/*
    小结：
    1.对于指向常量的指针
    不能通过指针来修改对象的值。
    2.不能使用void*指针保存const对象的地址
    必须使用const void*类型的指针保存const对象的地址。
    3.允许把非const对象的地址赋值给const对象的指针
    如果要修改指针所指向的对象值
    必须通过其他方式修改
    不能直接通过当前指针直接修改。
*/

/*
    函数中使用const
    const修饰函数返回值
    这个跟const修饰普通变量以及指针的含义基本相同：
*/

//（1）const int

const int func1();
//这个本身无意义，因为参数返回本身就是赋值给其他的变量！

//（2）const int*

const int* func2();
//指针指向的内容不变。

//（3）int *const

int *const func3();
//指针本身不可变。

//const修饰函数参数

//第一：将常量定义与static结合，也就是：

static const int apple_number;

/*
在C++中，static关键字的含义取决于它的使用位置。

当在函数或块内部的变量前使用static关键字时，
它使得该变量在多次函数调用之间保持其值不变。
这意味着变量只初始化一次，然后在程序的整个生命周期内保持其值不变。

当在全局范围内的变量或函数前使用static关键字时，
它将限制其可见性仅限于定义它的源文件中。
这意味着该变量或函数只能在同一源文件中访问，而无法从其他文件中访问。

在static const int apple_number;的情况下，
它声明了一个名为apple_number的常量整数变量，
并具有静态存储期。这意味着变量保持其值，
并且只能在定义它的源文件中访问。
此外，它是const类型，这意味着其值在初始化后无法修改。
*/
/*const类型和static关键字在C++中有不同的用途和含义，但它们也可以结合起来使用。

区别：

const是用于声明常量的关键字，表示变量的值在初始化之后不能被修改。
static关键字用于控制变量的存储和作用域。

联系：

当const与非静态变量一起使用时，它指示该变量是一个常量，并且其值不能被修改。
当const与静态变量一起使用时，它指示该静态变量是一个常量，并且其值在程序的整个生命周期内保持不变。
const static常常用于定义全局的常量，例如全局配置参数或常见的常量值。

总结： 
const用于声明常量，static用于控制变量的存储和作用域。
它们可以单独使用，也可以结合在一起使用，以创建静态的常量变量。
*/

/*
静态变量（static变量）与常量（const变量）在C++中有一些联系和区别。

联系：

静态变量和常量都具有静态存储期，
它们的值在程序的整个生命周期内保持不变。
静态变量和常量都可以在全局作用域或局部作用域中声明。
静态变量和常量都可以被多个函数或代码块共享。
区别：

静态变量可以被修改，而常量的值在初始化后不能被修改。
静态变量可以具有作用域限制，只能在定义它的源文件中访问，而常量可以在多个源文件中共享。
静态变量在程序运行时只初始化一次，而常量在每个使用它的地方都会被初始化。
静态变量的生命周期与程序的生命周期相同，而常量的生命周期取决于它们的作用域。
总结： 静态变量可以被修改且具有作用域限制，常量的值在初始化后不能被修改且可以在多个源文件中共享。它们都具有静态存储期，但初始化的时机和生命周期有所不同。
*/