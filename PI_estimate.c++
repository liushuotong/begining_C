#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	double m = 1;
	double Pi = 0;
	while (m <= 999999999)
	{
		Pi = Pi + 4 * pow(-1, m - 1) * pow(2 * m - 1, -1);
		m = m + 1;
		printf("Pi = % .100fl                        m=%fl\n", Pi, m);

	}
	printf("Pi ÔźľČÓÚŁş %lf\n", Pi);
	return 0;
}