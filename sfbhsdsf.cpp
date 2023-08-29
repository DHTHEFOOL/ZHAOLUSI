#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[1000];
vector<long long>mp;
int main(){
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        mp.push_back(a[i]);
    }
    cout<<mp[0];
}
