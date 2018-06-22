#include <stdio.h>
#include <math.h>

#define Pi 3.14159265
int main(int argc, char const *argv[]) {
	int high, angle;
	double rad;
	long int length;
	scanf("%d %d", &high, &angle);
	rad = angle * (Pi / 180.0);
	length = high / sin(rad);

	printf("%ld\n", length + 1);
	return 0;
}
