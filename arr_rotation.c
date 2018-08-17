#include <stdio.h>

#define MAX 1000
int main(int argc, char const *argv[]) {
	int maximum,rotation, arr[MAX];
	int i;

	scanf("%d %d", &maximum, &rotation);
	for (i = 0; i < maximum; i++) {
		scanf("%d", &arr[i]);
	}
	return 0;
}
