#include<bits/stdc++.h>
using namespace std;
int n,a[1000001],ans;
map<int,int>f;
vector<int>t;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("shownice.inp","r",stdin);freopen("shownice.out","w",stdout);
    cin>>n;
      for(int i=1;i<=n;i++)
         {cin>>a[i];f[a[i]]++;}
    sort(a+1,a+1+n);
    a[0]=-1;
    for(int i=1;i<=n;i++)
    if(a[i]!=a[i-1])t.push_back(a[i]);
    for(int i=0;i<t.size();i++){
       if(f[t[i]]>t[i])ans+=(f[t[i]]-t[i]);
       if(f[t[i]]<t[i]) ans+=f[t[i]];
    }
    cout<<ans;
}