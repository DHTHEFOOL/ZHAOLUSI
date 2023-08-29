#include<bits/stdc++.h>
using namespace std;
float x,y;
float c,dem1,dem2;
string s1,s2;
int main(){
cin>>s1>>s2;
long long t=s1.size();
for(long long i=0;i<t;i++){
    if(s1[i]=='+') x++;
    else if(s1[i]=='-') x--;
    if(s2[i]=='+') x--;
    if(s2[i]=='-') x++;
    if(s2[i]=='?') c++;
}
if(c==0){
    if(x==0) cout << setprecision(9) << fixed << 1.000000000 <<'\n';
    else cout << setprecision(9) << fixed << 0.000000000 <<'\n';
}
if(c==1){
    if(x==1 or x==-1)cout << setprecision(9) << fixed << 0.500000000 <<'\n';
    else cout << setprecision(9) << fixed << 0.000000000 <<'\n';
}
if(c==2){
    dem2+=2;
if(c==x) dem1++;
if(-c==x) dem1++;
if(x==0){dem2+=2;dem1+=2;}
float ans=dem1/dem2;
 cout << setprecision(9) << fixed << ans <<'\n';
 //cout<<ans;
}
if(c>2){
dem2=2+2*c;
if(c==x) dem1++;
if(-c==x) dem1++;
if(c-1==x) dem1+=c;
if(1-c==x) dem1+=c;
for(long long i=2;i<c-1;i++){
        y=1*i-1*(c-i);
if(i<c/2){
if(y==x) dem1+=(c-i+1)*(c-i)/2;
dem2+=(c-i+1)*(c-i)/2;
} else {
if(y==x) dem1+=(i+1)*i/2;
dem2+=(i+1)*i/2;
}
}
if(dem1==0) cout << setprecision(9) << fixed << 0.000000000 <<'\n';
else{
float ans=dem1/dem2;
 cout << setprecision(9) << fixed << ans <<'\n';
 //cout<<dem1<<' '<<dem2;
}
}
}
}
