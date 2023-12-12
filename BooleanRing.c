#include<stdio.h>
#include<string.h>
typedef unsigned char *byte_pointer;
typedef int *int_prt;
typedef float *float_prt;
void swap_int(int_prt a, int_prt b);
void swap_float(float_prt a, float_prt b);
void swap_int(int_prt a, int_prt b) {
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
void swap_float(float_prt a, float_prt b) {
    float_prt tmp;
    *a = *tmp;
    *b = *a;
    *tmp = *b;
}
int main(void) {
    int ival01 = 0x87654321;
    int *ip01 = &ival01;
    int ival02 = 0x12345678;
    int *ip02 = &ival02;
    printf("Before Swap:\n");
    printf("%x %x\n", *ip01, *ip02);
    printf("After Swap:\n");
    swap(ip01, ip02);
    printf("%x %x\n", *ip01, *ip02);
    printf("Press any key to continue...");
    getchar();
    return 0;
}