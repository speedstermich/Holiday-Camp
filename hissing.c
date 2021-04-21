#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30
int main(int argc, char const *argv[]) {
	char input[MAX];
	//char check[] = "ss"
	int flag = 0;
	int i;
	scanf("%s", input);
	//gets(input);
	for (i = 0; i < (strlen(input) - 1); i++) {
		if ((input[i] == 's') && (input[i+1] == 's')) {
			flag = 1;
			//printf("hiss\n");
			break;
		}
	}
	if (flag == 1) {
		printf("hiss\n");
	} else {
		printf("no hiss\n");
	}
	return 0;
}
