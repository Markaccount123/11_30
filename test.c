#define _CRT_SECURE_NO_WARNINGS 1
//��ת�ַ���
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//��������ַ���Ӧ����������޸�������������Ϊ�����ַ������ǾͲ����޸ģ��ǲ��Ե�
#include<string.h>
#include<assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		����תһ���ַ�
//		1.�Ȱѵ�һ���ַ��ó�������һ����ʱ��������
//		char tmp = *arr;
//		2.�Ѻ����Ԫ�ض���ǰ�ƶ�,����������Ҫ֪���ַ����ĳ���
//		int j = 0;
//		for (j = 0; j <len-1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		3.
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//
////������ת��
////abcdef
////ba fedc ���������ַ����ֱ�����
////����������
//
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//��ת���
//	reverse(arr+k,arr+len-1);//��ת�ұ�
//	reverse(arr,arr+len-1);//������ת
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}




//�ַ�����ת���
//
//��ҵ����
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

//s1��תһ�º�s2�Ƚ�һ�£���ת�õ����ַ����������s1�ĳ�����ô����
                             //�������ﻹ��һ�ֽⷨ���Ǹ�s1����׷��һ��һ�����ַ�����Ȼ��һ��s2�Ƿ�s1��������ַ���
//void left_move(char* s1, int k)
//{
//	assert(s1 != NULL);
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1.�Ȱѵ�һ���ַ��ó�������һ����ʱ��������
//		char tmp = *s1;
//		//2.�Ѻ����Ԫ�ض���ǰ�ƶ�,����������Ҫ֪���ַ����ĳ���
//		int j = 0;
//		for (j = 0; j <len - 1; j++)
//		{
//			*(s1 + j) = *(s1 + j + 1);
//		}
//		//3.
//		*(s1 + len - 1) = tmp;
//	}
//}
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	int len = strlen(s1); 
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "cdefab";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//arr1��"abcdefabcdef\0"
//arr2:"cdefab\0"
//��һ��arr2�Ƿ���arr1���Ӵ�

#include<string.h>
#include<stdio.h>
int main()
{
	char s1[] = "abcdef";
	char s2[] = "cdefab";
	int ret = is_left_move(s1, s2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}