#include<stdio.h>
#include<stdlib.h>

long int fibonacci(int n);
int calls;

int main(void)
{
	int a;
	scanf("%d",&a);
	
	while(a--)
	{
		calls = 0;
		int n;
		scanf("%d",&n);
		printf("fib(%d) = %d calls = %ld\n",n,calls -1 ,fibonacci(n));
	}
		
	return EXIT_SUCCESS;
}

long int fibonacci(int n)
{
	++calls;
	if(n <= 1)
	{
		return n;
	}
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1029
 * */
