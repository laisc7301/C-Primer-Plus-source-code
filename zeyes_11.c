# include <stdio.h>
struct student
{
	char number[6];
	char name[6];
	double  score[3];
} stu[2];

void output(struct student stu[2]);

void main()
{
	int i, j;
	for(i=0; i<2; i++)
	{
		printf("������ѧ��%d�ĳɼ���\n", i+1);
		printf("ѧ�ţ�");
		scanf("%s", stu[i].number);
		printf("������");
		scanf("%s", stu[i].name);
		for(j=0; j<3; j++)
		{
			printf("�ɼ� %d.  ", j+1);
			scanf("%lf", &stu[i].score[j]);
		}
		printf("\n");
	}
	output(stu);
}

void output(struct student stu[2])
{
	int i, j;
	printf("ѧ��  ����  �ɼ�1  �ɼ�2  �ɼ�3\n");
    for(i=0; i<2; i++)
	{
		printf("%-6s%-6s", stu[i].number, stu[i].name);
		for(j=0; j<3; j++)
			printf("%-8.2lf", stu[i].score[j]);
		printf("\n");
	}
}
