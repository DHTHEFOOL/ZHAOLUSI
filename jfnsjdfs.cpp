#include <bits/stdc++.h>
using namespace std;
long long t,n,x,c;
string s[101];
int main(){
    cin>>t>>n;
    while(t--){
        cin>>n;
        for(long long i=1;i<=n;i++){
            cin>>s[i];
            sort(s[i].begin(),s[i].end());
        }
        c=s[1].size();
        for(long long f=1;f<=c;f++){
            for(long long j=0;j<c;j++){
                if(s[j][f]>s[j+1][f]){x++;}  
            }
        }
        if(x==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        }
}
