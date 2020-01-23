#include<iostream>

using namespace std;

int front, rear;
int queue[1000];

void enqueue(int a) {
	queue[rear++] = a;
}

int dequeue() {
	return queue[front++];
}

int main()
{

	int node, edge, sourse, destination, i, j;
	cin >> node >> edge;

	int arr[500][500] = {0};
	int lavel[1000] = { 0 };
	int parent[1000] = { 0 };
	int visited[1000] = { 0 };
	int a, b;

	for (i = 0; i < edge; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	cin >> sourse >> destination;

	lavel[sourse] = 0;
	visited[sourse] = 1;
	enqueue(sourse);

	while(front!=rear){

		int n = dequeue();
		for (j = 1; j <= node; j++) {
			if (arr[n][j] == 1 && visited[j] == 0) {
				enqueue(j);
				visited[j] = 1;
				lavel[j] = lavel[n] + 1;
				parent[j] = n;
			}
		}
	}

	int x = destination, path[1000], length = 0;
	i = 0;
	while (x != sourse) {
		path[i++] = x;
		x = parent[x];
		length++;
	}

	cout << "Length is: " << length << endl << "Path is: " << endl<<sourse;
	for (j = i-1; j >= 0; j--) {
		cout << " "<<path[j];
	}
	cout << endl;




	return 0;
}

/**
Sample Input:
8 11
1 2
1 3
1 4
2 5
2 4
3 6
4 7
4 8
4 6
5 7
7 8
1 8

Sample Output:
Length is: 2
Path is:
1 4 8
*/

