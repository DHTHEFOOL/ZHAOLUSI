#include<bits/stdc++.h>
using namespace std;
string s,a;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     freopen("eraseN.inp", "r", stdin);
    freopen("eraseN.out", "w", stdout);
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' and s[i]<='z') a+=s[i];
    }
    sort(a.begin(),a.end());
    cout<<a;
}
