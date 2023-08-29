#include<bits/stdc++.h>
using namespace std;
long long n,x,ans;
int main(){
    cin>>n>>x;
    for(long long i=1;i<=n;i++){
        if(x%i==0 and x/i<=n) ans+=2;
        else if(x%i==0 and i==x/i and x/i<=n) ans+=1;
    }
    cout<<ans/2;
}
