#include<stdio.h>

void rev(int n, int i, int arr[])
{
	if (i==n) {
		return;
	}
	else{
        printf("%d ",arr[i]);
        rev(n,i+1,arr);
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

	rev(n,0, arr);
	printf("\n");

	return 0;
}

