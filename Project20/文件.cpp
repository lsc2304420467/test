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
	FILE* pf1 = fopen("E:\\c����\\�½��ı��ĵ�.txt", "w");
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
	//���ļ����Զ��ķ�ʽ����
	//FILE* pf = fopen("test.txt","w");
	////���û�гɹ����ʣ�ֱ�ӽ���
	//if (pf==NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////д�ļ�
	///*fputc('b', pf);
	//fputc('i', pf);*/
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;
	/*fputc('b', stdout);
	fputc('i', stdout);
	fputc('t', stdout);*/
		//���ļ����Զ��ķ�ʽ����
		//FILE* pf = fopen("test.txt", "r");
		////���û�гɹ����ʣ�ֱ�ӽ���
		//if (pf == NULL)
		//{
		//	perror("fopen");
		//	return 1;
		//}
		//���ļ�
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
		//���ļ����Զ��ķ�ʽ����
		//FILE* pf = fopen("test.txt", "w");
		////���û�гɹ����ʣ�ֱ�ӽ���
		//if (pf == NULL)
		//{
		//	perror("fopen");
		//	return 1;
		//}
		////������д
		//fputs("abcdef", pf);
		//fputs("qwertyuiio", pf);
		//fputs("abcdef\n", pf);
		//fputs("qwertyuiio\n", pf);
		////�ر��ļ�
		//fclose(pf);
		//pf = NULL;
		//���ļ������ж��ķ�ʽ����
		//char arr[10] = { 0 };
		//FILE* pf = fopen("test.txt", "r");
		////���û�гɹ����ʣ�ֱ�ӽ���
		//if (pf == NULL)
		//{
		//	perror("fopen");
		//	return 1;
		//}
		////��������
		//fgets(arr, 4, pf);
		//printf("%s\n", arr);//abc
		//fgets(arr, 4, pf);
		//printf("%s\n", arr);//def
		////�ر��ļ�
		//fclose(pf);
		//pf = NULL;
	/*struct S s = { 0};
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	д�ļ�
	fscanf(pf, "%s %d %f", s.arr,&( s.num), &(s.sc));
	��ӡ�ļ�
	printf(" % s % d % f", s.arr, (s.num), s.sc);
	�ر��ļ�
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
	////д�ļ�
	//fwrite(&s, sizeof(struct S), 1, pf);
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;
	//struct S s = { 0 };
	//FILE* pf = fopen("test.txt", "r");
	//if (NULL == pf)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////���ļ�
	//fread(&s, sizeof(struct S), 1, pf);//�Զ�������ʽ��
	//printf("%s %d %f", s.arr, s.num, s.sc);
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;
FILE* pf = fopen("test.txt", "r");
if (pf == NULL)
{
	perror("fopen");
	return 1;
}
//��ȡ�ļ�
int ret = fgetc(pf);
printf("%c\n", ret);
//�ı��ļ�ָ���λ��
fseek(pf, -1, SEEK_CUR);//ָ�뵱ǰλ�ü�1
ret = fgetc(pf);
printf("%c\n", ret);//a
ret = fgetc(pf);
printf("%c\n", ret);//b
//�ҳ��ļ�ָ���λ��
int num = ftell(pf);
printf("%d\n", num);
//�ر��ļ�
fclose(pf);
pf = NULL;
		return 0;
}