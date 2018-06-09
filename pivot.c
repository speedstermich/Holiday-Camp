#include <stdio.h>

#define Max 100000

int main(int argc, char const *argv[]) {
	int  number [Max];
	int n;
	int i;

	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
	}
	i = 0;
	while(i < n)
	{
		if (number[i] > number [i + 1])
		{
			return i + 1;
		}
		else
		{
			i++;
		}
		//if
	}
	printf("%d\n",i);
	return 0;
}
