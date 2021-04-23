#include<bits/stdc++.h>
using namespace std;


void getLps(string pat, int m, int* lps)
{
    int len=0, i=1;
    lps[0] = 0;
    while(i<m){
        if(pat[len]==pat[i]){
            len++;
            lps[i] = len;
            i++;
        }
        if(pat[len] != pat[i]){

            if(len>0)
                len = lps[len-1];
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

}

void kmpSearch(string text, string pat, int n, int m, int* lps)
{
    int i=0,j=0, ck=0;
    while(i!=n){
        if(pat[j]==text[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"Pattern matched at index "<<i-j<<endl;
            ck=1;
            break;
        }
        else if(pat[j]!=text[i]){
            if(j!=0)
                j = lps[j-1];
            else
                i++;

        }
    }
    if(ck==0){
        cout<<"Pattern not found"<<endl;
    }

}

int main()
{
    int i,j, n,m;
    string text, pat;

    cin>>text>>pat;

    n = text.size();
    m = pat.size();

    int lps[m];

    getLps(pat, m, lps);
    kmpSearch(text, pat, n, m, lps);

}



