#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct student//�����ṹ��
 {
	 char name[20];
	 int ID;
 };
 int sort_by_id(const void* e1, const void* e2)
 {
	 return ((struct student*)e1)->ID - ((struct student*)e2)->ID;
 }
 int sort_by_name(const void* e1, const void* e2)
 {
	return  strcmp(((struct student*)e1)->name, ((struct student*)e2)->name);
 }
int main()
{
	struct student stu[3] = { { "wangwu", 7 }, {"liuyi", 5},{"zhutao", 6} };
	int sz = sizeof(stu) / sizeof(stu[0]);
	qsort(stu, sz, sizeof(stu[0]), sort_by_id);//ͨ��id��С����
	qsort(stu, sz, sizeof(stu[0]), sort_by_name);//ͨ��name ���ַ���С����
	return 0;
} 
