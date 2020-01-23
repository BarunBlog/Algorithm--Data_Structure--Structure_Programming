#include<stdio.h>

void rev(int n, int arr[])
{
	if (n == 0) {
		printf("%d\n", arr[n]);
	}
	else {

		printf("%d ", arr[n]);
		rev(n - 1, arr);
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

	return 0;
}

