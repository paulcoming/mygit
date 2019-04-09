#include <stdio.h>
#include <string.h>
#include <time.h>
#define N 10

int i;
void init(int *array)
{
	srand(time(NULL));
	for(i = 0; i < N; array[i] = rand() % 100, i ++);
}
void print(int *array)
{
	for(i = 0; i < N; printf("%d ", array[i]), i ++);
	printf("\n");
}
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;	
	*a = *b;	
	*b = tmp;
}
void sort(int *array)
{
	int j;
	for(i = 0; i < N - 1; i ++)
		for(j = i + 1; j < N; j ++)
			if(array[i] > array[j])
				swap(array + i, array + j);
}
int main(int argc, char **argv)
{
	int array[N];
	
	init(array);
	print(array);
	sort(array);
	print(array);
	
	return 0;
}
