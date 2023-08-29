#include<bits/stdc++.h>
using namespace std;
int dp[505][505], x, y;
const int N=505;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>x>>y;
    int t=0;
    dp[1][1]=0;
    dp[0][0]=0;
    //dp[1][2]=1;
   // dp[2][1]=1;
    for(int i=1; i<=x; i++) dp[i][1]=i-1;
    for(int j=1; j<=y; j++) dp[1][j]=j-1;
    for(int i=2; i<=x; i++)
        for(int j=2; j<=y; j++)
    {
        if(i==j) dp[i][j]=1;
        else
        {
            if(i>j) dp[i][j]=dp[j][i];
            else
            {
                if(j%i==0) dp[i][j]=j/i;
                else
                {
                    dp[i][j]=N;
                    for(int a=1; a<=j/2; a++)
                       // cout<< dp[i][a]+ dp[i][i-a];
                        dp[i][j]=min(dp[i][j], dp[i][a]+ dp[i][j-a]);
                    for(int t=1; t<=i/2; t++)
                        dp[i][j]=min(dp[i][j], dp[t][j]+ dp[i-t][j]);
                }
            }
        }
    }
    cout<<dp[x][y];

}
