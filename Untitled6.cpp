#include<bits/stdc++.h>
using namespace std;
int main(){
	string r;
	cin>>r;
	int t=r.size();
	int c=(int)r[0]-48;
	for(int i=1;i<t;i++){
		c=c*10+((int)r[i]-48);
	}
	cout<<c;
}