#include<bits/stdc++.h>
using namespace std;
string s;
long long a,b,c;
long long x[100005],y[100005],ans=1e9;
//x[i] loai ki tu
//y[i] so luong loai ki tu tung phan
int main(){
	 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    freopen("spass.INP","r",stdin);freopen("spass.OUT","w",stdout);
  cin>>s;
  s=" "+s;
  long long d=1;
  if(s[1]>='a' and s[1]<='z'){
  	x[1]=1;
  	y[1]++;
  }
   if(s[1]>='A' and s[1]<='Z'){
   	x[1]=2;
   	y[1]++;
   }
   if(s[1]>='0' and s[1]<='9'){
   	x[1]=3;
   	y[1]++;
   }
  for(long long i=2;i<=s.size();i++){
  	if((x[d]==1 and (s[i]<'a' or s[i]>'z')) or (x[d]==2 and (s[i]<'A' or s[i]>'Z')) or (x[d]==3 and (s[i]<'0' or s[i]>'9'))){
  		d++;
	  	y[d]++;
	  	if(s[i]>='a' and s[i]<='z') x[d]=1;
	  	if(s[i]>='A' and s[i]<='Z')x[d]=2;
	  	 if(s[i]>='0' and s[i]<='9')x[d]=3;
	  }else{
	  	 y[d]++;
	  }
}
for(long long i=3;i<d;i++){
	if(x[i-2]!=x[i-1] and x[i-1]!=x[i] and x[i-2]!=x[i]){
		if(y[i-2]+y[i-1]+y[i]>=6){
			if(y[i-1]<=4){
				ans=6;
			}else{
				ans=min(ans,y[i-1]+2);
			}
		}
	}
}

cout<<ans;
}