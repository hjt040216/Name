#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int Add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	int result;
//	result = Add(3, 4);
//	printf("�������1: %d \n", result);
//	result = Add(5, 8);
//	printf("�������2: %d \n", result);
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//void ShowAddResult(int num)
//{
//	printf("������� ���: %d \n", num);
//}
//
//int ReadNum(void)
//{
//	int num;
//	scanf_s("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void)
//{
//	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
//	printf("��! �׷� �ΰ��� ������ �Է��ϼ���. \n");
//}
//
//int main(void)
//{
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//	return 0;
//}

//#include <stdio.h>
//#define LEN 20
//
//int main(void)
//{
//	const int len = 20;
//	int arr[len];
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	int sum = 0, i;
//
//	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//
//	for (i = 0; i < 5; i++)
//		sum += arr[i];
//
//	printf("�迭��ҿ� ����� ���� �� %d \n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "Good morning!";
//	printf("�迭 str�� ũ��: %d \n", sizeof(str));
//	printf("�� ���� ������ ���: %c \n", str[13]);
//	printf("�� ���� ������ ���: %d \n", str[13]);
//
//	str[12] = '?';
//	printf("���ڿ� ���: %s \n", str);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[50];
//	int idx = 0;
//
//	printf("���ڿ� �Է�: ");
//	scanf_s("%s", str,50);
//	printf("�Է� ���� ���ڿ�: %s \n", str);
//
//	printf("���� ���� ���: ");
//	while (str[idx] != '\0')
//	{
//		printf("%c", str[idx]);
//		idx++;
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//
//	pnum = &num1;
//	(*pnum) += 30;
//
//	pnum = &num2;
//	(*pnum) -= 30;
//
//	printf("num1:%d, num2:%d \n", num1, num2);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	int* ptr1 = &num;
//	int* ptr2 = ptr1;
//
//	(*ptr1)++;
//	(*ptr2)++;
//	printf("%d \n", num);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	int* ptr3;
//
//	(*ptr1) += 10;
//	(*ptr2) -= 10;
//
//	ptr3 = ptr1;
//	ptr1 = ptr2;
//	ptr2 = ptr3;
//
//	printf("ptr1 : %d, ptr2 : %d \n", ptr1, ptr2);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "Good morning!";
//	printf("�迭 str�� ũ��: %d \n", sizeof(str));
//	printf("�� ���� ������ ��� : %c \n", str[13]);
//	printf("�� ���� ������ ��� : %d \n", str[13]);
//
//	str[12] = '?';
//	printf("���ڿ� Ǯ��: %s \n", str);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[100];
//	int len = 0;
//
//	scanf("%s", str);
//
//	while (str[len] != 0)
//		len += 1;
//
//	printf("���ܾ� ���� : %d \n", len);
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%d %d \n", ptr1 + 1, ptr1 + 2);
	printf("%d %d \n", ptr2 + 1, ptr2 + 2);

	printf("%d %d \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%d %d \n", ptr1, ptr2);
	return 0;
}