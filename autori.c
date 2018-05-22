#include <stdio.h>
#include <ctype.h>
#define MAXWORD  100
int main(int argc, char const *argv[]) {
	char word[100];
	int c;
	int i, j;
	i = 0;
	c = 0;
	while((c = getchar()) != '\n' )
	{
		if(isupper(c))
			printf("%c", (char) c);
	}
	printf("\n");
	return 0;
}
