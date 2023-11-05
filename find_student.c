#include <stdio.h>
struct student
{
	int number;
	char name[20];
	double grade;
};

struct student list[] = {
	{20191322, "홍길동", 4.16},
	{20120002, "폰은정", 4.0},
	{20120003, "엄준식", 4.5},
};

int main(void)
{
	struct student super_stu;
	int i, size;

	size = sizeof(list) / sizeof(list[0]);
	super_stu = list[0];

	for (i = 1; i < size; i++) {
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	}
	printf("평점이 가장 높은 학생은 (이름%s, 학번%d, 평점%f)입니다.\n",
		super_stu.name, super_stu.number, super_stu.grade);
}