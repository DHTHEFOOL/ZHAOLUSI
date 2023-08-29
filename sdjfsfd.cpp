#include<bits/stdc++.h>
using namespace std;
long long a,b,ans;
int main(){
    cin>>a>>b;
    long long c=sqrt(a*b);
    long long d=a*b;
    while(d>1){
        if(d>=c*c){d-=c*c;ans++;}
        else c--;
    }
    cout<<ans;
}
