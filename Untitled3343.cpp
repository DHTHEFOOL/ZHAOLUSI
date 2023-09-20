#include<bits/stdc++.h>
using namespace std;
int a[100005],n,x;
int main()
{
 cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int dem=0,t=0,q=0;
    for(int i=1;i<=n;i++)
    {
    	cout<<dem<<'\n';
 //   if(a[i]>71)break;
    if(dem+a[i]==71){t++;q++;cout<<dem<<'\n';dem=0;}
    if(dem+a[i]<71){dem+=a[i];}
  //  if(dem+a[i]>71)cout<<dem+a[i]<<" ";
    
}
//cout<<t;
}