#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s,ans;
int main()
{
    freopen("specstr.inp", "r", stdin);freopen("specstr.out", "w", stdout);
    //a 97
    //A 65
    int t;
    cin>>t;
    while(t--){
    cin>>s;
    int a=0,b=0,c=0;
    int n=s.size();
    for(int i=0;i<n;i++) if(s[i]>='a' and s[i]<='z'){a=1;break;}
    for(int i=0;i<n;i++) if(s[i]>='A' and s[i]<='Z'){b=1;break;}
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++) if(s[i]==s[i+1]){c=1;break;}
    if(a==1 and b==1 and c!=1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}}


