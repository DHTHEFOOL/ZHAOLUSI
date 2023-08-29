
#include<bits/stdc++.h>
using namespace std;
const long long modk=1e9+7;
long long tinh(long long a,long long b){
    if(b==0) return 1;
    long long res=tinh(a,b/2)%modk;
    if(b%2){
        return res*res*a;
    } else return res*res;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<tinh(x,y);
}
