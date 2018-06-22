#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    while((scanf("%d", &num)) == 1)
    	printf("%d\n", num < 2 ? num : 2 * (num - 1));
return 0;
}
