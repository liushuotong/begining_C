#include<iostream>
int main(void)
{
    int num1 = 0,num2 = 0;
    double num1_input = 0,num2_input = 0;
    std::cout << "Find the least common multiple and the greatest common divisor of two positive integers" << std::endl;
    while (true)
    {
        std::cout << "Please enter the first positive integer:" << std::endl;
        std::cin >> num1_input;
        if (num1_input - (int)num1_input == 0 && num1_input>0)  break;
        else
        {
            std::cout << "ERROR" << std::endl;
            if (num1_input - (int)num1_input != 0 && num1_input > 0)
            {std::cout << "The input data must be integers!" << std::endl;}
            else if(num1_input - (int)num1_input == 0 && num1_input <= 0)
            {std::cout << "The input data must be positive!" << std::endl;}
            else
            {std::cout << "The input data must be positive integers!" << std::endl;}
        }
    }
    num1 = (int)num1_input;
    while (true)
    {
        std::cout << "Please enter the second positive integer:" << std::endl;std::cin >> num2_input;
        if (num2_input - (int)num2_input == 0)break;
        else
        {
            if (num2_input - (int)num2_input != 0 && num2_input > 0)
            {std::cout << "The input data must be integers!" << std::endl;}
            else if (num2_input - (int)num2_input == 0 && num2_input <= 0)
            {std::cout << "The input data must be positive!" << std::endl;}
            else{std::cout << "The input data must be positive integers!" << std::endl;}
        }
    }
    num2 = (int)num2_input;
    int least_common_multiple(int num1,int num2),greatest_common_divisor(int num1, int num2);
    std::cout << num1 << " and " << num2 << " 's least common multiple is:" << least_common_multiple(num1, num2) << std::endl;
    std::cout << num1 << " and " << num2 << " 's greatest common divisor is:" << greatest_common_divisor(num1, num2) << std::endl;
    system("puase");
    return 0;
}

int least_common_multiple(int a, int b){int r;while (0 != (r = a % b)){a = b;b = r;}return b;}
int greatest_common_divisor(int a, int b){return (a * b) / least_common_multiple( a, b);}