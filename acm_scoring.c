#include <stdio.h>

#define MAX_STRING 20

int main(int argc, char const *argv[]) {
	int team, count = 0;
	char univ[MAX_STRING], name[MAX_STRING];
	int i;
	scanf("%d", &team);
	while(count != team)
	{
		scanf("%s ", univ);
		scanf("%s", name);
		count++;
	}
	//printf("%s\n", univ);
	return 0;
}
