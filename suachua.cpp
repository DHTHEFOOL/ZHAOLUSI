    #include<bits/stdc++.h>
    using namespace std;
    long long n,x,y,dem,ans;
    string s;
    void huhu(long long i){
                cout<<s[i];
            for(long long j=i+1;j<x-i-1;j++){
                if(s[j]=='0') cout<<s[j];
                else{break;}

    }
    cout<<s[x-i-1];
    }
    void hihi(long long i){
                        y=0;dem=0;
                    for(long long j=x-i-1;j>=i;j--){
                        if(s[j]=='1') y++;
                            else {dem++;break;}
                    }
                    if(dem==0)for(long long i=1;i<=y;i++) cout<<1;
                    else {
                        cout<<'0';
                        for(long long i=1;i<=y;i++){
                            cout<<'1';
                        }
                    }
    }
    int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
            dem=0;
        cin>>x>>s;
    if(x==1){cout<<s<<'\n';}
    else{
        if(s[0]=='0' and s[x-1]=='1'){

                y=1;
                long long p=1;
                cout<<s[0];
        if(x%2==0){
            for(long long i=1;i<x/2;i++){
                if(s[i]=='0' and s[x-1-i]=='0'){huhu(i);break;}
               if(s[i]=='1' and s[x-1-i]=='1'){hihi(i);break;}
               if(s[i]=='1' and s[x-1-i]=='0'){cout<<'0';break;}
                if(s[i]=='0' and s[x-1-i]=='1'){cout<<s[i];p++;continue;}
            }
            for(long long i=1;i<=p;i++) cout<<1;
        } else {
            long long q=1;
             for(long long i=1;i<x/2;i++){
                if(s[i]=='0' and s[x-1-i]=='0'){huhu(i);break;}
               if(s[i]=='1' and s[x-1-i]=='1'){hihi(i);break;}
               if(s[i]=='1' and s[x-1-i]=='0'){cout<<'0';break;}
                if(s[i]=='0' and s[x-1-i]=='1'){cout<<s[i];p++;q++;continue;}
            }
           if(q==x/2) cout<<s[x/2];
            for(long long i=1;i<=p;i++) cout<<1;
        }
        }
        if(s[0]=='0' and s[x-1]=='0'){
                cout<<s[0];
            for(long long i=1;i<x-1;i++){
                if(s[i]=='0') cout<<s[i];
                else{break;}
            }
            cout<<s[x-1];
    }
            if(s[0]=='1' and s[x-1]=='1'){
                    y=0;
                    for(long long i=x-1;i>=0;i--){
                        if(s[i]=='1') y++;
                            else {dem++;break;}
                    }
                    if(dem==0) for(long long i=1;i<=y;i++) cout<<'1';
                    else {
                        cout<<'0';
                        for(long long i=1;i<=y;i++){
                            cout<<'1';
                        }
                    }
    }
            if(s[0]=='1' and s[x-1]=='0'){
                    cout<<'0';
    }
    }
    cout<<'\n';
    }
    }
