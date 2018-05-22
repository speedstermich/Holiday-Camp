#include <stdio.h>

//#define MAXPEOPLE 1000
double average_checker(int number);
int main(int argc, char const *argv[]) {
	int line, people;
	scanf ("%d",&line);
	while (line--)
	{
		scanf("%d", &people);
		printf("%.3f%%\n", average_checker(people));
	}
	return 0;
}

double average_checker(int number)
{
	double average = 0;
	int arr [number], i;
	for (i = 0; i < number; i++)
	{
		scanf("%d", &arr[i]);
		average += arr[i];
	}
	average /= number;
	double counter = 0;
	for (i = 0; i <  number; i++)
	{
		if (arr[i] > average)
			counter++;
	}
	return (counter / number) * 100;
}
