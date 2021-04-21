#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	int number, width, lenght, user;
	int max_size;

	scanf("%d %d %d", &number, &width, &lenght);
	max_size = sqrt((width*width)+(lenght*lenght));
	//printf("%d", max_size);
	//std::cout << max_size << '\n';
	while(number--)
	{
		//std::cin >> user;
		scanf("%d", &user);
		if ((user > width) && (user > lenght)) {
			if (user > max_size) {
				printf("NE\n");
			} else {
				printf("DA\n");
			}
		}
		else {
			printf("DA\n");
		}
		//number--;
	}
	return 0;
}
