#include<bits/stdc++.h>
using namespace std;
long long t,dema,demb,ans;
string s;
map<char,long long> mp;
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      freopen("cutstring.inp", "r", stdin); freopen("cutstring.out", "w", stdout);
        cin>>s;
        long long x=s.size();
        for(long long i=0;i<=x;i++){
            mp[s[i]]++;
            dema++;
            if(mp[s[i]]==2){
                ans++;
                mp.clear();
                 mp[s[i]]++;
                dema=0;
               // cout<<1<<endl;
            }

        }
        if(dema!=0)ans++;
        cout<<ans;
}
