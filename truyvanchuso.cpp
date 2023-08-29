#include<bits/stdc++.h>
using namespace std;
long long q,k,a,c,d;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>q;
    while(q--){
        cin>>k;
        if(k>=1 and k<=9) cout<<k;
        else{
                a=10;
        for(long long i=2;i<=15;i++){
                a*=10;
            if((a*i-(a-1)/9)>k){
                d=((k-((a/10)*(i-1)-(a/10-1)/9)))%(i);
                c=((k-((a/10)*(i-1)-(a/10-1)/9))/i);
               //  cout<<((a/10)*(i-1)-(a/10-1)/9)<<' ';
                break;
            }
        }
        if(d==0){
            cout<<((a/10-1)+c)%10;
        }
        else{
            string s= to_string((a/10-1)+c+1);
           cout<<s[d-1];
        }
       // cout<<c<<' '<<d<<' '<<' '<<a;
    }
    cout<<'\n';
}
}
