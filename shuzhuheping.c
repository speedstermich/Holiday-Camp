#include <stdio.h>

void merge (int arr1[], int max1, int arr2[], int max2, int arrtmp[]);

int main(int argc, char const *argv[]) {
	int max1, max2;
	int arr1[100], arr2[100], arrtmp[100];
	int i, j, k, tmp;

	scanf("%d %d", &max1, &max2);
	for ( i = 0; i < max1; i++) {
		scanf("%d", &arr1[i]);
	}

	for (j = 0; j < max2; j++) {
		scanf("%d", &arr2[j]);
	}

	merge (arr1, max1, arr2, max2, arrtmp);
	for (k = 0; k < max1 + max2; k++) {
		printf ("%d ", arrtmp[k]);
	}

	return 0;
}

void merge (int arr1[], int max1, int arr2[], int max2, int arrtmp[])
{
	int i, j, k;
	j = k = 0;
	for(i = 0; i < max1 + max2; )
	{
		if (j < max1 && k < max2)
		{
			if (arr1[j] < arr2[k])
			{
				arrtmp[i] = arr1[j];
				j++;
			}
			else
			{
				arrtmp[i] = arr2[k];
				k++;
			}
			i++;
		}

		else if (j == max1)
		{
			for (; i < max1 + max2;)
			{
				arrtmp[i] = arr2[k];
				k++;
				i++;
			}
		}
		else
		{
			for(; i < max1 + max2;)
			{
				arrtmp[i] = arr1[j];
				j++;
				i++;
			}
		}
	}
}
