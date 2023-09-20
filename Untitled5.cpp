#include <bits/stdc++.h>
using namespace std;
string s, n;
long long t;
void solve ( string s)
{
    string res, s1, s2;
    int l=s.size()/2+1*(s.size()%2!=0);
    s1=s.substr(0,l);
    res=s1;
    s2=s1;
    reverse(s1.begin(), s1.end());
    if ( s.size()%2!=0) res.erase( res.size()-1,1);
    res+=s1;

    if ( res>=n) cout<<res<<'\n';
    else
    {
        int nho=1;
        //s2=612
        s1="";
        for(long long i=s2.size()-1;i>=0;i--)
        {
            int x=s2[i]-48+nho;
            if ( x==10) { x%=10; nho=1;}
            else nho=0;
            s1=char(x+48)+s1;
        }
        res=s1;
        reverse(s1.begin(), s1.end());
        if ( s.size()%2!=0) res.erase( res.size()-1,1);
        res=res+s1;
        cout<<res<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>t;
    while (t--){
        cin>>n;
        solve(n);
    }
}