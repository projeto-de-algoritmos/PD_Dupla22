#include<stdio.h>
#include<stdlib.h>

long long int *fibonacci_array(void );

int main(void)
{
	int n;
	scanf("%d",&n);
	long long int *array = fibonacci_array();
	
	while(n--)
	{
		int tmp;
		scanf("%d",&tmp);
		printf("Fib(%d) = %lld\n",tmp,array[tmp]);
	}
	
	free(array);	
	return EXIT_SUCCESS;
}

long long int *fibonacci_array(void)
{
	long long int *array = (long long int *)malloc(61 * sizeof(long long int));
	array[0] = 0;
	array[1] = 1;
	
	for(int a = 2; a < 61;a++)
		array[a] = array[a-1] + array[a-2];
	
	return array;
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1176
 * */
