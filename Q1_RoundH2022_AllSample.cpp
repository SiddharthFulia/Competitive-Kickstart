#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;
// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
//if RE then remove above 3 lines
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define vt vector
#define pb push_back
#define mp make_pair
#define pob pop_back
#define all(c) c.begin(),c.end()
#define each(x,a) for(auto x:a)
#define sz(x) (ll)(x).size()
// const ll N=1e5+10;
// const ll M=1e9+7;
// ll bit_arr[32];
// bool vector_second_sort(const pair<ll,ll> &a,const pair<ll,ll> &b){
//     return (a.second<b.second);
// }
void solve(){
   ll l,n,count=0,sum=0;
   cin>>l>>n;
   while(n--){
     ll x;
     char c;
     cin>>x>>c;
     if(c=='C'){
        sum+=x;
        if(sum>=l){
        count+=sum/l;
        sum%=l;
        }
     }
     else{
        sum-=x;
        if(sum<=-l){
            count+=abs(sum)/l;
            sum=-1*(abs(sum)%l);
        }
     }
   }
   cout<<count;
}
int main(){
    // auto start = high_resolution_clock::now();
    //cout<<fixed<<setprecision(10);
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    FastIO;
    ll t;
    ll i=1;
    cin>>t;
    while(t--){
    cout<<"Case #"<<i<<": ";
    solve();
    cout<<"\n";
    i++;
    }
    //  auto stop = high_resolution_clock::now();
    //   auto duration = duration_cast<microseconds>(stop - start);cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;
    return 0;
}