#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char arr[10];
	int num;
	float sc;
};
int main()
{
	/*FILE* pf = fopen("test.txt","w");
	FILE* pf1 = fopen("E:\\c代码\\新建文本文档.txt", "w");
	if (pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	if (pf1 == NULL)
	{
		perror("fopen");
		return 1;
	}
	fclose(pf);
	fclose(pf1);
	pf = NULL;
	pf1= NULL;*/
	//打开文件，以读的方式访问
	//FILE* pf = fopen("test.txt","w");
	////如果没有成功访问，直接结束
	//if (pf==NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////写文件
	///*fputc('b', pf);
	//fputc('i', pf);*/
	////关闭文件
	//fclose(pf);
	//pf = NULL;
	/*fputc('b', stdout);
	fputc('i', stdout);
	fputc('t', stdout);*/
		//打开文件，以读的方式访问
		//FILE* pf = fopen("test.txt", "r");
		////如果没有成功访问，直接结束
		//if (pf == NULL)
		//{
		//	perror("fopen");
		//	return 1;
		//}
		//读文件
		/*int ret=fgetc( pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);
		ret = fgetc(pf);
		printf("%c\n", ret);*/
		/*int ret = fgetc(stdin);
		printf("%c\n", ret);
		ret = fgetc(stdin);
		printf("%c\n", ret);
		 ret = fgetc(stdin);
		printf("%c\n", ret);*/
		//打开文件，以读的方式访问
		//FILE* pf = fopen("test.txt", "w");
		////如果没有成功访问，直接结束
		//if (pf == NULL)
		//{
		//	perror("fopen");
		//	return 1;
		//}
		////按行来写
		//fputs("abcdef", pf);
		//fputs("qwertyuiio", pf);
		//fputs("abcdef\n", pf);
		//fputs("qwertyuiio\n", pf);
		////关闭文件
		//fclose(pf);
		//pf = NULL;
		//打开文件，以行读的方式访问
		//char arr[10] = { 0 };
		//FILE* pf = fopen("test.txt", "r");
		////如果没有成功访问，直接结束
		//if (pf == NULL)
		//{
		//	perror("fopen");
		//	return 1;
		//}
		////按行来读
		//fgets(arr, 4, pf);
		//printf("%s\n", arr);//abc
		//fgets(arr, 4, pf);
		//printf("%s\n", arr);//def
		////关闭文件
		//fclose(pf);
		//pf = NULL;
	/*struct S s = { 0};
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	写文件
	fscanf(pf, "%s %d %f", s.arr,&( s.num), &(s.sc));
	打印文件
	printf(" % s % d % f", s.arr, (s.num), s.sc);
	关闭文件
	fclose(pf);
	pf = NULL;
	*/
	//struct S s = { "abcdef",10,5.5f};
	//FILE* pf = fopen("test.txt", "w");
	//if (NULL == pf)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////写文件
	//fwrite(&s, sizeof(struct S), 1, pf);
	////关闭文件
	//fclose(pf);
	//pf = NULL;
	//struct S s = { 0 };
	//FILE* pf = fopen("test.txt", "r");
	//if (NULL == pf)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////读文件
	//fread(&s, sizeof(struct S), 1, pf);//以二进制形式读
	//printf("%s %d %f", s.arr, s.num, s.sc);
	////关闭文件
	//fclose(pf);
	//pf = NULL;
FILE* pf = fopen("test.txt", "r");
if (pf == NULL)
{
	perror("fopen");
	return 1;
}
//读取文件
int ret = fgetc(pf);
printf("%c\n", ret);
//改变文件指针的位置
fseek(pf, -1, SEEK_CUR);//指针当前位置减1
ret = fgetc(pf);
printf("%c\n", ret);//a
ret = fgetc(pf);
printf("%c\n", ret);//b
//找出文件指针的位置
int num = ftell(pf);
printf("%d\n", num);
//关闭文件
fclose(pf);
pf = NULL;
		return 0;
}