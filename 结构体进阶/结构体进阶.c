#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>

//struct Stu
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//}s4, s5, s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//
//int main(void)
//{
//	//�����ṹ��ı���
//	struct Stu s1;//�ֲ�����
//	struct Stu s2;
//
//	return 0;
//}


//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main(void)
//{
//	psa = &sa;
//	return 0;
//}


//�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;//4/8
//};
//
//
//int main(void)
//{
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;//4/8
//}Node;
//
//int main(void)
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//struct T
//{
//	double weight;
//	short age;
//};



//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main(void)
//{
//	//struct S s = { 'c', 100, 14, "hello bit" };
//	struct S s = { 'c', { 55.6, 30 }, 100, 14, "hellof bit" };
//
//	printf("%c %lf %d %d %f %s\n", s.c, s.st.weight, s.st.age, s.a, s.d, s.arr);
//
//	return 0;
//}

















//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main(void)
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}






//����Ĭ�϶�����λ4
//#pragma pack(1)//����
//struct S
//{
//	//char c1;//1
//	////7
//	//double d;//8
//	char c1;//1
//	//3
//	double d;//8
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//int main(void)
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}




//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main(void)
//{
//	//offsetof
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};


//void Init(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}


//void Init(struct S* p)
//{
//	p->a = 100;
//	p->c = 'w';
//	p->d = 3.14;
//}
////��ֵ  ���������ڴ�
//void Print1(struct S tmp)
//{
//	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);
//}
////��ֵ
//void Print2(const struct S* ps)
//{
//	printf("%d %c %f\n", ps->a, ps->c, ps->d);
//}

//int main(void)
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;*/
//	return 0;
//}

//
//λ�� - ������λ
//

//Ϊ�˽�ʡ�ռ�
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};


//int main(void)
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main(void)
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//ö��

//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
//	MALE = 4,
//	FEMALE = 5,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED = 9,
//	BLUE = 12,
//	GREEN = 45
//};

//int main(void)
//{
//	//enum Sex s = 2;//int error
//
//	//enum Sex s = MALE;
//	/*enum Color c = BLUE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED, BLUE, GREEN);*/
//
//
//	return 0;
//}


//����-������-������

//union Un
//{
//	char c;//1
//	int i;//4
//};
////5���ֽ�
//
//int main(void)
//{
//	union Un u;//c��i����ͬʱʹ�� ֻ��ʹ��һ��
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.c);
//
//	return 0;
//}


















//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}


//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;//
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main(void)
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//�͵�ַ--------------------�ߵ�ַ
//	//....[][1][1][2][2][3][3][4][4][][].... ����ֽ���洢ģʽ
//	//....[][4][4][3][3][2][2][1][1][][].... С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ���ֽ�˳��
//	//��С���ֽ�������
//	//
//	//
//	//
//	return 0;
//}



//enum Sex
//{
//	MALE,
//	FEMALE,
//	SRCRET
//};
//
//int main(void)
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//union Un
//{
//	//                       ������
//	int a;//4         8        4
//	char arr[5];//5 1 8        1
//	//����������������������
//};
//
//int main(void)
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}