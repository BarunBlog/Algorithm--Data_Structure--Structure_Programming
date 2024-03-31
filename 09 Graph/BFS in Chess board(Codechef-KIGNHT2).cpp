#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int adjacent[101][101];
int board[8][8];



void adjacency()
{
    int k = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            board[i][j] = k++;

        }
    }


    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            int t = board[i][j];

            if(i-2 >= 0){
                if(j-1 >= 0){
                    adjacent[ t ][ board[i-2][j-1] ] = 1;
                    adjacent[ board[i-2][j-1] ][ t ] = 1;
                }

                if(j+1 <= 7){
                    adjacent[ t ][ board[i-2][j+1] ] = 1;
                    adjacent[ board[i-2][j+1] ][ t ] = 1;
                }
            }

            if(i-1 >= 0){
                if(j-2 >= 0){
                    adjacent[ t ][ board[i-1][j-2] ] = 1;
                    adjacent[ board[i-1][j-2] ][ t ] = 1;
                }
                if(j+2 <= 7){
                    adjacent[ t ][ board[i-1][j+2] ] = 1;
                    adjacent[ board[i-1][j+2] ][ t ] = 1;
                }
            }

            if(i+1 <= 7){
                if(j-2 >= 0){
                    adjacent[ t ][ board[i+1][j-2] ] = 1;
                    adjacent[ board[i+1][j-2] ][ t ] = 1;
                }
                if(j+2 <= 7){
                    adjacent[ t ][ board[i+1][j+2] ] = 1;
                    adjacent[ board[i+1][j+2] ][ t ] = 1;
                }
            }

            if(i+2 <= 7){
                if(j-1 >= 0){
                    adjacent[ t ][ board[i+2][j-1] ] = 1;
                    adjacent[ board[i+2][j-1] ][ t ] = 1;
                }

                if(j+1 <= 7){
                    adjacent[ t ][ board[i+2][j+1] ] = 1;
                    adjacent[ board[i+2][j+1] ][ t ] = 1;
                }
            }
        }
    }



}

void enqueue(int a, int *rear, int *queue)
{
    *rear += 1;
    queue[*rear] = a;
}

int dequeue(int *front, int *queue)
{
    *front += 1;
    return queue[*front];
}

int main()
{
    int T;
    cin>>T;

    adjacency();

    while(T--){

        int front=0, rear=0;
        int queue[101] = {0};
        int lavel[101] = {0};
        int visited[101] = {0};

        int x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;

        int source = board[x1-1][y1-1];
        int destination = board[x2-1][y2-1];


        lavel[ source ] = 0;
        enqueue(source, &rear, queue);



        int result;
        int ck = 0;

        while(front!=rear){

            int n = dequeue(&front, queue);

            for (int j = 0; j <= 63; j++) {
                if (adjacent[n][j] == 1 && visited[j] == 0) {
                    enqueue(j, &rear, queue);
                    visited[j] = 1;
                    lavel[j] = lavel[n] + 1;

                    if (j == destination){
                        result = lavel[j];
                        ck=1;
                        break;
                    }
                }
            }
            if(ck==1)
                break;
        }

        if(result % 2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}

