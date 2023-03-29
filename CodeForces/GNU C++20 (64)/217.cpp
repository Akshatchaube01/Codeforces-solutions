//Integer Diversity - Good bye 2021

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
ll ppow(ll n, ll m, ll mod){
    if(m==0) return 1;
    ll tmp=ppow(n, m/2, mod);
    tmp=tmp*tmp%mod;
    return m%2 ? tmp*n%mod: tmp;
}
namespace mod_operations{
    ll modInv(ll n, ll mod){
        return ppow(n,mod-2, mod);
    }
    ll modAdd(ll n, ll m, ll mod){
        n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
        return (n+m)%mod;
    }
    ll modMul(ll n, ll m, ll mod){
        n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
        return n*m %mod;
    }
    ll modSub(ll n, ll m, ll mod){
        n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
        return modAdd(n,-m, mod);
    }
    ll modDiv(ll n, ll m, ll mod){
        return modMul(n, modInv(m, mod), mod);
    }
}
using namespace mod_operations;
class Codeforces
{
    private:
        const ll INF=1e18;
        const ll mod1=1e9+7;
        const ll mod2=998244353;
    public:
        Codeforces(){}
        ll power(ll x,ll y){
            ll result=1;
            while(y>0){
                if(y&1){
                    result*=x;
                }
                y>>=1;
                x*=x;
            }
            return result;
        }

        ll power(ll x,ll y,ll mod){
            ll result=1;
            x%=mod;
            while(y>0){
                if(y&1){
                    result*=x;
                    result%=mod;
                }
                y>>=1;
                x*=x;
                x%=mod;
            }
            return result;
        }

        ll str_to_num(string s)
        {
            stringstream pk(s);
            ll num;
            pk>>num;
            return num;
        }

        string num_to_str(ll num)
        {
            return to_string(num);
        }
        ll solve()
        {
            ll n;
            cin>>n;
            map<ll,ll> m;
            for(ll i=0;i<n;i++){
                ll temp;
                cin>>temp;
                if(m[temp]){
                    m[-temp]++;
                }
                m[temp]++;
            }
            cout<<sz(m)<<endl;

            return 0;
        }
};
int main(){
    speed;
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--)
    {
        Codeforces cf;
        cf.solve();
    }
}
