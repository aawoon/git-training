#include<stdio.h>

int main()
{
	int kor, eng, math;
	int sum = 0;

	math = 100;
	eng = 100;
	kor = 100;
	sum = math + eng + kor;

	printf("This program print report card.\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("Sum : %d\n", sum);
	printf("Average : %d\n", sum/3);
	return 0;
}
