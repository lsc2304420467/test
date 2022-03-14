#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*int arr1[8];
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr3[10] = { 1,2,3,4,5 };
	int arr4[] = { 1,2,3,4,5 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr3[i]);
	}
	char ch3[5] = "bit";
	char ch4[] = "bit";
	char ch5[] = { 'b','i','t' };
	char ch6[3] = { 'b','i','t' };
	printf("%s\n", ch4);
	printf("%s\n", ch5);
	printf("%s\n", ch6);
	printf("%d\n", strlen(ch4));
	printf("%d\n", strlen(ch5));
	printf("%d\n", strlen(ch6));*/
	int a[10] = {0};
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", a[i]);
	//}
	//a[4] = 5;
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", a[i]);
	//}
	////计算数组的元素个数
	//int sz = sizeof(a) / sizeof(a[0]);
	int i = 0;
	//printf("%p\n", 0X12);//按地址格式打印，会自动补齐空白位
	//printf("%x\n", 0x12);//按16进制打印
	/*for (int i = 0; i < 10; i++)
	{
		printf("&a[%d]=%p\n",i, &a[i]);
	}*/
		/*&a[0] = 008FF788
		& a[1] = 008FF78C
		& a[2] = 008FF790
		& a[3] = 008FF794
		& a[4] = 008FF798
		& a[5] = 008FF79C
		& a[6] = 008FF7A0
		& a[7] = 008FF7A4
		& a[8] = 008FF7A8
		& a[9] = 008FF7AC*/
	//int a1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = a1;//数组名是数组元素的首元素的地址
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *p);
	//	p++;
	//}
	int s[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int s1[3][4] = { 1,2,3,4,5,6,7 };
	int s2[3][4] = { {1,2},{3,4},{5,6} };
	char c[3][4];
	int s3[][4] = { {1,2},{3,4},{5,6} };
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", s3[i][j]);
		printf("\n");
	}*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("&s3[%d][%d]=%p\n",i,j, &s3[i][j]);
		
	}
	int* p = &s[0][0];
	for  (int i = 0; i <12; i++)
	{
		printf("%d\n", *p);
		p++;
	}
	int ss[10];
	printf("%p\n", ss);
	printf("%p\n", ss+ 1);
	printf("%p\n", &ss);
	printf("%p\n", &ss+ 1);
	return 0;
}