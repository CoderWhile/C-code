#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strcpy(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++ = *p2++)//当拷贝到p2中的'\0'就停止
//	{
//	}
//
//}
//char* my_strcat(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest && str);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	*dest = *str;
//	return ret;
//}
//int my_strcmp(const char* str1,const char*str2)
//{
//	assert(str1, str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//	
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1, str2);
//	char* p=str1, * s1=str1, * s2=str2;
//	while (*p != '\0')
//	{
//		s1 = p;
//		while (*s1 == *s2 && *s1 != '\0' && s2 != '\0')
//		{
//			s1++; s2++;
//		}
//		if (*s2 == '\0')
//			return p;
//		p++;
//	}
//	return NULL;
//}
int main()
{
	char name[20] = "nihao ";
	char* re=my_strstr(name, "ha");
	if (re == NULL)
	{
		printf("不存在");
	}
	else {
		strncpy(re, "ha", 2);
	}
	puts(re);
	//my_strcpy(name, "bai");
	//int ret=my_strcmp(name, "bai");
	//printf("%s", name);
	//printf("%d", ret);
	return 0;
}