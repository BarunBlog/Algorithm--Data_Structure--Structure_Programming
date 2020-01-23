/* print first nth polynomial series
http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html


Sample Input:
5
Sample Output:
1 + x + x^2 + x^3 + x^4

*/
#include<iostream>

using namespace std;

void polinomial_series(int n, int i) {
	if (i == n-1) {
		printf(" + x^%d\n", i);
	}
	else {
		if (i == 0)
			printf("1");
		else if (i == 1)
			printf(" + x");
		else
			printf(" + x^%d", i);
		polinomial_series(n, i+1);
	}
}

int main()
{
	int n;
	cin >> n;

	polinomial_series(n,0);


	return 0;
}
