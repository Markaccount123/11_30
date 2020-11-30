#define _CRT_SECURE_NO_WARNINGS 1
//旋转字符串
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//首先你的字符串应该满足可以修改这个条件，如果为常量字符串，那就不能修改，是不对的
#include<string.h>
#include<assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		左旋转一个字符
//		1.先把第一个字符拿出来放在一个临时变量里面
//		char tmp = *arr;
//		2.把后面的元素都向前移动,所以这里需要知道字符串的长度
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
////三步翻转法
////abcdef
////ba fedc 把这两个字符串分别逆序
////在整体逆序
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
//	reverse(arr,arr+k-1);//逆转左边
//	reverse(arr+k,arr+len-1);//逆转右边
//	reverse(arr,arr+len-1);//整体逆转
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}




//字符串旋转结果
//
//作业内容
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

//s1旋转一下和s2比较一下，旋转得到的字符串结果就是s1的长度那么多种
                             //☆☆☆这里还有一种解法就是给s1后面追加一个一样的字符串，然后看一下s2是否s1里面的子字符串
//void left_move(char* s1, int k)
//{
//	assert(s1 != NULL);
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		//1.先把第一个字符拿出来放在一个临时变量里面
//		char tmp = *s1;
//		//2.把后面的元素都向前移动,所以这里需要知道字符串的长度
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

//arr1："abcdefabcdef\0"
//arr2:"cdefab\0"
//看一下arr2是否是arr1的子串

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