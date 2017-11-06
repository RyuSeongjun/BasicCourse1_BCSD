#include <stdio.h>
void question_one();
void question_two();
void question_three();
void question_four();

int main()
{
	int question_num;

	scanf("%d", &question_num);

	switch(question_num) {
	case 1:
		question_one();
		break;
	case 2:
		question_two();
		break;
	case 3:
		question_three();
		break;
	case 4:
		question_four();
		break;
	default:
		break;
	}
	

	return 0;
}

void question_one()
{
	int num1,num2;

	scanf("%d %d", &num1, &num2);

	if(num1>num2)
	{
		printf(">\n");
	}
	else if(num1==num2)
	{
		printf("=\n");
	}
	else
	{
		printf("<\n");
	}
}

void question_two()
{
	int num;

	if(num==1||num==3||num==5)
	{
		printf("enjoy\n");
	}
	else
	{
		printf("oops\n");
	}
}

void question_three()
{
	int year;

	scanf("%d", &year);

	if((year%4==0 && year%100!=0)||year%400==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}

void question_four()
{
	int m,n;
	
	scanf("%d %d", &m, &n);

	if((m==0||n==0)||(n%m!=0))
	{
		printf("%d !| %d\n", m,n);
	}
	else
	{
		printf("%d | %d\n", m,n);
	}
}