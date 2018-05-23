#include <stdio.h>
#include <math.h>

int power(int coef)
{
	return coef * coef;
}

int main(int argc, char const *argv[]) {
	int character, total = 0, n  = 0;
	int count_T, count_C, count_G;
	count_C = count_G = count_T = 0;
	while((character = getchar()) != '\n')
	{
		if(character == 'T')
			++count_T;
		else if(character == 'C')
			++count_C;
		else if(character == 'G')
			++count_G;
	}
	total = power(count_C) + power(count_G) + power(count_T);

	//find how to make n*7
	/*if(count_C > 0 && count_G > 0 && count_T > 0)
	{
		if(count_C == count_G  && count_ )
		n =
	}*/
	/*else if(count_C == 0 || count_G == 0 || count_T == 0)
	{
		total = power(count_C) + power(count_G) + power(count_T);
	}*/

	//printf("%lf\n", sqrt(9));
	return 0;
}
