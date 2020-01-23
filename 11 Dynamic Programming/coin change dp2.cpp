#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[105], t, tk[100005], in, c, cc, mn, dp[100005];
    int i, n, j;
    cin >> n;
    cin >> c;

    memset(coin, 0, sizeof coin);
    memset(dp, 0, sizeof dp);
    for(i=0; i<c; i++)
    {
        cin >> coin[i];
    }
    sort(coin, coin+i);
    for(i=1; i<=n; i++)
    {
        int flg = 0;
        in = 0;
        for(j=0; j<c; j++)
        {
            if(coin[j] <= i)
            {
                if(!flg)
                {
                    mn = dp[i-coin[j]]+1;
                    in = coin[j];
                    flg = 1;
                }
                t  = dp[i-coin[j]]+1;
                if(t < mn)
                {
                    mn = t;
                    in = coin[j];
                }
            }
            else
            {
                break;
            }
        }
        if(!flg)
        {
            dp[i] = dp[i-1]+1;
            tk[i] = tk[i-1];
        }
        else
        {
            dp[i] = mn;
            tk[i] = in;
        }
    }
    t = n;
    int cnt = 0;
    i = n;
    while(t != 0)
    {
        dp[i] -= tk[i];
        t -= tk[i];
        i = i - tk[i];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

