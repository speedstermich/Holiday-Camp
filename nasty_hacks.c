#include <stdio.h>

int main(int argc, char const *argv[]) {
	int cases, revenue, expect, cost;

	scanf("%d", &cases );

	while(cases--)
	{
		scanf("%d %d %d", &revenue, &expect, &cost);
		if (expect > revenue + cost)
			printf("advertise\n");
		else if(expect == revenue + cost)
			printf("does not matter\n");
		else if(expect < revenue + cost)
			printf("do not advertise\n");
	}
	return 0;
}
