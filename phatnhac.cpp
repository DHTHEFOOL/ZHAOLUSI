#include<bits/stdc++.h>
using namespace std;
const long long N=2e5;
long long a[N],n,dem,ans=-1e9,d=1;
map<long long,long long>b;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++){
            cin>>a[i];
    }
    for(long long i=1;i<=n;i++){
            if(b[a[i]]==0){
                b[a[i]]=i;
                dem++;
            }
            else{
                if(b[a[i]]<d){
                    dem++;
                    b[a[i]]=i;
                }
                else{
                    d=b[a[i]]+1;
                    dem=i-d+1;
                    b[a[i]]=i;
                }
            }
            ans=max(dem,ans);
    }
    cout<<ans;
    }
