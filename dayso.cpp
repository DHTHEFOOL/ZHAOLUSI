#include<bits/stdc++.h>
using namespace std;
long long x,y,n,z;
const long long modk=1e9+7;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>x>>y>>n;
     if(n%6==0){
        if(x-y>=0) cout<<(x-y)%modk;
        else cout<<(modk+(x-y)%modk)%modk;
     }
     if(n%6==1){
        if(x>=0) cout<<(x)%modk;
        else cout<<(modk+(x)%modk)%modk;
     }
if(n%6==2){
        if(y>=0) cout<<(y)%modk;
        else cout<<(modk+(y%modk))%modk;
     }
if(n%6==3){
        if(y-x>=0) cout<<(y-x)%modk;
        else cout<<(modk+((y-x)%modk))%modk;
     }
if(n%6==4){
        if(-x>=0) cout<<(-x)%modk;
        else cout<<(modk+(-x%modk))%modk;
     }
if(n%6==5){
        if(-y>=0) cout<<(-y)%modk;
        else cout<<(modk+((-y)%modk))%modk;
     }
}

