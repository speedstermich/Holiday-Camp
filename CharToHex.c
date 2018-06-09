#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hexadecimalToDecimal(char hexVal[]);
int main()
{
	char character[3];
	int i;

	//for ( i = 0; i < 3;  i++)
	//{
			scanf( "%s", character );
	//}

	printf("0x");
	printf( "%s ", character );

	hexadecimalToDecimal(character);
}

void hexadecimalToDecimal(char hexVal[])
{
	int i;
    	int len = strlen(hexVal);

    // Initializing base value to 1, i.e 16^0
    	int base = 1;

    	int dec_val = 0;

    // Extracting characters as digits from last character
    	for (i = len - 1; i >= 0; i--)
    	{
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value.
        	if ( hexVal[i] >= '0' && hexVal[i] <= '9' )
        	{
            	dec_val += ( hexVal[i] - 48 ) * base;

            // incrementing base by power
            	base = base * 16;
        	}

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        	else if (hexVal[i]>='A' && hexVal[i]<='F')
        	{
            	dec_val += (hexVal[i] - 55)*base;

            	// incrementing base by power
            	base = base*16;
        	}
	}
	printf("%d\n", dec_val );
}
