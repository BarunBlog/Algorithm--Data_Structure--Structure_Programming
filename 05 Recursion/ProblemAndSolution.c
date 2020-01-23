/**
http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
problem 2

Sample input 1:
5
4 6 7 5 1

Sample Output 1:
4 1
6 5
7 7

*/

#include<stdio.h>

void problem(int n, int i, int arr[])
{
	if (n >= i) {
		printf("%d %d\n", arr[i], arr[n]);
		problem(n-1, i + 1, arr);
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

	problem(n - 1,0, arr);
	printf("\n");

	return 0;
}

