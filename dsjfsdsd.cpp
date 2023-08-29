#include<bits/stdc++.h>
using namespace std;
using ll=long long;
long long k, c;
string Convert(long long x) {
	string s;
	while (x > 0) {
		s += char(x % 10 + '0');
		x /= 10;
	}
	reverse(s.begin(), s.end());
	return s;
}
long long check(long long x)
{
    if(x<10) return x;
   ll s=0, i=1, m=1;
   while(s + m*i*9<x)
   {
       s+=m*i*9;
       i++; m=m*10;
   }
   s=x-s;
   //return i;
   if(s<=i)
           if(s==1) return 1;
           else return 0;
    long long t = s/i;
    if(s%i==0) t--;
    //return t;
    string str=Convert(t);
    string res=str;
    //return res.size();
    if(str.size()==i)
        res=str.substr(1, str.size()-1);
    long long vt=res.size();
    while(vt<i-1)
    {
        res="0"+res; vt++;
    }
   // return res[1]-'0';
    long long q=s/(m*i);
    if(s%(m*i)!=0) q++;
    if(s%i==1) return q;
    if(s%i==0) return res[res.size()-1]-'0';
    long long p=s%i;
    return res[p-2]-'0';
}
int main()
{
       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>c;
   while(c--)
   {
       cin>>k;
    cout<<check(k);
    cout<<'\n';
   }

}
