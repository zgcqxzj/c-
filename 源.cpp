#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//�ṹ��-�Լ����������-�������Ӷ���  struct
//����һ���ṹ������
//struct Book
//{
//	char name[20];//һֱŬ��
//	short price;//30
//
//};
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ����
//	struct Book b1 = { "һֱŬ��",30 };
//	//struct Book* pb = &b1;
//	//����pb��ӡ�����ͼ۸�
//	//printf("%s\n", pb->name);//  ->������-�ṹ��ָ�� ->�����ҵ���Ա
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);// .������-��ȡ���ṹ����� .�����ҵ���Ա
//	//printf("%d\n", (*pb).price);
//
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%dԪ\n", b1.price);
//	
//	//b1.price = 15;//price�Ǹ����������ܸģ�����name��һ���������Ĳ���
//	strcpy(b1.name,"ѧϰ");//strcpy-�ַ�������-�⺯��
//	printf("%s\n", b1.name);
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//
//	return 0;
//}


//ָ��
//int main()
//{

	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%d\n", sizeof(pd));//32λ-4  64λ-8
//	return 0;
//}


//int main()
//{
//	int a = 10;//4���ֽ�
//	int *p = &a;//  ָ����-p��ָ��������-int*  p��һ������-ָ�����
//	//printf("%p\n", p);
//	//printf("%p\n", &a);-�����ͬ
//	*p = 20;		 *-�����ò�����/��ӷ��ʲ�����
//	printf("a=%d\n", a);   int*p(����*֤��p�Ǹ�ָ�����) != *p(���*�ǽ����ò�����)
//
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����  ָ�����������ŵ�ַ�������ַ��   
//	//printf("%p\n", &a);//&a ȡa�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));
//	
//	return 0;
//}