#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long m,p[N],dem=1,x[N];
const long long modk=1e9+7;
long long ans=1,y=1;
vector<long long> vt;
long long tinh(long long a,long long b){
    if(b==0) return 1;
    long long res=tinh(a,b/2);
    if(b%2){
        return res*res%modk*a%modk;
    } else return res*res%modk;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>m;
    for(long long i=1;i<=m;i++){
            cin>>p[i];
            x[p[i]]++;
            if(x[p[i]]==1){vt.push_back(p[i]);}
    }
    for(long long i=0;i<vt.size();i++){
            (dem*=(x[vt[i]]+1))%=(modk-1);

    }
    if(dem%2==0){
    for(long long i=0;i<vt.size();i++){
             (ans *= tinh(vt[i],((dem/2)*x[vt[i]]))) %= modk;
             //cout<<vt[i]<<"^"<<((dem/2)*x[vt[i]])<<"="<<tinh(vt[i],((dem/2)*x[vt[i]]))<<endl;
        }

    } else {
        for(long long i=0;i<vt.size();i++){
              (ans *= tinh(vt[i],dem*(x[vt[i]])/2)) %= modk;
    }
        }
    cout<<ans;
}



