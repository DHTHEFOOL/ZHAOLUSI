#include<bits/stdc++.h>
using namespace std;
int t,n,e[200002],f[200002],dem;
map<int,int>a;
vector<int> b;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
            dem=0;
            b.clear();
            a.clear();
            memset(f,0,sizeof f);
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>e[i];
                if(a[e[i]]==0) b.push_back(e[i]);
                a[e[i]]++;
    }
    sort(b.begin(),b.end());
    //reverse(b.begin(),b.end());
    if(a[b[0]]%b[0]!=0){dem+=a[b[0]]%b[0];
    f[0]=a[b[0]]/b[0];
    }else f[0]=a[b[0]]/b[0];
    for(int i=1;i<b.size();i++){
        f[i]=f[i-1]+a[b[i]]/b[i];
       if(a[b[i]]%b[i]!=0)
       {dem+=a[b[i]]%b[i];
       if(dem>=b[i]){f[i]+=1;dem-=b[i];}
    }
    }
cout<<f[b.size()-1]<<'\n';
    }
}
