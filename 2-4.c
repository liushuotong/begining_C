#include<stdio.h>
typedef unsigned char *byte_pointer;
void show_int(int);
void show_float(float);
void show_pointer(void *);
typedef int *int_prt;
int_prt i;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for(i = 0; i < len ; i++) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}
void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}
int main() {
    int ival = 0x87654321;
    float fval = 3.1415926;
    int *ip = &ival;
    float *fp = &fval;
    show_int(ival);
    show_float(fval);
    show_pointer(ip);
    show_pointer(fp);
    printf("Press any key to continue...");
    getchar();
    return 0;
}