#include<stdio.h>
#include<string.h>
typedef unsigned char *byte_pointer;
void show_int(int);
void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for(i = 0; i < len ; i++) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}
int main(void) {
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));
    printf("Press any key to continue...");
    getchar();
    return 0;
}
