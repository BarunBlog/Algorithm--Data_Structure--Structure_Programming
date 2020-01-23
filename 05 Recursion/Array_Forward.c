#include<stdio.h>

void rev(int n, int arr[])
{
	if (n >= 0) {
		rev(n - 1, arr);
		printf("%d ", arr[n]);
	}

}

int main()
{
	int n, i;

	scanf("%d", &n);
	int arr[100];

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	rev(n-1, arr);
	printf("\n");

	return 0;
}

