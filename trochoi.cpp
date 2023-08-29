#include<bits/stdc++.h>
using namespace std;
long long t;
long long n,y,dem;
double x;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<"FastestFinger";
        if(n==2) cout<<"Ashishgup";
        if(n>2 and n%2==1) cout<<"Ashishgup";
        if(n>2 and n%2==0){
                if((n/2)%2==1){
                    y=n/2;dem=0;
                for(long long i=3;i<=sqrt(y);i++){
                    if(y%i==0){dem++;break;}
                }
                if(dem==0) cout<<"FastestFinger";
                    else cout<<"Ashishgup";
                }
        else{
                while(n%2==0){n/=2;}
                if(n==1) cout<<"FastestFinger";
                else cout<<"Ashishgup";
            }
        }
cout<<'\n';

}
    }

