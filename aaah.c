#include <stdio.h>
#include <string.h>

#define MAX 1000
int main(int argc, char const *argv[]) {
	char input1[MAX];
	char input2[MAX];
	scanf("%s",input1 );
	scanf("%s",input2 );

	if(strlen(input1) < strlen(input2))
	{
		printf("no\n" );
	}
	else
	{
		printf("go\n");
	}
	//printf("%s",input2 );
	return 0;
}
