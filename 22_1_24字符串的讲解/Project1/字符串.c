#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//字符数组 - 数组是一组形同类型的元素
	//字符串结尾隐藏一个\0的字符
	//\0是字符串的结束标志
	//char arr[] = "hello"; 
	char arr1[] = "abc";
	char arr2[] = {'a','b','c','\0'};//主动给字符末尾添加'\0'，不然会产生乱码
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//求一个字符串长度-函数 - strlen
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//求一个字符串长度-函数 - strlen
	//strlen - string length
	//int len = strlen("abc");
	//printf("%d\n", len);

	//printf("%d\n",strlen(arr1));
	//printf("%d\n", strlen(arr2));

	return 0;
}