#include <stdio.h>

//#define MAX 100

int main(int argc, char const *argv[]) {
	int num, array;
	double  total;
	int i, counter = 0;
	total = 0.0;

	scanf ("%d", &num);
	for(i = 0; i < num; i++)
	{
		scanf("%d", &array);
		if(array < 0)
			continue;
		counter++;
		total += array;
	}
	printf("%.10f\n", total / counter );
	return 0;
}
