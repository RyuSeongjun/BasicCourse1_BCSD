#include <stdio.h>

void homework_one()
{
	for(;;)
	{
		printf("loop\n");
	}
	while(1)
	{
		printf("loop\n");
	}
}
void homework_two()
{
	int i,num;

	scanf("%d", &num);

	for(i=0;i<num;i++)
	{
		printf("*");
	}
}

void homework_three()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i % 2 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if(i % 2 == 0)
		{
			printf("Fizz\n");
		}
		else if(i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}

void homework_four()
{
	int num[7];
	int i,tmp,j;

	for(i=0;i<7;i++)
	{
		scanf("%d", &num[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(num[i]<num[j])
			{
				tmp = num[i];
				num[i] = num[j]; 
				num[j] = tmp; 
			}
		}
	}
	printf("%d %d\n", num[0], num[6]);
}

void homework_five()
{
	int num, i, count=0, sum=0, mul=1;
	scanf("%d", &num);

	for(i=1;i<=num;i++)
	{
		if(num%i == 0)
		{
			printf("%d ", i);
			++count;
			sum+=i;
			mul*=i;
		}

	}
	printf("\n%d\n", count);
	printf("%d\n", sum);
	printf("%d\n", mul%10);
}


int main()
{
	homework_five();

	return 0;
}