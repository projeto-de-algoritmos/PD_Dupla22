#include<stdio.h>
#include<stdlib.h>

int fibonacci(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	
	for(int a = 0; a < n;a++ )
		printf("%d%s",fibonacci(a), a+1 == n ? "\n" : " ");
		
	return EXIT_SUCCESS;
}

int fibonacci(int n)
{
	if(n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1151
 * */
