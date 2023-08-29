#include<bits/stdc++.h>
using namespace std;
int n,s,m;
string t;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>s;
    if(s>(n-1)*9){cout<<s-(n-1)*9;s=(n-1)*9;}
    else{
        for(int i=1;i<=9;i++){
            if(s-i<=(n-1)*9){cout<<i;s-=i;break;}
        }
    }
    n--;
    while(n>0){
    if(s>(n-1)*9){
       cout<<s-(n-1)*9;
    s=(n-1)*9;
    }
    else{
        for(int i=0;i<=9;i++){
            if(s-i<=(n-1)*9){cout<<i;s-=i;break;}
        }
    }
    n--;
}
}
