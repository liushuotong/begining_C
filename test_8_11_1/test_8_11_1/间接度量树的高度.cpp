#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float distance1;
	float height1;
	float height2;
	float distance2;
	float distance3; 
	float height;
	float result_height1;
	float result_height2;
	float specific_value;
	//�������б���
			printf("Please input distance1:");
			scanf("%f", &distance1);
			printf("Please input distance2:");
			scanf("%f", &distance3);
			printf("Please input your height1:");
			scanf("%f", &height1);
			printf("Please input your height2:");
			scanf("%f", &height2);
	//�������ݲ���ֵ
	distance2 = distance3 + distance1;
	height = height2 - height1;
	specific_value = distance2  / distance1;
	result_height1 = specific_value * height;
	result_height2 = result_height1 + height1;
	//����
			printf("The result is %f meters.",result_height2);
	//��ʾ���
	return 0;
}