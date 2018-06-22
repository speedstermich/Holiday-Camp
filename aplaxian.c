#include <stdio.h>

#define MAX 250

int main(int argc, char const *argv[]) {
	char c, last;
	int i = 0;
	while ((c = getchar()) != '\n')
	{
		if(last != c)
		{
			last = c;
			//i++;
			printf("%c",last);
		}
		else
			continue;
	}
	printf("\n");
	return 0;
}
