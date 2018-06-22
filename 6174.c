#include <stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
   //++count;
}

void SelectionSort(int arr[], int n)
{
	int i, j, min_idx;
    	for (i = 0; i < n-1; i++)
    	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		{
			//++count;
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&arr[min_idx], &arr[i]);
	}
}
//using namespace std;
int main()
{
		int n,a[4],n1,n2;
		scanf("%d",&n);
		int s=1;

		while(n!=6174)
		{
			a[0]=n%10;
			a[1]=n/10%10;
			a[2]=n/100%10;
			a[3]=n/1000;
			SelectionSort(a,4);
			n1 = 1000*a[3]+100*a[2]+10*a[1]+a[0];
			n2 = 1000*a[0]+100*a[1]+10*a[2]+a[3];
			n = n1-n2;
			s++;
		}
	printf("%d %d",s, n);
}
