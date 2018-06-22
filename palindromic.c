#include <stdio.h>
#include <string.h>

 #define MAX 100
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

 int main(int argc, char const *argv[]) {
 	char input[MAX];

	scanf("%s", input);
	isPalindrome(input);
 	return 0;
 }
