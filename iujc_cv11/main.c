#include <stdlib.h>
#include <stdio.h>


int compare(const void *arg1, const void *arg2);

int main(int argc, char *argv[]){

	int n = 10, *pole;

	char pomStr[3];
	pole = calloc(n, sizeof(int));
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{
		pole[i] = rand() % 100;
	}
	qsort(pole, n, sizeof(int), compare);

	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", pole[i]);
	}

	system("pause");
	
	return 0;
}

int compare(const void *arg1, const void *arg2){
	int a1 = *((int*)arg1);
	int a2 = *((int*)arg2);
	return a1 - a2;
}
