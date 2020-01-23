///Barun
/// Topological Sort for in-degrees...
#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000],order;
int deg[100000];
int n,m;
void topsort(){

    cout<<"The Original graph is:"<<endl<<endl;
    for(int i=1;i<=n;i++)
    {
        int ab = ceil(n/2.0)+1,j,ck1=0;
        if(i==1)
        {
            if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end())
                cout<<"("<<i<<") --->("<<i+1<<")";
            else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end())
                cout<<"("<<i<<") <---("<<i+1<<")";
            continue;
        }
        else if(i<ab)
        {
            if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end())
                cout<<" --->("<<i+1<<")";
            else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end())
                cout<<" <---("<<i+1<<")";
            continue;
        }
        int arr[n+2]={0};
        if(i==ab)
        {
            cout<<endl<<endl;
            for(int k=1;k<=4;k++)
            {
                if(k>=2)
                    cout<<endl;
                for(j=ab;j<=n;j++)
                {
                    if(find(v[j].begin(),v[j].end(),j-ab+1)!=v[j].end() && ck1==0)
                    {
                        cout<<" ^\t";
                        arr[j]=1;
                    }
                    else if(find(v[j-ab+1].begin(),v[j-ab+1].end(),j)!=v[j-ab+1].end() && ck1==0)
                    {
                        cout<<" |\t";
                        arr[j]=1;
                    }
                    else if(ck1==0){
                        cout<<" \t";
                    }
                    if(k>=2 && k<4)
                    {
                        if(arr[j]==0)
                            cout<<" \t";
                        else
                            cout<<" |\t";
                    }
                    if(k==4)
                    {
                        if(find(v[j].begin(),v[j].end(),j-ab+1)!=v[j].end())
                        {
                            cout<<" |\t";
                        }
                        else if(find(v[j-ab+1].begin(),v[j-ab+1].end(),j)!=v[j-ab+1].end())
                        {
                            cout<<" *\t";
                        }
                        else
                            cout<<" \t";
                    }
                }
                ck1=1;
            }
            cout<<endl<<endl;
            if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end())
                cout<<"("<<i<<") --->("<<i+1<<")";
            else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end())
                cout<<"("<<i<<") <---("<<i+1<<")";
        }
        else if(i>ab)
        {
            if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end())
                cout<<" --->("<<i+1<<")";
            else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end())
                cout<<" <---("<<i+1<<")";
        }
    }




    cout<<endl<<endl;
    queue<int>q;
    cout<<"Initially the number of in-degrees of vertices are:"<<endl<<endl;
    cout<<"\tVertex"<<"\tIn-degree"<<endl;
    for(int i=1;i<=n;i++){
        cout<<"\t  "<<i<<"\t  "<<deg[i]<<endl;
        if(deg[i]==0){
            q.push(i);
        }

    }
    cout<<endl<<endl;

    int c=1;
    while(!q.empty()){

        int x = q.front();

        cout<<"Vertex "<<x<<" has 0 in-degrees so it is added to the output list"<<endl<<endl;
        q.pop();
        order.push_back(x);

        cout<<endl<<endl<<"Output List is : ";

        for(int i=0;i<order.size();i++){
            cout<<order[i]<<" ";
        }
        cout<<endl<<endl<<endl;

        cout<<"The in-degrees of adjacent vertices of "<<x<<" are: ";
        if(v[x].size()==0){
            cout<<"no adjacent vertices"<<endl;
            continue;
        }

        for(int i=0;i<v[x].size();i++){
            int xx = v[x][i];
            cout<<xx<<", ";
            deg[xx]--;
            if(deg[xx]==0) q.push(xx);
        }
        cout<<"decreased by 1"<<endl<<endl<<endl;


        v[x].clear();
        cout<<"Step : "<<c++<<endl<<endl;
        int ck2=0,ck3=0;
            for(int i=1;i<=n;i++)
            {
                int ab = ceil(n/2.0)+1,j,ck1=0;
                if(ck2==0)
                {
                    if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end()){
                        cout<<"("<<i<<") --->("<<i+1<<")";
                        ck2=1;
                    }
                    else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end()){
                        cout<<"("<<i<<") <---("<<i+1<<")";
                        ck2=1;
                    }
                    else
                        cout<<" \t";
                    continue;
                }
                else if(i<ab)
                {
                    if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end())
                        cout<<" --->("<<i+1<<")";
                    else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end())
                        cout<<" <---("<<i+1<<")";
                        continue;
                }
                int arr[n+2]={0};
                if(i==ab)
                {
                    cout<<endl<<endl;
                    for(int k=1;k<=4;k++)
                    {
                        if(k>=2)
                            cout<<endl;
                        for(j=ab;j<=n;j++)
                        {
                            if(find(v[j].begin(),v[j].end(),j-ab+1)!=v[j].end() && ck1==0)
                            {
                                cout<<" ^\t";
                                arr[j]=1;
                            }
                            else if(find(v[j-ab+1].begin(),v[j-ab+1].end(),j)!=v[j-ab+1].end() && ck1==0)
                            {
                                cout<<" |\t";
                                arr[j]=1;
                            }
                            else if(ck1==0){
                                cout<<" \t";
                            }
                            if(k>=2 && k<4)
                            {
                                if(arr[j]==0)
                                    cout<<" \t";
                                else
                                    cout<<" |\t";
                            }
                            if(k==4)
                            {
                                if(find(v[j].begin(),v[j].end(),j-ab+1)!=v[j].end())
                                {
                                    cout<<" |\t";
                                }
                                else if(find(v[j-ab+1].begin(),v[j-ab+1].end(),j)!=v[j-ab+1].end())
                                {
                                    cout<<" *\t";
                                }
                                else
                                    cout<<" \t";
                            }
                        }
                        ck1=1;
                    }
                    cout<<endl<<endl;

                }
                if(ck3==0)
                {
                     if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end()){
                        cout<<"("<<i<<") --->("<<i+1<<")";
                        ck3=1;
                     }
                    else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end()){
                        cout<<"("<<i<<") <---("<<i+1<<")";
                        ck3=1;
                    }
                    else
                        cout<<" \t";
                    continue;
                }
                else if(i>ab)
                {
                    if(find(v[i].begin(),v[i].end(),i+1)!=v[i].end())
                        cout<<" --->("<<i+1<<")";
                    else if(find(v[i+1].begin(),v[i+1].end(),i)!=v[i+1].end())
                        cout<<" <---("<<i+1<<")";
                }
            }

        cout<<endl<<endl;





        cout<<"\tVertex"<<"\tIn-degree"<<endl;
        for(int i=1;i<=n;i++){
            cout<<"\t  "<<i<<"\t  "<<deg[i]<<endl;
        }

    }
    cout<<endl;
}
int main(){
    cout<<"Enter The Node And The Number of Edges"<<endl;
    cin>>n>>m;
    cout<<endl;
    for(int i=1;i<=m;i++){
        cout<<"Enter Path "<<i<<": ";
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        deg[b]++;
    }
    cout<<endl;

    topsort();
    if(order.size()!=n) {
        cout<<"Not A Directed Acyclic Graph"<<endl;
        return 0;
    }
    cout<<endl<<endl<<"So the Topological Sort of vertices is:"<<endl;
    for(int i=0;i<order.size();i++){
        cout<<order[i]<<endl;
    }
    return 0;
}
/**
Sample 1:
6 7

1 2
1 4
2 3
3 6
4 5
5 2
5 6

Sample 2:
7 7

1 2
2 3
2 6
4 3
5 6
7 6
7 3

Sample 3:
9 11

1 2
1 6
2 3
3 4
3 8
5 4
6 7
7 2
7 8
8 9
9 4
*/

