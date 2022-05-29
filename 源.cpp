#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//结构体-自己创造的类型-描述复杂对象  struct
//创建一个结构体类型
//struct Book
//{
//	char name[20];//一直努力
//	short price;//30
//
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构变量
//	struct Book b1 = { "一直努力",30 };
//	//struct Book* pb = &b1;
//	//利用pb打印书名和价格
//	//printf("%s\n", pb->name);//  ->操作符-结构体指针 ->可以找到成员
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);// .操作符-获取到结构体变量 .可以找到成员
//	//printf("%d\n", (*pb).price);
//
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d元\n", b1.price);
//	
//	//b1.price = 15;//price是个变量所以能改，但是name是一个数组名改不了
//	strcpy(b1.name,"学习");//strcpy-字符串拷贝-库函数
//	printf("%s\n", b1.name);
//	//printf("修改后的价格：%d\n", b1.price);
//
//	return 0;
//}


//指针
//int main()
//{

	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%d\n", sizeof(pd));//32位-4  64位-8
//	return 0;
//}


//int main()
//{
//	int a = 10;//4个字节
//	int *p = &a;//  指针名-p，指针类型是-int*  p是一个变量-指针变量
//	//printf("%p\n", p);
//	//printf("%p\n", &a);-结果相同
//	*p = 20;		 *-解引用操作符/间接访问操作符
//	printf("a=%d\n", a);   int*p(整个*证明p是个指针变量) != *p(这个*是解引用操作符)
//
//	//有一种变量是用来存放地址的-指针变量  指针变量用来存放地址，这个地址用   
//	//printf("%p\n", &a);//&a 取a的地址
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