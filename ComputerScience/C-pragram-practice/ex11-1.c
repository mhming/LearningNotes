/*
 * 设计并测试一个函数，从输入中获取下n个字符（包括空白、
 * 制表符、换行符），把结果存储在一个数组里，它的地址
 * 被传递作为一个参数
 * */
#include <stdio.h>
#include<string.h>
#define LEN 5
void strin(char * str);
int main(void)
{
	char str[LEN];
	printf("请输入5个字符：\n");
	strin(str);
	puts("输入的5个字符为：");
	for(int n=0;n<LEN;n++)
			putchar(str[n]);
}
void strin(char * str)
{
	for(int n=0;n<LEN;n++)
			str[n]=getchar();
}