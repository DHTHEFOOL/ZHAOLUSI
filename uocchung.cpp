    #include<bits/stdc++.h>
    using namespace std;
    const int N=1e6;
    int n,a[200005],t[N],dem,ans=1;
    int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            t[a[i]]++;
        }
        for(int i=2;i<=N;i++){
           for(int j=i;j<=N;j+=i){
                        if(t[j]>=1){
                                dem+=t[j];
                        if(dem>=2){ans=max(ans,i);dem=0;break;}
                        }
           }
            dem=0;
        }

        cout<<ans;
    }
