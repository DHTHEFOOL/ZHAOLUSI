#include<bits/stdc++.h>
using namespace std;
int n,a[1000001],ans=-1,dem;
map<int,int>mp;
int so[1000001];
map<int,int>f;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);// 1 2 3 3 3 3 3
          freopen("twovals.inp","r",stdin);freopen("twovals.out","w",stdout);
    cin>>n;
    int st=1;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++){
        mp[a[i]]++;
        if(mp[a[i]]==1)dem++;
        while(dem>=3) {
          if(mp[a[st]]==1){
               dem--;
           }
           mp[a[st]]--;
           st++;
        }
        if(dem==2)ans=max(ans,i-st+1);
    }
    cout<<ans;
}
    
     