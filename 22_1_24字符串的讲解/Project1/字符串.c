#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ�����β����һ��\0���ַ�
	//\0���ַ����Ľ�����־
	//char arr[] = "hello"; 
	char arr1[] = "abc";
	char arr2[] = {'a','b','c','\0'};//�������ַ�ĩβ���'\0'����Ȼ���������
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//��һ���ַ�������-���� - strlen
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//��һ���ַ�������-���� - strlen
	//strlen - string length
	//int len = strlen("abc");
	//printf("%d\n", len);

	//printf("%d\n",strlen(arr1));
	//printf("%d\n", strlen(arr2));

	return 0;
}