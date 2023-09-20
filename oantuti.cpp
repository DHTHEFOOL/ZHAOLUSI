#include<bits/stdc++.h>
	using namespace std;
	int n, k, a[100002], f[100002][22][4], ans, m = 1;
	char x; 
	int main()
	{
		ios::sync_with_stdio(0);
		cin.tie(0);cout.tie(0);
		cin >> n >> k;
	while(n--){
		cin>>x;
		if(x=='P') a[m]=1;
		if(x=='R') a[m]=2;
		if(x=='S') a[m]=3;
		m++;
	}
		k++;
		for(int i = 1; i <= m - 1; i++)
		{
			for(int j = 1; j <=  k; j++)
			{
				f[i][j][1] = max({f[i-1][j][1],f[i-1][j-1][2], f[i-1][j-1][3]}) + (a[i] == 1);
				f[i][j][2] = max({f[i-1][j][2],f[i-1][j-1][1], f[i-1][j-1][3]}) + (a[i] == 2);
				f[i][j][3] = max({f[i-1][j][3],f[i-1][j-1][2], f[i-1][j-1][1]}) + (a[i] == 3);
	
			}
		}
		ans = max({f[m-1][k][1], f[m-1][k][2], f[m-1][k][3]});
		cout << ans;
	}