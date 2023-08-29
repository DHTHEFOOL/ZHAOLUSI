#include<bits/stdc++.h>
using namespace std;
long long ans, n, a[100004], vt1, vt2, x1, x2, dem;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   // freopen("ChuyenSoi1.Inp","r",stdin); freopen("ChuyenSoi1.Out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]!=0)
        {
            if(dem==0)
            {
                vt1=i; dem++;
                x1=a[i];
            }
            else
            {
                vt2=i;
                x2=a[i];
            }
        }
    }
   // cout<<vt1<<" "<<vt2<<endl;
    for(int i=1; i<=n; i++)
    {
        if(x1>0)
        {
            ans+=abs(vt1-i);
            x1--;
        }
        else
        {
            vt1=i;
            break;
        }
    }
    for(int i=n; i>=1; i--)
    {
        if(x2>0)
        {
            ans+=abs(vt2-i);
            x2--;
        }
        else
        {
            vt2=i;
            break;
        }
    }
    cout<<ans;


}
