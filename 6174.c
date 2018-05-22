#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int all_same(int num)
{
	char s[8];
	sprintf(s, "%d", num);
	return s[0] == s[1] && s[1] == s[2] && s[2] == s[3];
}
int k_trans(int num)
{
	int i;
	char rising[8], falling[8] = {0};

	sprintf(rising, "%04d", num);
	qsort(rising, 0, 8);
	//sort_str(rising);
	//qsort(rising, size_t __nmemb, size_t __size, __compar_fn_t __compar)
	//qsort(rising, 4, 1, comp ());
	for (i = 0; i < 4; i++) {
		falling[i] = rising[3 - i];
	return atoi(falling) - atoi(rising);
	}
}

/*void sort_str (char rise)
{
	qsort(rise, 0, 8);
}*/
int comp(const char *v1, const char *v2)
{
	return *v1 - *v2;
}

int main(int argc, char const *argv[]) {
	int i, num;

	if(scanf("%d", &num) != 1 || num > 9999 || num < 1000 || all_same(num) )
	{
		puts("-1");
		return 1;
	}
	for (i = 0; num != 6174; i++)
		num = k_trans(num);
	printf("%d\n", i);
	return 0;
}
