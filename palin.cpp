#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mv=1e5;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("Palin.inp","r",stdin);
    freopen("Palin.out","w",stdout);
    string x;
    cin>>x;
    int ans;
    ans+=x.size();
    for(int i=0;i<x.size()-1;i++)
    {
    	for(int j=i+1;j<x.size();j++)
    	   {
    	   	string k=x.substr(i,j-i+1);
    	   	string m=k;
    	   	reverse(m.begin(),m.end());
    	   	if(m==k) ans++;
		   }
	}
	cout<<ans;
    
}