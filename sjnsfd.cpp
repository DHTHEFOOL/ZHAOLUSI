#include<bits/stdc++.h>
using namespace std;
long long m,n,k,i,j,t,d,x;
long long f[1005][1005];
void tomaudo(long long a,long long b){
    if(f[a][b]==2) f[a][b]=0;
    else f[a][b]=1;
}
void tomauxanh(long long a,long long b){
    if(f[a][b]==1) f[a][b]=0;
    else f[a][b]=2;
}
void nembongxanh(){
        tomauxanh(i-1,j-1);
        tomauxanh(i-1,j);
        tomauxanh(i-1,j+1);
        tomauxanh(i,j-1);
        tomauxanh(i,j);
        tomauxanh(i,j+1);
        tomauxanh(i+1,j-1);
        tomauxanh(i+1,j);
        tomauxanh(i+1,j+1);

    }
void nembongdo(){
        tomaudo(i-1,j-1);
        tomaudo(i-1,j);
        tomaudo(i-1,j+1);
        tomaudo(i,j-1);
        tomaudo(i,j);
        tomaudo(i,j+1);
        tomaudo(i+1,j-1);
        tomaudo(i+1,j);
        tomaudo(i+1,j+1);
    }

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>m>>n>>k;
    for(long long l=1;l<=2*k;l++){
        cin>>i>>j;
        if(l%2==0) nembongxanh();
        else nembongdo();
    }
    for(long long a=1;a<=m;a++){
        for(long long b=1;b<=n;b++){
            if(f[a][b]==1) d++;
            else if(f[a][b]==2)x++;
        }
    }
cout<<d<<' '<<x;
}
