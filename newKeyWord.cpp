#include<iostream>
#include<iomanip>
typedef int* int_ptr;
typedef void* void_ptr;
typedef char* char_ptr;
int main(void) {
    system("chcp 65001");
    int_ptr i = new int[50];
    *i = 10;
    char_ptr j = new char[50];
    *j = 'a';
    std::cout<<"Before Delete:\n";
    std::cout << *i << std::setw(5) << ":" << std::hex << reinterpret_cast<uintptr_t>(i) <<"\n";
    std::cout << *j << std::setw(6) << ":" << std::hex << reinterpret_cast<uintptr_t>(j) <<"\n";
    delete[] i;
    delete[] j;
    std::cout<<"After Delete:\n";
    std::cout << *i << std::setw(1) << ":" << std::hex << reinterpret_cast<uintptr_t>(i) <<"\n";
    std::cout << *j << std::setw(6) << ":" << std::hex << reinterpret_cast<uintptr_t>(j) <<"\n";
    std::cout<<"Press any key to continue...";
    std::cin.get();
    return 0;
}