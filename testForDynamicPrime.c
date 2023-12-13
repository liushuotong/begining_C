//
// dynamicPrimeExample.c : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// Program 7.11 A dynamic prime example
//

#define _CRT_SECURE_NO_WARNINGS
#define _STDC_WANT_LIB_EXIT__ 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
	unsigned long long* pPrimes = NULL;
	// 将指针初始化为 NULL
	unsigned long long trial = 0;
	// trial用于临时存储素数
	bool found = false;
	// found用于判断是否找到
	int total = 0, count = 0;
	// total用于存储需要的素数个数， count用于计数，count用于计数
	printf("How many primes do you want to get?\n");
	scanf("%d", &total);// 读取用户输入，将其赋值给 total
	total = total < 4 ? 4 : total;
	// 这是一个条件表达式，也被称为三元运算符。
	// 它的作用是判断 total 是否小于 4，如果是，则将 total 的值设为 4，
	// 如果不是，则保持 total 的原始值不变。这种写法可以用来快速限制一个变量的取值范围。
	pPrimes = (unsigned long long*)malloc(total * sizeof(unsigned long long));
	// 使用 malloc() 分配内存，将返回的指针赋值给 pPrimes，并强制转换类型由 void* 改为 unsigned long long*，
	// 与pPrimes的类型相同，所以可以直接使用指针赋值给pPrimes
	// 并且内存的大小为 total*sizeof(unsigned long long)，与所需要的内存相匹配
	if (pPrimes == NULL) {
		// 如果 pPrimes 的值为 NULL，即指针未被正确分配内存或者指向的内存已被释放，
		// 则条件 !pPrimes 为真。在条件为真的情况下，代码块中的内容将被执行。
		// 即打印错误信息 "ERROR: Out of memory"，然后返回值 1，表示程序执行出现错误。
		printf("ERROR: Out of memory!");
		return 1;
	}
	// 如果 pPrimes 的值不为 NULL，即指针已经成功分配了内存，
	// 则条件 !pPrimes 为假，代码块中的内容将被跳过，程序继续执行。
	// 这段代码的作用是在使用指针 pPrimes 之前，先检查它是否已经成功分配了内存。
	// 如果没有成功分配内存，就会打印错误信息并终止程序的执行。
	// 这是一种常见的内存错误检查机制，用于确保指针指向的内存是有效的。
	*pPrimes = 2ULL;
	// 这行代码将 2ULL 的值赋给了指针 pPrimes 所指向的内存地址。
	// 在这里，2ULL 表示一个 unsigned long long 常量值为 2。
	// 通过将该值赋给指针 pPrimes，可以在内存中存储这个值，以供后续使用。
	// 请注意，指针变量的类型必须与所指向的内存地址中存储的值的类型匹配。
	*(pPrimes + 1) = 3ULL;
	// ULL 表示 unsigned long long
	// 这行代码将 3ULL 的值赋给了指针 pPrimes + 1 所指向的内存地址。
	*(pPrimes + 2) = 5ULL;
	// 这行代码将 5ULL 的值赋给了指针 pPrimes + 2 所指向的内存地址。
	// 这样，通过指针 pPrimes，可以在内存中存储一系列数值，分别是 2、3、5。
    count = 3;
    trial = 5ULL;
	while (count < total) {
		trial += 2ULL;
		// 这行代码将 trial 的值加 2
		for (size_t i = 0; i < count; ++i) {
			if ((found = trial % *(pPrimes + i) == 0)) {
				break;
			}
		}
		if (!found) {
			*(pPrimes + count++) = trial;
		}
	}
	for (size_t i = 0; i < count; ++i) {
		printf("%12llu", *(pPrimes + i));
		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	printf("Total primes: %d\n", count);
	// 这是一个编译错误，错误代码为 C4996。
	// 该错误消息指出，getch 函数的 POSIX 名称已被弃用，并建议使用 ISO C 和 C++ 兼容的名称 _getch。
	// 具体来说，你的代码中使用了 getch 函数，但该函数的命名已经被标记为过时。
	// 相应地，建议你使用 _getch 作为替代。你可以参考在线帮助文档获取更多详情。
	// 这个错误的出现可能是因为你的代码使用了已经不推荐使用的函数名称，
	// 编译器希望你更新为兼容的名称来保持代码的可移植性和兼容性。你可以将 getch 替换为 _getch 来解决这个问题。
	// 打印输出
	free(pPrimes);
	// 释放内存
	if (pPrimes) {
		printf("memory delete successfully!\n");
	}
	// 释放内存
	// 释放内存后，指针 pPrimes 将变为 NULL。
	// 这种做法是为了防止在程序中出现内存泄漏。
	printf("Press any key to continue...");
	_getch();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
