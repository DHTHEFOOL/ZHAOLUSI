#include<bits/stdc++.h>
using namespace std;
void solv()
{
string s;
long long k;
stack<long long>st;
cin>>s>>k;
k=s.size()-k;
for(int i=0;i<s.size();i++)
{
    if(st.empty())
   { st.push(s[i]-'0');}
    else{
        long long temp=s[i]-'0';
    while(!st.empty() and k>0 and temp>st.top())
    {
        st.pop();
        k--;
    }
    st.push(temp);
    }

}
    while(k>0)
    {
        st.pop();
        k--;
    }
   vector<long long>f;
   while(!st.empty())
   {
       f.push_back(st.top());
       st.pop();
   }
   for(int i=f.size()-1;i>=0;i--)
   cout<<f[i];
   cout<<'\n';
}
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        solv();
    }
}
