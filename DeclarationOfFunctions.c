#include <stdio.h>


////函数的声明,放在头文件（Add.h）内
//int Add(int, int);
////函数的定义放在（Add.c）另一个源文件内
//函数声明应放在函数使用之前/先声明后使用/
//函数的声明放在头文件中！

#include "Add.h"

int main()
{
	int a = 2;
	int b = 8;
	int sum = 0;
	//↓函数调用
	sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}