#include <stdio.h>

int main(int argc, char const *argv[]) {
	int limit, speed, times;
	int i, current, last = 0, total = 0;
	while (scanf("%d", &limit))
	{
		if (limit == -1)
			break;
		for(i = 0; i < limit; i++)
		{
			scanf("%d %d", &speed, &times);
			current = times - last;
			total = (current * speed) + total;
			last = times;
		}
		printf("%d miles\n", total);
		total = 0;
		last = 0;
	}
	return 0;
}
