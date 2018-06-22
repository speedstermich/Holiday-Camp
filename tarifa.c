#include <stdio.h>

int main(int argc, char const *argv[]) {
	int data, months, next, total = 0, next_data;
	int i;
	scanf("%d",  &data);

	scanf("%d", &months);
	for (i = 0; i < months; i++)
	{
		scanf("%d", &next);
		next = data - next;
		total  += next;
	}
	next_data = total + data;
	printf("%d\n", next_data);
	return 0;
}
