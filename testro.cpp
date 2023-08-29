#include<bits/stdc++.h>
using namespace std;
long long n,m,dem1,dem2;
const long long modk=1e9+7;
string s;
long long l[N],r[N];//so luong l,r tinh den vi tri thu i
int main(){
    cin>>n>>m;
    for(long long i=1;i<=m;i++){
        cin>>s[i];
        if(s[i]='L'){dem1++;l[i]=l[i-1]+1;r[i]=r[i-1];}
        else{dem2++;r[i]=r[i-1]+1;l[i]=l[i-1];}
    }
    for(long long i=1;i<=m;i++){
        if(s[i]=='R')
    }
}
