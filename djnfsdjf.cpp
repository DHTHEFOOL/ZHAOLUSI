#include<bits/stdc++.h>
using namespace std;
string a[101];
long long n;
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		sort(a[i].begin(),a[i].end());
		cout<<a[1][3]<<' ';
	}
}