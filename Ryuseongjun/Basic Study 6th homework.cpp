/*

1. 

매개변수 : 메소드에서 사용하는 것

인자 : 호출하는 쪽에서 전달하는 것

2. 

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
	int select;

	printf("homework number : ");
	scanf("%d", &select);

	switch(select){
	case 1:
		homework_one();
		break;
	case 2:
		homework_two();
		break;
	case 3:
		homework_three();
		break;
	case 4:
		homework_four();
		break;
	case 5:
		homework_five();
		break;
	default:
		printf("잘못된 번호를 입력하셨습니다.\n");
		break;
	}

	return 0;
}

3. 

int foo(void)
{
  int temp = 20;
  return temp;
}

함수포인터는 함수를 가리키는 포인터이다.

또한 반환값을 &temp를 보낼 경우 보내고자 하는 값인 temp의 값이 아닌

temp의 주소값을 보내게 된다.

4. 

상위 const : '주소값'에 상소성을 부여, 연산이 불가능

하위 const : '타입'에 상소성을 부여, 연산 가능

5. 

int (*pf)(double, char);

*/