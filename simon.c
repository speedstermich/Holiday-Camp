#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	int count;
	int i = 0, j;
	int get;
	char  input[100];
	char compare[] = "Simon says";

	scanf("%d ", &count);
	while (count--)
	{
		get = getchar();
		input[i] = get;
		i++;
		for (i = 0; i < 10; i++)
		{
			for(j = 0; j < strlen(compare); j++)
			if(input[i] == compare[j])
			{
				for(i = 11; i < strlen(input); i++)
					printf("%c", input[i]);
			}
		}
		printf("\n");
		//std::cout << '\n';
		//count--;
	}
	return 0;
};
