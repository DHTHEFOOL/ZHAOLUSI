#include<bits/stdc++.h>
using namespace std;
long long a[500005],n,dem1=1,ans;
int main(){
		ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
   freopen("cntseq2.Inp","r",stdin);freopen("cntseq2.Out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
			cin>>a[i];
			}
			for(int i=2;i<=n;i++){
				if(a[i]==a[i-1]){
					dem1++;
				}
				else{
					ans+=(i-dem1-1)*dem1;
					dem1=1;
				}	
			}
				ans+=(n-dem1)*dem1;
			cout<<ans;
}