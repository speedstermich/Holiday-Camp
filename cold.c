#include <stdio.h>

#define MAX 100
int main(int argc, char const *argv[]) {
	int max, temp, count = 0;
	int i = 0;

	scanf("%d", &max);
	while(i != max)
	{
		scanf("%d", &temp);
		if(temp < 0)
		{
			count++;
		}
		i++;
	}
	printf("%d\n", count);
	return 0;
}
