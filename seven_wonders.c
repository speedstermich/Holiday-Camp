#include <stdio.h>
#include <string.h>

#define MAX_STRING 100
int power(int num[], int pos)
{
	return num[pos] * num[pos];
}

int main(int argc, char const *argv[]) {
	char string[MAX_STRING];
	unsigned int n = -1;
	int i, total = 0;
	int count[3];
	count[0] = 0;
	count[1] = 0;
	count[2] = 0;

	scanf("%s", string);
	for (i = 0; i < strlen(string); i++)
	{
		if(string[i] == 'T')
			++count[0];
		else if(string[i] == 'G')
			++count[1];
		else if(string[i] == 'C')
			++count[2];
	}
	for(i = 0; i < 3; i++)
	{
		if(count[i] < n)
		{
			n = count[i];
		}
		total += power(count, i);

	}

	printf("%d\n", total + n * 7);
	return 0;
}
	/*int character, total = 0, n  = 0;
	int count_T, count_C, count_G;
	count_C = count_G = count_T = 0;
	while((character = getchar()) != '\n')
	{
		if(character == 'T')
			++count_T;
		else if(character == 'C')
			++count_C;
		else if(character == 'G')
			++count_G;
	}*/
	//total = power(count_C) + power(count_G) + power(count_T);

	//find how to make n*7
	/*if(count_C > 0 && count_G > 0 && count_T > 0)
	{
		if(count_C == count_G  && count_ )
		n =
	}*/
	/*else if(count_C == 0 || count_G == 0 || count_T == 0)
	{
		total = power(count_C) + power(count_G) + power(count_T);
	}*/

	//printf("%lf\n", sqrt(9));
