#include <stdio.h>
#include <string.h>

#define MAX 1000
#define pattern "simon says"
#define pattern1 "Simon says"

int main(int argc, char const *argv[]) {
	int count;
	char input[MAX];

	scanf("%d", &count);
	while(count-- > 0)
	{
		scanf(" %[^\n]", input);
		if( (strncmp(input, pattern, 10)) == 0  || (strncmp(input, pattern1, 10)) == 0 )
			printf("%s\n", input + 11 );
		//else
			//printf("\n");
	}
	return 0;
}
