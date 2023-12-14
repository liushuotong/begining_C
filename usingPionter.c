#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void) {
    int number = 10;
    int* prt01 = NULL;
    // 将指针初始化为 NULL
    prt01 = (int*)malloc(sizeof(number));
    // 使用 malloc() 分配内存，将返回的指针赋值给 prt01
    if (prt01 == NULL) {
        printf("ERROR: Out of memory!");
        return 1;
    }
    // 检测内存是否成功分配
    printf("number\'s value is %d\n", number);
    printf("number\'s address is %p\n", prt01);
    // 输出变量的值和地址
    free(prt01);
    // 释放内存
    if (prt01 == NULL) {
        printf("\nmenory has been released!");
    }
    // 检测内存是否释放
    printf("\nPress any key to exit...");
    _getch();
    return 0;
}