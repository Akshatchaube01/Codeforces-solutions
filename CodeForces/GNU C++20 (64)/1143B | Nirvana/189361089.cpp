//Problem B . Nirvana - 1200 rated problem - Number Theory
#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define M 1000000007
#define pb push_back
#define nline "\n"
#define input(v,n) for(int i=0;i<n;i++) cin>>v[i]
#define loop(i,j,n) for(int i=j;i<n;i++) 
#define all(v) v.begin(),v.end()
using namespace std;
int main(){
    ll tst=1, n, m, k, x, q, t;
    while(tst--){
            string x;
            cin>>x;
            ll ans=1;
            ll max_ans=0;
            for(int i=0;i<x.length();i++ ) {
                int curr=x[i]-'0';
                if(curr!=1) curr-=1;
                int rem=x.length()-(i+1);
                ll temp=pow(9,rem);
                max_ans=max(max_ans,temp*curr*ans);
                ans*=x[i]-'0';
                max_ans=max(ans,max_ans);
            }
            cout<<max_ans<<nline;
    }
   return 0;
}