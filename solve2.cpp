#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define vt vector
#define pb push_back
#define pob pop_back
#define all(c) c.begin(),c.end()
#define each(x,a) for(auto x:a)
#define sz(x) (ll)(x).size()
ll mod1=1000000007;
ll bit_arr[32];
void solve(){
  ll n,m,k,i,j,temp,mina,minb,sum1=0,sum2=0,ans=0;
  cin>>n;
  ll a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
    sum1+=a[i];
  }
  cin>>m;
  ll b[m];
  for(i=0;i<m;i++){
    cin>>b[i];
    sum2+=b[i];
  }
  cin>>k;
  k=n+m-k;
  for(j=0;j<=k;j++){
    if(j>n||k-j>m){
        continue;
    }
    temp=0;
    for(i=0;i<j;i++){
        temp+=a[i];
    }    
    mina=temp;
    for(;i<n;i++){
        temp+=a[i]-a[i-j];
        mina=min(mina,temp);
    }
    temp=0;
    for(i=0;i<k-j;i++){
        temp+=b[i];
    }
    minb=temp;
    for(;i<m;i++){
        temp+=b[i]-b[i-k+j];
        minb=min(minb,temp);
    }
    ans=max(ans,sum1-mina+sum2-minb);
  }
  cout<<ans;
}
int main(){
    // auto start = high_resolution_clock::now();
    // #ifdef ONLINE_JUDGE
    // freopen("ip.txt","r",stdin);
    // freopen("op.txt","w",stdout);
    // #endif
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
