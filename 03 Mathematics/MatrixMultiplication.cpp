#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int r1,i,a,c1,r2,c2,j,k;

    cin>>r1>>c1;
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"Invalid input! The column of first matrix must be equal to the row of second."<<endl;
        return 0;
    }

    vector<int>myV1[r1];
    vector<int>myV2[r2];


    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a;
            myV1[i].push_back(a);
        }
    }

    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>a;
            myV2[i].push_back(a);
        }
    }

    vector<int>myResult[r1];
    int mul,sum=0;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                mul = myV1[i][k]*myV2[k][j];
                sum+=mul;
            }
            myResult[i].push_back(sum);
            sum=0;
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<myResult[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}

