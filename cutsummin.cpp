#include<bits/stdc++.h>
using namespace std;
long long n,a[500001],sum[500001],mi,ma,ans=1e9;
void sub1()
{
    for(int i=1;i<=n-3;i++)
       for(int j=i+1;j<=n-2;j++)
           for(int k=j+1;k<=n-1;k++)
            {
                mi=min({sum[i],sum[j]-sum[i],sum[k]-sum[j],sum[n]-sum[k]});
                ma=max({sum[i],sum[j]-sum[i],sum[k]-sum[j],sum[n]-sum[k]});
                ans=min(ans,abs(ma-mi));
            }
cout<<ans;
}
void sub2()
{
    long long  s1,s2,s3,s4,ans=1e9;
    for(int j=2;j<=n-2;j++)
    {
        //tim i
        int l=1,r=j-1,mid=(l+r)/2;
        long long sumi=sum[j]-sum[mid],i1=2e9,i;
        while(l<=r)
        {
            mid=(l+r)/2;
            sumi=sum[j]-sum[mid];
            i1=min(i1,abs(sumi-sum[mid]));
            if(sumi-sum[mid]>0) l=mid+1;
            else r=mid-1;
            if(i1==abs(sumi-sum[mid])) i=mid;
        }
       //tim k
        l=j+1,r=n-1,mid=(l+r)/2;
        long long sumk1=sum[mid]-sum[j],sumk2=sum[n]-sum[mid],k1=2e9,k;
        while(l<=r)
        {
            mid=(l+r)/2;
            sumk1=sum[mid]-sum[j];sumk2=sum[n]-sum[mid];
            k1=min(k1,abs(sumk2-sumk1));
            if(sumk2-sumk1>0) l=mid+1;
            else r=mid-1;
            if(k1==abs(sumk2-sumk1)) k=mid;
        }
        //cout<<i<<" "<<k<<" ";
        s1=sum[i];
        s2=sum[j]-sum[i];
        s3=sum[k]-sum[j];
        s4=sum[n]-sum[k];
        ans=min(ans,max(s1,max(s2,max(s3,s4)))-min(s1,min(s2,min(s3,s4))));
    }
    cout<<ans;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CUTSUMMIN.inp","r",stdin);freopen("CUTSUMMIN.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    if(n<=500) sub1();
    else sub2();
}
