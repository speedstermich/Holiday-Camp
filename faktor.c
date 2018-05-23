#include <stdio.h>

int main(int argc, char const *argv[]) {
	int article, impact_factor;
	int minimal;
	scanf("%d %d",&article, &impact_factor);
	minimal = article * (impact_factor - 1) + 1;
	printf("%d\n", minimal);
	return 0;
}
