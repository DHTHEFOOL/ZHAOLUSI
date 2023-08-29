#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  int A[500000],m=1;
      long long r=0,q;
      A[0]=1;
      for(long long i=2;i<=n;i++){
      for(long long j=0;j<m;j++){
           q=r;
           r=(A[j]*i+r)/10;
          A[j]=(A[j]*i+q)%10;
   }
     while(r>0){
          A[m]=r%10;
          m++;
          r=r/10;
   }
 }
        for(i=m-1;i>=0;i--)  cout<<A[i];
}
