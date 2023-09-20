#include<bits/stdc++.h>
using namespace std;
const int p=-1000000000;
int n,m,d,dp[2005][2005][15][2];
string s, t;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	
    cin>>n>>m>>d;
    cin>>s>>t;
    s="+"+s+">";t="-"+t+"<";
    
   //kh?i t?o
    for(int i=0;i<=n;i++)
       for(int j=0;j<=m;j++)
          for(int k=0;k<=d;k++)
             for(int x=0;x<=1;x++)
              dp[i][j][k][x]=p;
    dp[0][0][0][0]=0;
    
    //main
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            for(int k=0;k<=d;k++)
                for(int x=0;x<=1;x++)
                {
                	if(s[i+1]==t[j+1])
                	{
                		if(x==1)  
                		{
                		   dp[i+1][j+1][k][x]=max(dp[i+1][j+1][k][x],dp[i][j][k][x]+1);
                		}
                		dp[i+1][j+1][k+1][1]=max(dp[i+1][j+1][k+1][1],dp[i][j][k][x]+1);
                	}
                	dp[i+1][j][k][0]=max(dp[i+1][j][k][0],dp[i][j][k][x]);
                	dp[i][j+1][k][0]=max(dp[i][j+1][k][0],dp[i][j][k][x]);
               }
    //ket qua
    int ans=max(dp[n][m][d][0],dp[n][m][d][1]);
    if(ans<0) cout<<-1<<'\n';
    else cout<<ans<<'\n';
        
 
}