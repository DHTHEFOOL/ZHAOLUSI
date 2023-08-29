#include<bits/stdc++.h>
using namespace std;
long long t,dema,demb;
string s;
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("capab2.inp", "r", stdin); freopen("capab2.out", "w", stdout);
    cin>>s;
    long long x=s.size();
    for(long long i=0;i<x;i++){
        if(s[i]=='A') dema++;
         if(s[i]=='B')demb++;
    }
    cout<<dema*(x-dema-demb)+demb*(x-dema-demb);
}
