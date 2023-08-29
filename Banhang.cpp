#include<bits/stdc++.h>
using namespace std;
int m,n,t,x,maxn=-1e9;
const int N=1e7;
int a[N],b[N];
int mp[N],ch[N],vt[N];
int ans=0;
int main(){
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        mp[b[i]]++;
        vt[b[i]]++;
        maxn=max(b[i],maxn);
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        x=a[i];
        while(x>0){
            mp[a[i]*(ch[a[i]]+1)]++;
            if(mp[a[i]*(ch[a[i]]+1)]==2){
                    if(vt[a[i]*(ch[a[i]]+1)]==1){ans++;}
                    else {x++;}
            }
             if(mp[a[i]*(ch[a[i]]+1)]>2){x++;}
            if(a[i]*(ch[a[i]]+1)>maxn) break;
           x--;
            ch[a[i]]++;
        }
    }
    cout<<ans;
}
